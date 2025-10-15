@echo off
setlocal enabledelayedexpansion
cd /d "%~dp0"

echo Compiling all .cpp files in %cd%...
set FILES=

for %%f in (*.cpp) do (
    set FILES=!FILES! "%%f"
)

if "%FILES%"=="" (
    echo No .cpp files found!
    exit /b 1
)

echo Running: g++ -fdiagnostics-color=always -g %FILES% -o main.exe
g++ -fdiagnostics-color=always -g %FILES% -o main.exe

if %errorlevel% neq 0 (
    echo.
    echo Build failed.
    exit /b %errorlevel%
)

echo.
echo Build successful
echo Output: main.exe
endlocal