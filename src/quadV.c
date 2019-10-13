
#include <stdio.h>
#include <stdlib.h>
#include <GL/glut.h>
#include <GL/gl.h>


void display(void)
{glViewport(0,0,300,200);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(-1,1,-1,1);
glBegin(GL_QUADS);
glColor3f(1,1,0);
glVertex2f(-0.5,-0.5); 
glVertex2f(+0.5,-0.5);
glVertex2f(+0.5,+0.5);
glVertex2f(-0.5,+0.5);

glEnd();
   
    glFlush();                             // force exec of all OpenGl commands
}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);              // initialize glut
    glutCreateWindow("581 Lab1");       // create a windo
    glutDisplayFunc(display);           // say what the 'display' func is
   
    glClearColor(1.0,0.5,0.0,0.5);      // set the clear color
    glColor3f(0.0,1.0,0.0);             // set the drawing color
   
    glutMainLoop();
    return EXIT_SUCCESS;
}


