
#include <stdio.h>
#include <stdlib.h>
#include <GL/glut.h>
#include <GL/gl.h>
#include <math.h>

void display(void)
{   float x;
    glBegin(GL_LINE_STRIP);
    for (x = -4.0; x <4.0; x+=0.1){
    GLfloat y = sin(3.14 * x) / (3.14 * x);
    glVertex2f (x,y);
}
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


