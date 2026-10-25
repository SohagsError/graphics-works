#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include <math.h>

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */

void quads(float w, float x, float y, float z,float e,float f,float p,float h, float r, float g, float b)
{
    glColor3ub(r,g,b);
    glBegin(GL_QUADS);
    glVertex2f(w,x);
    glVertex2f(y,z);
    glVertex2f(e,f);
    glVertex2f(p,h);
    glEnd();
}
void circle(float radius, float xc, float yc, float r, float g, float b)
{
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(r,g,b);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float rad=radius;
            float x = rad * cos(A);
            float y = rad * sin(A);
            glVertex2f(x+xc,y+yc);
        }
	glEnd();
}


void display() {

glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque

glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)

quads(-1,1,1,1,1,-0.2,-1,-0.2,54,69,79);
quads(-1,-0.2,1,-0.2,1,-1,-1,-1,211,211,211);
quads(-0.74,0.04,-0.2,0.4,0.8,0.2,0.78,0.04,192,192,192);
quads(-0.58,0.1,-0.2,0.35,0.2,0.265,0.2,0.1,0,0,0);
quads(-0.2,0.31,-0.2,0.1,-0.369,0.1,-0.37,0.195,113,121,126);
quads(-0.14,0.3,0.1,0.25,0.1,0.1,-0.14,0.1,113,121,126);
quads(-0.8,0,-0.74,0.04,-0.7,0,-0.7969235294118,-0.0399941176471,132,136,132);

glBegin(GL_POLYGON);
glColor3ub(132,136,132);
glVertex2f(-0.74,0.04);
glVertex2f(-0.7,0);
glVertex2f(-0.56,-0.13);
glVertex2f(-0.39,-0.13);
glVertex2f(0.395,-0.115);
glVertex2f(0.6,-0.115);
glVertex2f(0.78,0.04);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(255,255,255);
glVertex2f(-0.8,0);
glVertex2f(-0.7,0);
glVertex2f(-0.7969235294118,-0.0399941176471);
glEnd();

quads(-0.7969235294118,-0.0399941176471,-0.7,0,-0.56,-0.13,-0.7853821701676,-0.1900317878218,132,136,132);

glBegin(GL_TRIANGLES);
glColor3ub(132,136,132);
glVertex2f(-0.7853821701676,-0.1900317878218);
glVertex2f(-0.56,-0.13);
glVertex2f(-0.66,-0.22);
glEnd();

quads(-0.7853821701676,-0.1900317878218,-0.66,-0.22,-0.64,-0.32,-0.78,-0.26,137,148,153);
quads(-0.39,-0.13,-0.32,-0.22,0.28,-0.206,0.3924873346898, -0.1100090113859,132,136,132);
quads(0.78,0.04,0.753,-0.176,0.66,-0.176,0.6, -0.112,132,136,132);
quads(-0.32,-0.22,0.28,-0.206,0.28,-0.28,-0.306,-0.276,0,0,0);
quads(-0.306,-0.276,-0.32,-0.32,0.3,-0.32,0.28,-0.28,0,0,0);

glBegin(GL_LINE_LOOP);
glColor3ub(132,136,132);
glVertex2f(-0.306,-0.276);
glVertex2f(0.28,-0.28);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(137,148,153);
glVertex2f(-0.64,-0.22);
glVertex2f(-0.64,-0.32);
glVertex2f(-0.66,-0.22);
glEnd();

quads(-0.66,-0.22,-0.56,-0.13,-0.55,-0.15,-0.64,-0.22,137,148,153);
quads(-0.56,-0.13,-0.39,-0.13,-0.4,-0.15,-0.55,-0.15,137,148,153);
quads(-0.39,-0.13,-0.4,-0.15,-0.32,-0.22,-0.306,-0.206,137,148,153);
quads(-0.32,-0.22,-0.306,-0.206,-0.306,-0.276,-0.32,-0.32,137,148,153);
quads(0.28,-0.206,0.3,-0.22,0.3,-0.32,0.28,-0.28,137,148,153);
quads(0.28,-0.206,0.3,-0.22,0.4,-0.14,0.3924873346898, -0.1100090113859,137,148,153);
quads(0.3924873346898, -0.1100090113859,0.4,-0.14,0.58,-0.14,0.6,-0.112,137,148,153);
quads(0.6,-0.112,0.66,-0.176,0.65,-0.22,0.58,-0.14,137,148,153);
quads(0.66,-0.176,0.753,-0.176,0.75,-0.2,0.65,-0.22,137,148,153);

glBegin(GL_TRIANGLES);
glColor3ub(137,148,153);
glVertex2f(0.65,-0.22);
glVertex2f(0.75,-0.2);
glVertex2f(0.65,-0.3);
glEnd();

circle(0.12371833889,-0.48,-0.28,0,0,0);
circle(0.0791469308323,-0.48,-0.28,54,69,79);

circle(0.1223444281071,0.48,-0.28,0,0,0);
circle(0.0793867383257,0.48,-0.28,54,69,79);

quads(0.753,-0.176,0.75,-0.2,1,-0.2,1,-0.176,255,0,0);

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
