#include <iostream>
#include <GL/glut.h>
#include <cmath>
#define PI 3.1415926
static GLuint estrella;

void init()
{
	estrella = glGenLists(1);

	glNewList(estrella, GL_COMPILE);

	glBegin(GL_TRIANGLE_STRIP);
	for (int i = 0; i < 4; i++)
	{
		double angle = (1.0 + (i * 4) % 12) * PI / 6;
		glVertex3f(1.0 * cos(angle), 1.0 * sin(angle), 0.0);
		glVertex3f(0.7 * cos(angle), 0.7 * sin(angle), 0.0);
	}
	glEnd();

	glBegin(GL_TRIANGLE_STRIP);
	for (int i = 0; i < 4; i++)
	{
		double angle = (3.0 + (i * 4) % 12) * PI / 6;
		glVertex3f(1.0 * cos(angle), 1.0 * sin(angle), 0.0);
		glVertex3f(0.7 * cos(angle), 0.7 * sin(angle), 0.0);
	}
	glEnd();
	glEndList();
}

void display() {
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 0.0, 0.3);
	glCallList(estrella);
	glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);								
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);		
	glutInitWindowSize(400, 400);						
	glutCreateWindow("Estrella de David");
	init();
	glutDisplayFunc(display);
	glutMainLoop();
}
