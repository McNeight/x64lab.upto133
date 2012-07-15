  
  ;#-------------------------------------------------ß
  ;|          lang MPL 2.0 License                   |
  ;|   Copyright (c) 2011-2012, Marc Rainer Kranz.   |
  ;|            All rights reserved.                 |
  ;ö-------------------------------------------------ä

  ;#-------------------------------------------------ß
  ;| uft-8 encoded üäöß
  ;| update:
  ;| filename:
  ;ö-------------------------------------------------ä

	
	@make_lang LANG
	@make_uz \
		UZ_ERR_NOFILE,0,U8+UR,db "Cannot find specified file",\
		UZ_HOME,0,U8+UR,db "http://sites.google.com/site/x64lab/",\
		UZ_CONS_WIN,0,U8+UR,db "Console",\
    UZ_EXPR_WIN,0,U8+UR,db "xComp",\
    UZ_EDIT_PANE,0,U8+UR,db "Editor Panel",\
    UZ_EDIT_UNTL,0,U8+UR,db "00_buffer.untitled",\
    UZ_ERR_NODIR,0,U8+UR,db "Directory does not exist",\
    UZ_WSPACE,0,U8+UR,db "x64lab Workspace",\
    UZ_CURDIR,0,U8+UR,db "Current directory",\
    UZ_FSAVE,0,U8+UR,db "Save file ",\
    UZ_CPWIN,0,U8+UR,db "Properties",\
		UZ_CPPROCS,0,U8+UR,db "Running Processes",\
    UZ_CPDIRS,0,U8+UR,db "Files and folders",\
    UZ_CPNOSEL,0,U8+UR,db "No selection",\
		UZ_INFO_UTF8,0,U8+UR,db ";--- Warning!! utf8 no-BOM äöüß",\
		UZ_INFO_TOP,0,U8+UR,db ";--- TOP format file for x64lab",\
		UZ_INFO_COPYR,0,U8+UR,db ";--- Copyright Marc Rainer Kranz 2009-2012",\
		UZ_INFO_CDATE,0,U8+UR,db "Cstamp",\
		UZ_INFO_SIZE,0,U8+UR,db "Size",\
		UZ_INFO_TYPE,0,U8+UR,db "Type",\
		UZ_INFO_BUF,0,U8+UR,db "Name",\
		UZ_INFO_SELITEM,0,U8+UR,<db \
			"Please select a treeitem from the Workspace",13,10,\
			"after which new stuff will be inserted.">,\
		UZ_OK,0,U8+UR,db "Ok",\
		UZ_NO,0,U8+UR,db "No",\
		UZ_CANCEL,0,U8+UR,db "Cancel",\
		UZ_IO_SELDPF,0,U8+UR,db "Select destination path and filename",\
		UZ_IO_DPATH,0,U8+UR,db "Dest. path",\
		UZ_IO_KDIR,0,U8+UR,db "Known directories",\
		UZ_IO_DFNAME,0,U8+UR,db "Dest. filename",\
		UZ_IO_EXT,0,U8+UR,db "filename.ext",\
		UZ_WSP_EXT,0,U8+UR,db "filename.x64lab",\
		UZ_OVERWFILE,0,U8+UR,db "File exists already. Overwrite ?",\
		UZ_COURNEW,0,U8+UR,db "Courier New",\
		UZ_IO_NEWWSP,0,U8+UR,db "Create a new Workspace",\
		UZ_IO_SAVEWSP,0,U8+UR,db "Save current Workspace",\
		MP_WSPACE,0,U8+UR,db "Work&space",\
			MI_WS_LOAD,0,U8+UR,db "&Load",\
			MI_WS_NEW,0,U8+UR,db "&New",\
			MI_WS_ADD,0,U8+UR,db "Add &Project",\
			MI_WS_BACK,0,U8+UR,db "&Backup",\
			MI_WS_EXP,0,U8+UR,db "E&xport to archive",\
			MI_WS_SAVE,0,U8+UR,db "Save all",\
			MI_WS_SAVET,0,U8+UR,db "Save as template",\
			MI_WS_RECODE,0,U8+UR,db "Encode...",\
			MP_WS_REC,0,U8+UR,db "Recent workspaces",\
			MI_WS_EXIT,0,U8+UR,db "Exit",\
		MP_FILE,0,U8+UR,db "&File",\
			MI_FI_OPEN,0,U8+UR,db "Open documents",\
			MI_FI_NEWB,0,U8+UR,db "New blank document",\
			MI_FI_NEWF,0,U8+UR,db "New file",\
			MI_FI_IMP,0,U8+UR,db "Import into workspace",\
			MI_FI_CLOSE,0,U8+UR,db "Close doc",\
			MI_FI_CCOPY,0,U8+UR,db "Create a copy",\
			MI_FI_SAVE,0,U8+UR,db "Save current file",\
			MI_FI_SAVEAS,0,U8+UR,db "Save as",\
			MI_FI_ENCO,0,U8+UR,db "Encode current",\
			MI_FI_BACK,0,U8+UR,db "Backup as",\
		MP_EDIT,0,U8+UR,db "Edit",\
			MI_ED_LNK,0,U8+UR,db "Insert new smartlink",\
			MI_ED_REM,0,U8+UR,db "Remove item from workspace",\
			MP_WIN,0,U8+UR,db "Window",\
		MP_DEVT,0,U8+UR,db "Developer tools",\
		MP_CONF,0,U8+UR,db "Configurator",\
		MP_HELP,0,U8+UR,db "Help",\
		MP_PATH,0,U8+UR,db "[?]",\
			MI_PA_CONS,0,U8+UR,db "Open console here",\
			MI_PA_BROWSE,0,U8+UR,db "Browse",\
			MI_PA_FIND,0,U8+UR,db "Find here",\
			MI_PA_COPY,0,U8+UR,db "Copy this path",\
			MI_PA_SETPROP,0,U8+UR,db "Set browsing",\
			BB_NULL,0,U8+UR,db "browse by (...only an idea)",\
			BB_WSP,0,U8+UR,db "Workspace and files",\
			BB_FOLDER,0,U8+UR,db "Folder",\
			BB_CODE,0,U8+UR,db "Code",\
			BB_CALL,0,U8+UR,db "Call/er",\
			BB_COMMENT,0,U8+UR,db "Comments",\
			BB_DATA,0,U8+UR,db "Data quantities",\
			BB_EXPORT,0,U8+UR,db "Exported funcs",\
			BB_FLOW,0,U8+UR,db "Flow",\
			BB_IMM,0,U8+UR,db "Immediates",\
			BB_IMPORT,0,U8+UR,db "Imported funcs",\
			BB_LABEL,0,U8+UR,db "Labels",\
			BB_MACRO,0,U8+UR,db "Macro",\
			BB_PROC,0,U8+UR,db "Procs and Calleé",\
			BB_REG,0,U8+UR,db "Registers",\
			BB_RET,0,U8+UR,db "Returns",\
			UZ_INFO_LNK,0,U8+UR,db "Create a new smartlink",\
			UZ_LNK_NAME,0,U8+UR,db "smartlinkname",\
			UZ_LNK_MAP,0,U8+UR,db "mapped by",\
			UZ_LNK_DESC,0,U8+UR,db "Choose a directory as reference"
