/*
 * This is a very basic Windows C application for testing GLUT (and compatible
 * implementations such as freeglut). It displays a red square, and exits when
 * the escape key is pressed.
 */

#include <stdlib.h>
#include <GL/glut.h>
#include "render.c"

int main(int argc, char** argv) {

  glutInit(&argc, argv);

  glutCreateWindow("\\o/");
  glutReshapeWindow(600, 600);
  // glutKeyboardFunc(&keyboard);
  glutDisplayFunc(&display);

  glutMainLoop();

  return EXIT_SUCCESS;
}
