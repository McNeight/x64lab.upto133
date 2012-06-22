
  ;#-------------------------------------------------�
  ;|          x64lab  MPL 2.0 License                |
  ;|   Copyright (c) 2009-2012, Marc Rainer Kranz.   |
  ;|            All rights reserved.                 |
  ;|-------------------------------------------------|
  ;|      Dienstag] - 19.Juni.2012 - 10:51:19        |
	;| structs.inc                                     |
	;�-------------------------------------------------�

	MAX_NUMTOOLS equ 255
	MAX_MNUCPTS	 = 80h
	MAX_MNULEN	=  MAX_MNUCPTS*2 + 10h
	ERROR_NO_MORE_FILES = 18
	IDM_FIRSTCHILD   equ 50000
		MAX_EXTLEN equ 78

	;struct ICONINFO
	;	fIcon	dd ?
	;	xHotspot dd ?
	;	yHotspot dd ?
	;	hbmMask dd ?
	;	hbmColor dd ?
	;ends

	SLOT_CREATEDIR	equ 1
	SLOT_UPDATE			equ 2

	TAB_CONSOLE = 0
	TAB_CALC = 1

	MPOS_WS		equ 0
	MPOS_FILE	equ 1
	MPOS_EDIT	equ 2
	MPOS_WIN	equ 3

	WSP_COL_BUF	 equ 0
	WSP_COL_TYPE equ 1
	WSP_COL_SIZE equ 2
	WSP_COL_CDATE equ 3

;	APPDIR		equ 0
;	BACKDIR		equ 1
;	CONFDIR		equ 2
;	LOGDIR		equ 3
;	MOUNTDIR	equ 4
;	PLUGDIR		equ 5
;	PROJDIR		equ 6
;	TEMPLDIR	equ 7
;	TMPDIR		equ 8
;	TOOLDIR		equ 9

	DIR_DEFDIR		equ 1
	DIR_HASREF		equ 2
	
	struct DIR
		hash	dq ?
		hnext	dq ?
		
		iIcon	dd ?
		len		dd ? 	;--- block len
		used	dd ?
		type	dw ?
		cpts	dw ?

		rdir	dq ?	;--- real dir SLOT
					dq ?
		dir		db FILE_BUFLEN dup (?)
	ends

	struct IODLG
		param	dq 0		;--- IN param	
		ldir	dq 0		;--- last dir
		rc		RECT
		buflen	dw 0	;--- buf len
		set			db 0
						db 0
						dd 0

		hDlg	dq 0
		hStc1	dq 0
		hStc2	dq 0
		hCbx	dq 0
		hBtn	dq 0
		hStc3	dq 0
		hEdi	dq 0
		hCanc	dq 0
		hOk		dq 0
		buf		db FILE_BUFLEN dup (?)
	ends

	;--- Ownerdraw menuitem
	struct OMNI	
		id			dw 0
		iIcon		dw 0
;		flags		dw 0
;		type		dw 0
;		state		dw 0
;		text		dw 0
;						dw 0
;						dw 0
	ends

	;--- common to EXT/HILI/CFG
	struct SLOT
		hash	dq ?
		next	dq ?
		;-------------
		type		db ?
		len			db ?
		stype		db ?	;--- slot type
						db ?
		used		dd ?
						dq ?
		;-------------
		union
			cfg			dq ?	;--- EXT
			param1	dq ?	;--- CFG
		ends
		union
			hili		dq ?	;--- EXT
			param2	dq ?	;--- CFG
			stuff		dq ?	;--- HILI formatted bin stuff
		ends
		name		db (MAX_EXTLEN+2) dup (?)
	ends


	;-------- LABFILE -------------
	LF_NULL		equ 0
	LF_WSP		equ 1		;--- workspace marker
	LF_PRJ		equ 2		;--- project
	LF_FILE		equ 4		;--- file
	LF_LNK		equ 8	 	;--- smartlink for dir
	;LF_UNB		equ 10h	;--- unbound

	LF_TXT		equ 20h	 ;--- text file
	LF_BIN		equ 40h	 ;--- binary
	LW_OTH		equ 80h  ;--- other type
	LF_OPENED	equ 100h ;--- file is opened
	LF_MODIF	equ 200h ;--- modified
	LF_BLANK	equ 400h ;--- new item without disk-storage
	

	NOASK_SAVE 		= 1
	ASK_SAVE 			= 2
	DISCARD				= 4

	PROJ_MODIFIED	= 1

	struct LABFILE
						dq 0
		union
			hItem	dq 0	;--- treeitem
			hRoot	dq 0	;--- treeroot
		ends
									
		union
			hSci		dq 0	;--- scintilla win
			hBin		dq 0	;--- hex container
			hView		dq 0	;--- generic view window
		ends
		dir			dq 0	;--- slot dir

		alen		dw 0	;--- total available following len
		cpts		dw 0	;--- cpts, text following item
		idx			dw 0	;--- index slot,
		level		db 0	;--- BY SAVING level
						db 0
		ext			dq 0	;--- extension slot

		type		dw 0	;--- LF_?
		flags		db 0	;--- states /children/ by saving
		iBlank	db 0 	;--- index blank
		iIcon		dd 0	;--- index icon
		hIcon		dq 0	;--- icon handle
ends

	struct EDIT
		pPanel	dq 0
		hwnd		dq 0

		cx_font	dw 0
		cy_font	dw 0
		type		dw 0
		docs		dw 0
		hStb		dq 0

		curlabf	dq 0
		blanks	dq 0 ;--- max 64 blank new file
		deflabf	dq 0
						dq 0
		hBtn	dq 0
		hFont	dq 0
	ends

	STATB_NOPART	equ 0
	STATB_ENCPART equ 1
	STATB_DIRPART	equ 2
	STATB_EOLPART	equ 3
	STATB_PARTS		equ 4

	MAX_PLUG	equ 15

;	struct PLUG
;		hPanel	dq 0
;		hDlg		dq 0
;		hTab		dq 0
;		selplug	db 0
;		cy_tab	db 0
;						dw 0
;						dd 0
;						dq 0
;		plugs		dq MAX_PLUG dup (0)
;	ends

;	struct XCOMP
;			dq 0
;			dq 0
;			dq 0
;			dq 0
;	ends

	struct CONS
		hCbx			dq 0
		hSci			dq 0
		cmd				db 512 dup (0)
		part0			dd 0
		part_enc	dd 0
		part_dir 	dd 0
		part_eol	dd 0
	ends

	struct CPROP
		hCbxCat		dq 0
		hCbxFilt	dq 0
		hPrg			dq 0
		hLview		dq 0
		;---
		iCat			dw 0
		iFilt			dw 0
							dd 0
							dq 0
	ends

	struct KEYDLG
		hDlg			dq 0
		hLview		dq 0
		hHot			dq 0
		hSet			dq 0
	ends

	struct CONFIG
		version	dw 64h
		flags		db 0
						db 0
		cdate		dd %t
		adate		dd %t
		fshow		db 1
		flog		db FALSE
		fsplash	db FALSE
						db 0
		;-------------------------
		update			dd FALSE
		session			dd 0
		tree.bkcol	dd 0D9FFFFh
		cons.bkcol	dd 0AABBCCh
		;-------------------------
		pos				RECT 0,0,320h,2BCh
		cons.pos	RECT 0,0,0,0
		tree.pos	RECT 0,0,0,0
		;-------------------------
		wsp		db FILE_BUFLEN dup (?)
	ends

	
	;---------- scintilla related -------------
	LINE_COMMENT		= 1
	LINE_DECOMMENT	= 2
	LINE_INCEMPTY		= 4

	CX_GAP equ 3
	CY_GAP equ 3
	define INFINITE 0xFFFFFFFF

;struct TOOL_SLOT
;	hash		dd 0
;	name		dd 0
;	exec		dd 0
;	path			dd 0
;	descript	dd 0
;	numcmd	dw 0
;	numenv	dw 0
;ends		

;struct TINFO
;	lenname 	dw 0
;	lenvalue 	dw 0
;ends

;struct DEVTOOL
;	lenfile		dw 0
;	afname		dw 0
;	flags			dd 0
;	pnexttool	dd 0
;	hIcon			dd 0
;ends

;struct CMD_STRUCT
;	hOutput		dd 0
;	pCommand 	dd 0
;	paramA		dd 0
;	retvalue	dd 0
;ends

;struct CUTITEM TV_ITEM
;	hChild			dd 0	;current window to disable
;	hText				dd 0	;current edit/hex disable window
;	fDragItem		dd 0	;flag if dragging 
;	cutItem			dd 0	;flag if cutting /it is an hItem or a pointer to hItems
;	pLabFile		dd 0
;	numitems		dd 0
;ends

