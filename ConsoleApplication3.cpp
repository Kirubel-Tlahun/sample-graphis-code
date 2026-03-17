#include <GL/glut.h>

void init()
{
    glClearColor(0.8, 0.9, 1.0, 1);
    glMatrixMode(GL_PROJECTION);
    glOrtho(-10, 10, -10, 10, -10, 10);
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    // green grasss
    glColor3f(0.3, 0.7, 0.3);
    glBegin(GL_QUADS);
    glVertex2f(-10, -2);
    glVertex2f(10, -2);
    glVertex2f(10, -10);
    glVertex2f(-10, -10);
    glEnd();

    //bord
    glColor3f(0.8, 0.6, 0.4);
    glBegin(GL_QUADS);
    glVertex2f(-4, -2);
    glVertex2f(4, -2);
    glVertex2f(4, 3);
    glVertex2f(-4, 3);
    glEnd();

    // triangle
    glColor3f(0.5, 0.1, 0.1);
    glBegin(GL_TRIANGLES);
    glVertex2f(-5, 3);
    glVertex2f(5, 3);
    glVertex2f(0, 7);
    glEnd();

    //door
    glColor3f(0.4, 0.2, 0.0);
    glBegin(GL_QUADS);
    glVertex2f(-1, -2);
    glVertex2f(1, -2);
    glVertex2f(1, 1);
    glVertex2f(-1, 1);
    glEnd();
    

    // window
    glColor3f(0.9, 0.9, 1.0);
    glBegin(GL_QUADS);
    glVertex2f(2, 0);
    glVertex2f(3.5, 0);
    glVertex2f(3.5, 1.5);
    glVertex2f(2, 1.5);
    glEnd();
    

    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    glutInitWindowSize(600, 600);
    glutCreateWindow("Simple Hut - GLUT");

    init();
    glutDisplayFunc(display);
    glutMainLoop();
} 