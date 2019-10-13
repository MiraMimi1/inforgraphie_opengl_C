
#include <stdio.h>
#include <stdlib.h>
#include <GL/glut.h>
#include <GL/gl.h>


void draw_qdr() {
glViewport(0,0,300,200);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(-1,1,-1,1);	
glBegin(GL_QUADS);
glColor3f(1,0,0);
glVertex2f(-0.5f, -0.5f);
glVertex2f( 0.5f, -0.5f);
glVertex2f( 0.5f, 0.5f);
glVertex2f(-0.5f, 0.5f);
glEnd();
}

void draw_triangle() {
glBegin(GL_TRIANGLES);
glViewport(0,0,300,200);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();

glColor3f(0,1,0);
glVertex2f(-0.5f, -0.5f);
glVertex2f(+0.5f, -0.5f);
glVertex2f( 0.0f, 0.5f);
glEnd();
} 

void display(void) { 
//gluOrtho2D(40,90, 40,5);
//glScalef(0.3, 0.3, 0.3);
gluOrtho2D(-1,1,-1,1);
glTranslatef(5,0,0);
glRotatef(60,0,0,1);
draw_triangle();

  glFlush();       
}
/*
static void clavier(unsigned char key, int x, int y)
{
switch (key)
{
case 27 : // touche escape: arrêt du programme break;
case 'p': /* affichage du carre plein 
case 'f': /* affichage en mode fil de fer 
break;
default: break;
}

}*/

int main(int argc, char **argv)
{
	glutInit(&argc, argv);              // initialize glut
    glutCreateWindow("581 Lab1");       // create a windo
    glutDisplayFunc(display);           // say what the 'display' func is
   
    glClearColor(1.0,0.5,0.0,0.5);      // set the clear color
    glColor3f(0.0,1.0,0.0);             // set the drawing color
   
    glutMainLoop();
    return EXIT_SUCCESS;
}

