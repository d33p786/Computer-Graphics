
/**

//Set Background Color to Window

#include<GL/glut.h>
#include<GL/gl.h>

GLint X_pos=200, Y_pos=200;
GLint xwin=640, ywin=480;

void myinit(void)
{
	glClearColor(0.88,0.88,0.88,0.0);	// init bgcolor
}

void mydisplay(void)
{
	glClear(GL_COLOR_BUFFER_BIT); //set bgcolor
	
	glFlush(); //render changes
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
