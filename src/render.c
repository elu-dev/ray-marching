#include <stdlib.h>
#include <GL/glut.h>
#include <GL/glu.h>

/* Keyboard callback function */
void keyboard(unsigned char key, int x, int y) {
    switch (key) {
        /* Exit on escape key press */
        case '\x1B': {
            exit(EXIT_SUCCESS);
            break;
        }
    }
}

const float d = 1.0f / 600.0f;

/* Display callback function */
void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    /* Display a red square */
    glColor3f(1.0f, 0.0f, 0.0f);

    glBegin(GL_POINTS);
        for (float y = -1.0f; y < 1.0f; y+=1.0f / 600.0f)
        for (float x = -1.0f; x < 1.0f; x+=1.0f / 600.0f) {
            glColor3f((x+1)/2, (y+1)/2, 1.0f);
            // glColor3f(1.0f, 1.0f, 1.0f);
            glVertex2f(x, y);
        }
    glEnd();

    glFlush();
}
