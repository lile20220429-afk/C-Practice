@echo off
set "sourceFile=%~1"
set "fileDir=%~2"
set "baseName=%~3"

cd /d "%fileDir%"
g++ -fdiagnostics-color=always -g "%sourceFile%" -o "..\build\%baseName%.exe" -lwinmm -lgdi32 -lgdiplus -static -static-libgcc -static-libstdc++ -std=c++11 -Wall -Wextra
if %errorlevel% equ 0 (
    copy /Y "..\build\%baseName%.exe" "..\build\program.exe" >nul
)