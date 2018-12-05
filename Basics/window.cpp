
/**
//Create window 

#include<GL/glut.h>
#include<GL/gl.h>

GLint X_pos=200, Y_pos=200;
GLint xwin=640, ywin=480;

void mydisplay(void){}    //render function

int main(int argc, char** argv) //driver function
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowPosition(X_pos,Y_pos);  //initialize window position
	glutInitWindowSize(xwin,ywin);  //initialize window size
	glutCreateWindow("Window");   //create window with given title

	glutDisplayFunc(mydisplay);   //callback display function
	
	glutMainLoop();
	return 0;
}
/**/
