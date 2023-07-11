#include <iostream>
#include <GL/freeglut.h>

using namespace std;

void display() {
	glClearColor(0.0f, 0.0f, 0.2f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(600,400);
	glutInitWindowPosition(50,600);
	glutCreateWindow("Primer programa en OpenGL");
	glutDisplayFunc(display);
	glutMainLoop();
}