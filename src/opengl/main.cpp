#include <GL/glut.h> // freeglut.h might be a better alternative, if available.
#include <iostream>
#include <GLFW/glfw3.h>

using namespace std;

void display()
{ // Display function will draw the image.

    glClear(GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    glBegin(GL_TRIANGLES);
    glColor3f(1, 0, 0); // red
    glVertex2f(-0.8, -0.8);
    glColor3f(0, 1, 0); // green
    glVertex2f(0.8, -0.8);
    glColor3f(0, 0, 1); // blue
    glVertex2f(0, 0.9);
    glEnd();

    glFlush();
    glutSwapBuffers();
}

void init()
{
    glClearColor(0.0, 0.0, 0.0, 1.0);
    glColor3f(0.0, 0.0, 0.0);
    gluPerspective(30, 1, 0.1, 500);
    glScalef(1, 1, 1);
    gluLookAt(2, 2, 2, 0, 0.2, 0, 0, 1, 0);

    // std::cout << glGetString( GL_VENDOR );
    // std::cout << glGetString( GL_RENDERER );
    // std::cout << glGetString( GL_VERSION );
}

int main(int argc, char **argv)
{ // Initialize GLUT and

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);        // Size of display area, in pixels.
    glutInitWindowPosition(0, 0);        // Location of window in screen coordinates.
    glutCreateWindow("GL RGB Triangle"); // Parameter is window title.
    glutPositionWindow(100, 100);

    init();
    glutDisplayFunc(display); // Called when the window needs to be redrawn.

    glutMainLoop(); // Run the event loop!  This function does not return.
                    // Program ends when user closes the window.
    return 0;
}
