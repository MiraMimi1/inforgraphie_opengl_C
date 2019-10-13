#include <GL/glut.h>
#include <stdio.h>
#include <stdlib.h>

void draw_square() { }
void draw_triangle() { }
void display(void) { }

static void clavier(unsigned char key, int x, int y)
{
switch (key)
{
case 27 : // touche escape: arrêt du programme break;
case 'p': /* affichage du carre plein */
case 'f': /* affichage en mode fil de fer */
break;
default: break;
}
..
}

int main(int argc, char **argv)
{
glutInit(&argc,argv);
int mode = GLUT_RGB|GLUT_SINGLE;
glutInitDisplayMode(mode);
glutInitWindowSize(500,500);
glutCreateWindow("Lab 2");
glutDisplayFunc(display);
glutKeyboardFunc(clavier);
……
glPushMatrix();
glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPopMatrix();
glutMainLoop();
return 0;
}
——————————————————
donc, pour réaliser le TP, on nous oblige d'utiliser un seul carré centré à l'origine ( +/-0.5 , +/-0.5 ) et un seul triangle aussi centré à l'origine ((0.0,0.5)(0.5,-0.5)(-0.5,-0.5)) pour cela il est suggéré de mettre chaque code d'un objet dans une fonction appelé draw_square/draw_triangle ou appelez les comme vous voulez...
je vous donne les codes (puisque c'est facile à faire ?? )
void draw_square() {
glBegin(GL_QUADS);
glVertex2f(-0.5f, -0.5f);
glVertex2f( 0.5f, -0.5f);
glVertex2f( 0.5f, 0.5f);
glVertex2f(-0.5f, 0.5f);
glEnd();
}

void draw_triangle() {
glBegin(GL_TRIANGLES);
glVertex2f(-0.5f, -0.5f);
glVertex2f(+0.5f, -0.5f);
glVertex2f( 0.0f, 0.5f);
glEnd();
} 
int main() {
	printf("Mimi \n");
	system("pause");

}
