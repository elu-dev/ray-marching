g++ -c -o .\out\main.o .\src\main.cpp -I".\include"
g++ -o .\out\main.exe .\out\main.o -L".\lib" -lfreeglut -lopengl32 -lglew32 -Wl,--subsystem,windows
.\out\main.exe