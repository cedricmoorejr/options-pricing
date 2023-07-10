@echo off
setlocal enabledelayedexpansion

echo List of .cpp files in Current Directory
echo.
echo ========================================

set count=0
for /r %%f in (*.cpp) do (
    set /a count+=1
    echo !count!. %%~nxf
)
echo ========================================
echo.

set /p choice="Enter the number associated with the file you want to compile: "

set count=0
for /r %%f in (*.cpp) do (
    set /a count+=1
    if !count! equ %choice% set "source_file=%%~nxf"
)

set /p program_name="Enter the name for the compiled program (without .exe extension): "

echo Compiling C++ program...
g++ -o %program_name%.exe %source_file%
echo Compilation completed.
