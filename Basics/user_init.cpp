
/**
//User initializations and co-ordinate system

#include<GL/glut.h>
#include<GL/gl.h>

GLint X_pos=200, Y_pos=200;
GLint xwin=640, ywin=480;

void myinit(void)
{
	glClearColor(0.88,0.88,0.88,0.0);
	glPointSize(8.0);
	gluOrtho2D(-1.0,1.0,-1.0,1.0);
	//gluOrtho2D(-640,640,-480,480);	
}

void mydisplay(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	
	glBegin(GL_LINES);
	glColor3f(0.0,0.0,1.0);
	glVertex2f(-1.0,0.0);
	glVertex2f(1.0,0.0);
	glVertex2f(0.0,-1.0);
	glVertex2f(0.0,1.0);
	glEnd();
	
/**
    glBegin(GL_LINES);
	glColor3f(0.0,0.0,1.0);
	glVertex2f(-100,0);
	glVertex2f(100,0);
	glVertex2f(0,-100);
	glVertex2f(0,100);
	glEnd();
/**
	glBegin(GL_POINTS);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(0.0,0.0);
	glVertex2f(0.5,0.0);
	glVertex2f(0.0,-0.5);
	glVertex2f(-0.5,0.0);
	glVertex2f(0.0,0.5);
	glEnd();   
	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowPosition(X_pos,Y_pos);
	glutInitWindowSize(xwin,ywin);
	glutCreateWindow("Window");
	myinit();
	glutDisplayFunc(mydisplay);
	
	glutMainLoop();
	return 0;
}
/**/
