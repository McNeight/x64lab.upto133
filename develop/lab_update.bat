@echo off
 call build_all.bat
  IF ERRORLEVEL 1 GOTO err_exit

copy x64lab.exe ..\ /Y
copy x64lab.exe.manifest ..\ /Y
copy version.txt ..\ /Y
copy LICENSE.TXT ..\ /Y
copy README.TXT ..\ /Y

copy config\x64lab.bmp ..\config /Y
xcopy config\ext ..\config\ext\ /E /Y
xcopy plugin\lang\en-US\lang.dll ..\plugin\lang\en-US\ /Y
copy plugin\dock64.dll ..\plugin /Y
copy plugin\bk64.dll ..\plugin /Y
copy plugin\top64.dll ..\plugin /Y
copy plugin\Scilexer64.dll ..\plugin /Y
xcopy help ..\help\*.* /E /Y


set /p vers=<version.txt
date/T >tmpfile.tmp
set /p newdate=<tmpfile.tmp
set comment=" ... "

echo.> tmpfile.tmp
IF not "%1"=="" set comment=%1
  
echo - version %vers% (released on %newdate%) %comment% >> tmpfile.tmp
type WHATSNEW.TXT >> tmpfile.tmp
copy tmpfile.tmp WHATSNEW.TXT /Y
del tmpfile.tmp
copy WHATSNEW.TXT ..\ /Y

set vers=
set newdate=
set comment=

:err_exit
	