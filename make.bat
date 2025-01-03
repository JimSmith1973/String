cls

del *.exe

g++ -mwindows -m64 -static -Wall -Wextra String.cpp ^
 ^
 ..\Classes\ArgumentListClass.cpp ^
 ..\Classes\MessageClass.cpp ^
 ..\Classes\StringClass.cpp ^
 ^
 -o String.exe
