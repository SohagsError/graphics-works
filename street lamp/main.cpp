
#include <windows.h>  // for MS Windows

#include <GL/glut.h>  // GLUT, include glu.h and gl.h



/* Handler for window-repaint event. Call back when the window first appears and

whenever the window needs to be re-painted. */


void display() {

glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque

glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)

glBegin(GL_QUADS);
glColor3ub(112,128,144);
glVertex2f(0.21,0.6);
glVertex2f(0.21,-0.2);
glVertex2f(0.29,-0.2);
glVertex2f(0.29,0.6);
glEnd();

glBegin(GL_QUADS);
glColor3ub(54,69,79);
glVertex2f(0.18,-0.2);
glVertex2f(0.32,-0.2);
glVertex2f(0.32,-0.22);
glVertex2f(0.18,-0.22);
glEnd();

glBegin(GL_QUADS);
glColor3ub(112,128,144);
glVertex2f(0.14,-0.22);
glVertex2f(0.14,-0.24);
glVertex2f(0.36,-0.24);
glVertex2f(0.36,-0.22);
glEnd();

glBegin(GL_QUADS);
glColor3ub(113,121,126);
glVertex2f(0.2,0.61);
glVertex2f(0.3,0.61);
glVertex2f(0.3,0.6);
glVertex2f(0.2,0.6);
glEnd();

glBegin(GL_QUADS);
glColor3ub(112,128,144);
glVertex2f(0.15,0.75);
glVertex2f(0.35,0.75);
glVertex2f(0.305,0.61);
glVertex2f(0.195,0.61);
glEnd();

glBegin(GL_QUADS);
glColor3ub(113,121,126);
glVertex2f(0.135,0.76);
glVertex2f(0.365,0.76);
glVertex2f(0.365,0.75);
glVertex2f(0.135,0.75);
glEnd();

glBegin(GL_QUADS);
glColor3ub(112,128,144);
glVertex2f(0.2,0.82);
glVertex2f(0.3,0.82);
glVertex2f(0.35,0.76);
glVertex2f(0.15,0.76);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(112,128,144);
glVertex2f(0.24,0.82);
glVertex2f(0.26,0.82);
glVertex2f(0.25,0.87);
glEnd();

glBegin(GL_QUADS);
glColor3ub(228,208,10);
glVertex2f(0.16,0.74);
glVertex2f(0.24,0.74);
glVertex2f(0.24,0.62);
glVertex2f(0.2,0.62);
glEnd();

glBegin(GL_QUADS);
glColor3ub(228,208,10);
glVertex2f(0.26,0.74);
glVertex2f(0.34,0.74);
glVertex2f(0.3,0.62);
glVertex2f(0.26,0.62);
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
