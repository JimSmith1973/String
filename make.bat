cls

del *.exe

g++ -mwindows -m64 -static -Wall -Wextra Minimal.cpp ^
 ^
 ..\Classes\ArgumentListClass.cpp ^
 ..\Classes\MessageClass.cpp ^
 ^
 -o Minimal.exe
