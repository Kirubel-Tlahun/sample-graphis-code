#include<iostream>
#include <GL/glut.h>
using namespace std;
float r = 1;
float g = 0;
float b = 0;
void init()
{
    glClearColor(1, 1, 1, 0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-40, 40, -40, 40, -40, 40);

}
void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(r, g, b);
    glBegin(GL_POLYGON);
    glVertex2f(-20, -20);
    glVertex2f(-20, 2);
    glVertex2f(2, 2);
    glVertex2f(2, -20);
    glEnd();
    glFlush();
}
void KeyWord(unsigned char key, int x, int y) {

    switch (key) {
    case 'r':
        r = 1;
        g = 0;
        b = 0;
        break;
    case 'g':
        r = 0;
        g = 1;
        b = 0;
        break;
    case 'b':
        r = 0;
        g = 0;
        b = 1;
        break;
    default:
        r = 0;
        b = 0;
        g = 0;
    }

    glutPostRedisplay();
}

void mouse(int button, int state, int x, int y) {

    if (x >= 320 && x <= 670 && y >= 308 && y < 490) {
        if (button == GLUT_LEFT_BUTTON && state == GLUT_UP) {
            r = 0;
            b = 0;
            g = 0;
            cout << x << " " << y;
        }
        else if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN) {
            r = 0;
            b = 1;
            g = 1;
            cout << x << " " << y;

        }

    }
    glutPostRedisplay();
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    glutInitWindowPosition(0, 0);
    glutInitWindowSize(600, 600);
    glutCreateWindow("EventHandling");
    init();
    glutDisplayFunc(display);
    glutKeyboardFunc(KeyWord);
    glutMouseFunc(mouse);
    glutMainLoop();
}