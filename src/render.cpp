#include <stdlib.h>
#include <GL/glut.h>
#include <GL/glu.h>

void keyboard(unsigned char key, int x, int y) {
    switch (key) {
        case '\x1B': {
            exit(EXIT_SUCCESS);
            break;
        }
    }
}

const float d = 1.0f / 600.0f;

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glFlush();
}
