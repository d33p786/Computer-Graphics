
/**
//OpenGL primptives

#include<GL/glut.h>
#include<GL/gl.h>

GLint X_pos=200, Y_pos=200;
GLint xwin=500, ywin=420;

void myinit(void)
{
	glClearColor(0.5,0.5,0.5,0.0);
	//glPointSize(8.0);
	gluOrtho2D(0,500,0,420);
	glViewPort
	glClear(GL_COLOR_BUFFER_BIT);	
}

void draw_coordinate_system(void)
{
	glBegin(GL_LINES);
	glColor3f(0.0,0.0,1.0);
	glVertex2f(-1.0,0.0);
	glVertex2f(1.0,0.0);
	glVertex2f(0.0,-1.0);
	glVertex2f(0.0,1.0);
	glEnd();
	glFlush();
}

void mydisplay(void)
{
	//draw_coordinate_system();
	
  #define VERTEX_LIST \
  glVertex2i(20,60);\
  glVertex2i(80,80);\
  glVertex2i(40,40);\
  glVertex2i(60,20);\
  glVertex2i(0,0)

  glTranslatef(43,320,0);
  glBegin(GL_POINTS);
  VERTEX_LIST;
  glEnd();


  glTranslatef(0,-100,0);
  glBegin(GL_LINES);
  VERTEX_LIST;
  glEnd();
 

  glTranslatef(166,0,0);
  glBegin(GL_LINE_STRIP);
  VERTEX_LIST;
  glEnd();
 

  glTranslatef(166,0,0);
  glBegin(GL_LINE_LOOP);
  VERTEX_LIST;
  glEnd();


  glTranslatef(-320,-100,0);
  glBegin(GL_TRIANGLES);
  VERTEX_LIST;
  glEnd();


  glTranslatef(166,0,0);
  glBegin(GL_TRIANGLE_STRIP);
  VERTEX_LIST;
  glEnd();


  glTranslatef(166,0,0);
  glBegin(GL_TRIANGLE_FAN);
  VERTEX_LIST;
  glEnd();
 

  glTranslatef(-320,-100,0);
  glBegin(GL_QUADS);
  VERTEX_LIST;
  glEnd();


  glTranslatef(166,0,0);
  glBegin(GL_QUAD_STRIP);
  VERTEX_LIST;
  glEnd();


  glTranslatef(166,0,0);
  glBegin(GL_POLYGON);
  VERTEX_LIST;
  glEnd();

glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowPosition(X_pos,Y_pos);
	glutInitWindowSize(xwin,ywin);
	glutCreateWindow("Primptives");
	myinit();
	glutDisplayFunc(mydisplay);
	
	glutMainLoop();
	return 0;
}
/**/
