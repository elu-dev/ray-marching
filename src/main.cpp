#include <stdlib.h>
#include <GL/glut.h>
#include "render.cpp"

int main(int argc, char** argv) {

  glutInit(&argc, argv);

  glutCreateWindow("\\o/");
  glutReshapeWindow(600, 600);
  // glutKeyboardFunc(&keyboard);
  glutDisplayFunc(&display);

  glutMainLoop();

  return EXIT_SUCCESS;
}
