g++ -c -o .\out\main.o .\src\main.cpp -I"C:\Program Files\Common Files\MinGW\freeglut\include" -I"C:\Program Files\Common Files\MinGW\glew\include"
g++ -o .\out\main.exe .\out\main.o -L"C:\Program Files\Common Files\MinGW\freeglut\lib\x64" -lfreeglut -lopengl32 -L"C:\Program Files\Common Files\MinGW\glew\lib\Release\x64" -lglew32 -Wl,--subsystem,windows
.\out\main.exe