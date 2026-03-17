#include<gl/glut.h>

void init()
{
	// set back ground color
	glClearColor(1, 1, 1, 0);
	glMatrixMode(GL_PROJECTION);
	glOrtho(-40, 40, -40, 40, -40, 40);
}
void display()
{
	//clear frame buffer
	glClear(GL_COLOR_BUFFER_BIT);

	glLineWidth(10);
	glColor3f(0, 1, 0); // red color
	glBegin(GL_QUADS);
  glVertex2f(-20, 0);
  glVertex2f(-20, 20);
  glVertex2f(20, 20);
  glVertex2f(20, 0);
  glEnd();

  glBegin(GL_QUADS);
  glVertex2f(-10, 20);
  glVertex2f(-10, 30);
  glVertex2f(10, 30);
  glVertex2f(10, 20);
  glEnd();


  glColor3f(0, 0, 1); //blue color left side
  glBegin(GL_TRIANGLES);
  glVertex2f(-15, 20);
  glVertex2f(-10, 30);
  glVertex2f(-10, 20);
  glEnd();

  glColor3f(0, 0, 1); //blue color right side
  glBegin(GL_TRIANGLES);
  glVertex2f(15, 20);
  glVertex2f(10, 30);
  glVertex2f(10, 20);
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