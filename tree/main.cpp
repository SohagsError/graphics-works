#include <windows.h>  // for MS Windows

#include <GL/glut.h>  // GLUT, include glu.h and gl.h



/* Handler for window-repaint event. Call back when the window first appears and

whenever the window needs to be re-painted. */


void display() {

glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque

glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)

glBegin(GL_QUADS);
glColor3ub(150,121,105);
glVertex2f(0.01,-0.02);
glVertex2f(0.01,-0.075);
glVertex2f(0.038,-0.075);
glVertex2f(0.038,-0.02);
glEnd();

glBegin(GL_QUADS);
glColor3ub(150,121,105);
glVertex2f(0.01,-0.075);
glVertex2f(0.038,-0.075);
glVertex2f(0.05,-0.09);
glVertex2f(0,-0.09);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(201,204,63);
glVertex2f(0.025,-0.035);
glVertex2f(0.035,-0.035);
glVertex2f(0.05,-0.029);
glVertex2f(0.064,-0.022);
glVertex2f(0.074,-0.012);
glVertex2f(0.078,0);
glVertex2f(0.076,0.016);
glVertex2f(0.068,0.031);
glVertex2f(0.054,0.042);
glVertex2f(0.04,0.05);
glVertex2f(0.025,0.055);
glVertex2f(0.01,0.055);
glVertex2f(-0.004,0.052);
glVertex2f(-0.02,0.04);
glVertex2f(-0.028,0.03);
glVertex2f(-0.032,0.018);
glVertex2f(-0.035,0.005);
glVertex2f(-0.03,-0.01);
glVertex2f(-0.025,-0.02);
glVertex2f(-0.014,-0.028);
glVertex2f(0.002,-0.032);
glVertex2f(0.002,-0.032);
glEnd();


glFlush();  // Render now

}



/* Main function: GLUT runs as a console application starting at main()  */

int main(int argc, char** argv) {

glutInit(&argc, argv);                 // Initialize GLUT

glutInitWindowSize(320, 320);   // Set the window's initial width & height

glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title

glutDisplayFunc(display); // Register display callback handler for window re-paint

glutMainLoop();           // Enter the event-processing loop

return 0;

}
