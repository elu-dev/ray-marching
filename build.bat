g++ -c -o .\temp\main.o .\src\main.cpp -I"C:\Program Files\Common Files\MinGW\freeglut\include"
g++ -o .\out\main.exe .\temp\main.o -L"C:\Program Files\Common Files\MinGW\freeglut\lib\x64" -lfreeglut -lopengl32 -Wl,--subsystem,windows
.\out\main.exe