@echo off
set /p birthyear= Enter your birth year:
set /a age= %date:~ 10,4%-%birthyear%
echo Age:%age%

echo %date%
echo %date:~ 4,2%

echo %date%
echo %date:~ 7,2%
pause
