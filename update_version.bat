@if not exist "%programfiles%\TortoiseSVN\bin\SubWCRev.exe" goto :x64

@"%programfiles%\TortoiseSVN\bin\SubWCRev.exe" .\ src\SubWCRev.conf src\svn_version.h -f
@if %ERRORLEVEL% neq 0 goto :NoSubWCRev
@goto :eof

:x64
@if not exist "%ProgramW6432%\TortoiseSVN\bin\SubWCRev.exe" goto :NoSubWCRev

@"%ProgramW6432%\TortoiseSVN\bin\SubWCRev.exe" .\ src\SubWCRev.conf src\svn_version.h -f
@if %ERRORLEVEL% neq 0 goto :NoSubWCRev
@goto :eof

:NoSubWCRev
@echo NoSubWCRev
@echo #define SVN_REVISION 3844 > src\svn_version.h
@echo #define BUILD_YEAR 2011 >> src\svn_version.h
@echo #define BUILD_MONTH 5 >> src\svn_version.h
@echo #define BUILD_DAY 11 >> src\svn_version.h
@echo #define ACTUAL_BUILD_YEAR 2011 >> src\svn_version.h
@echo #define ACTUAL_BUILD_MONTH 5 >> src\svn_version.h
@echo #define ACTUAL_BUILD_DAY 11 >> src\svn_version.h
@echo #define ACTUAL_BUILD_TIME 15:20:00 >> src\svn_version.h
