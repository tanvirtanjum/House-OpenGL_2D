#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

void display()
{
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);


    glBegin(GL_QUADS);
    glColor3ub(172, 115, 57);
    glVertex2f(-0.57, 0.75f); ///TL
    glVertex2f(0.57f, 0.75f); ///TR
    glVertex2f(0.9f, 0.47f); ///BR
    glVertex2f(-0.9f, 0.47f); ///BL
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(172, 115, 57);
    glVertex2f(-0.2, 1.00f);
    glVertex2f(-0.57f, 0.75f);
    glVertex2f(0.2f, 0.75f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(184, 184, 148);
    glVertex2f(-0.92, 0.45f); ///TL
    glVertex2f(0.92f, 0.45f); ///TR
    glVertex2f(0.92f, 0.47f); ///BR
    glVertex2f(-0.92f, 0.47f); ///BL
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153, 115, 0);
    glVertex2f(-0.9, 0.4f); ///TL
    glVertex2f(0.9f, 0.4f); ///TR
    glVertex2f(0.9f, 0.45f); ///BR
    glVertex2f(-0.9f, 0.45f); ///BL
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(184, 184, 148);
    glVertex2f(-0.8, 0.4f); ///TL
    glVertex2f(0.8f, 0.4f); ///TR
    glVertex2f(0.8f, -0.6f); ///BR
    glVertex2f(-0.8f, -0.6f); ///BL
    glEnd();

    ///Window
    glBegin(GL_QUADS);
    glColor3ub(153, 115, 0);
    glVertex2f(-0.7, 0.25f); ///TL
    glVertex2f(-0.55f, 0.25f); ///TR
    glVertex2f(-0.55f, -0.45f); ///BR
    glVertex2f(-0.7f, -0.45f); ///BL
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0, 153, 255);
    glVertex2f(-0.68, 0.23f); ///TL
    glVertex2f(-0.57f, 0.23f); ///TR
    glVertex2f(-0.57f, -0.43f); ///BR
    glVertex2f(-0.68f, -0.43f); ///BL
    glEnd();
    glLineWidth(3.0);
    glBegin(GL_LINES);
    glColor3ub(153, 115, 0);
    glVertex2f(-0.68f,-0.1f);
    glVertex2f(-0.57f,-0.1f);
    glEnd();
    glTranslatef(0.25,0.0,0.0);
    glBegin(GL_QUADS);
    glColor3ub(153, 115, 0);
    glVertex2f(-0.7, 0.25f); ///TL
    glVertex2f(-0.55f, 0.25f); ///TR
    glVertex2f(-0.55f, -0.45f); ///BR
    glVertex2f(-0.7f, -0.45f); ///BL
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0, 153, 255);
    glVertex2f(-0.68, 0.23f); ///TL
    glVertex2f(-0.57f, 0.23f); ///TR
    glVertex2f(-0.57f, -0.43f); ///BR
    glVertex2f(-0.68f, -0.43f); ///BL
    glEnd();
    glLineWidth(3.0);
    glBegin(GL_LINES);
    glColor3ub(153, 115, 0);
    glVertex2f(-0.68f,-0.1f);
    glVertex2f(-0.57f,-0.1f);
    glEnd();
    glLoadIdentity();

    ///GATE
    glBegin(GL_QUADS);
    glColor3ub(214, 214, 194);
    glVertex2f(-0.25, 0.55f); ///TL
    glVertex2f(0.1f, 0.55f); ///TR
    glVertex2f(0.1f, -0.6f); ///BR
    glVertex2f(-0.25f, -0.6f); ///BL
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(166, 166, 166);
    glVertex2f(-0.25, -0.55f); ///TL
    glVertex2f(0.1f, -0.55f); ///TR
    glVertex2f(0.1f, -0.6f); ///BR
    glVertex2f(-0.25f, -0.6f); ///BL
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.25f,.55f);
    glVertex2f(0.1f,0.55f);
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.25f,.55f);
    glVertex2f(-0.25f,-0.6f);
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.25f,.55f);
    glVertex2f(-0.05f, 0.615f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.1f,.55f);
    glVertex2f(-0.5f, 0.8f);
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.102f,.55f);
    glVertex2f(0.102f,-0.6f);
    glEnd();
    glScalef(0.92,0.869,1);
    glTranslatef(0.01,-0.025,0);
    glBegin(GL_QUADS);
    glColor3ub(102, 51, 0);
    glVertex2f(-0.25, 0.60f); ///TL
    glVertex2f(0.1f, 0.60f); ///TR
    glVertex2f(0.1f, -0.6f); ///BR
    glVertex2f(-0.25f, -0.6f); ///BL
    glEnd();
    glScalef(0.75,0.869,1);
    glTranslatef(-0.025,-0.025,0);
    glBegin(GL_QUADS);
    glColor3ub(77, 166, 255);
    glVertex2f(-0.25, 0.60f); ///TL
    glVertex2f(0.1f, 0.60f); ///TR
    glVertex2f(0.1f, -0.6f); ///BR
    glVertex2f(-0.25f, -0.6f); ///BL
    glEnd();
    glScalef(0.65,0.869,1);
    glTranslatef(-0.045,-0.025,0);
    glBegin(GL_QUADS);
    glColor3ub(102, 51, 0);
    glVertex2f(-0.25, 0.60f); ///TL
    glVertex2f(0.1f, 0.60f); ///TR
    glVertex2f(0.1f, -0.6f); ///BR
    glVertex2f(-0.25f, -0.6f); ///BL
    glEnd();
    glScalef(0.65,0.869,1);
    glTranslatef(-0.045,-0.025,0);
    glBegin(GL_QUADS);
    glColor3ub(77, 166, 255);
    glVertex2f(-0.25, 0.60f); ///TL
    glVertex2f(0.1f, 0.60f); ///TR
    glVertex2f(0.1f, -0.6f); ///BR
    glVertex2f(-0.25f, -0.6f); ///BL
    glEnd();
    glLoadIdentity();
    glLoadIdentity();
    glLoadIdentity();
    glLoadIdentity();
    glLoadIdentity();
    glLoadIdentity();
    glLoadIdentity();
    glLoadIdentity();

    ///SEAL
    glBegin(GL_QUADS);
    glColor3ub(153, 115, 0);
    glVertex2f(0.15, 0.25f); ///TL
    glVertex2f(0.75f, 0.25f); ///TR
    glVertex2f(0.75f, 0.20f); ///BR
    glVertex2f(0.15f, 0.20f); ///BL
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.15f,.25f);
    glVertex2f(0.75f,.25f);
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.15f,.20f);
    glVertex2f(0.75f,.20f);
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.15f,.25f);
    glVertex2f(0.15f,.20f);
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.75f,.25f);
    glVertex2f(0.75f,.20f);
    glEnd();

    glTranslatef(0.0,-0.05,0.0);
    glBegin(GL_QUADS);
    glColor3ub(153, 115, 0);
    glVertex2f(0.15, 0.25f); ///TL
    glVertex2f(0.75f, 0.25f); ///TR
    glVertex2f(0.75f, 0.20f); ///BR
    glVertex2f(0.15f, 0.20f); ///BL
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.15f,.25f);
    glVertex2f(0.75f,.25f);
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.15f,.20f);
    glVertex2f(0.75f,.20f);
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.15f,.25f);
    glVertex2f(0.15f,.20f);
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.75f,.25f);
    glVertex2f(0.75f,.20f);
    glEnd();
    glTranslatef(0.0,-0.05,0.0);
    glBegin(GL_QUADS);
    glColor3ub(153, 115, 0);
    glVertex2f(0.15, 0.25f); ///TL
    glVertex2f(0.75f, 0.25f); ///TR
    glVertex2f(0.75f, 0.20f); ///BR
    glVertex2f(0.15f, 0.20f); ///BL
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.15f,.25f);
    glVertex2f(0.75f,.25f);
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.15f,.20f);
    glVertex2f(0.75f,.20f);
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.15f,.25f);
    glVertex2f(0.15f,.20f);
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.75f,.25f);
    glVertex2f(0.75f,.20f);
    glEnd();
    glTranslatef(0.0,-0.05,0.0);
    glBegin(GL_QUADS);
    glColor3ub(153, 115, 0);
    glVertex2f(0.15, 0.25f); ///TL
    glVertex2f(0.75f, 0.25f); ///TR
    glVertex2f(0.75f, 0.20f); ///BR
    glVertex2f(0.15f, 0.20f); ///BL
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.15f,.25f);
    glVertex2f(0.75f,.25f);
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.15f,.20f);
    glVertex2f(0.75f,.20f);
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.15f,.25f);
    glVertex2f(0.15f,.20f);
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.75f,.25f);
    glVertex2f(0.75f,.20f);
    glEnd();
    glTranslatef(0.0,-0.05,0.0);
    glBegin(GL_QUADS);
    glColor3ub(153, 115, 0);
    glVertex2f(0.15, 0.25f); ///TL
    glVertex2f(0.75f, 0.25f); ///TR
    glVertex2f(0.75f, 0.20f); ///BR
    glVertex2f(0.15f, 0.20f); ///BL
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.15f,.25f);
    glVertex2f(0.75f,.25f);
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.15f,.20f);
    glVertex2f(0.75f,.20f);
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.15f,.25f);
    glVertex2f(0.15f,.20f);
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.75f,.25f);
    glVertex2f(0.75f,.20f);
    glEnd();
    glTranslatef(0.0,-0.05,0.0);
    glBegin(GL_QUADS);
    glColor3ub(153, 115, 0);
    glVertex2f(0.15, 0.25f); ///TL
    glVertex2f(0.75f, 0.25f); ///TR
    glVertex2f(0.75f, 0.20f); ///BR
    glVertex2f(0.15f, 0.20f); ///BL
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.15f,.25f);
    glVertex2f(0.75f,.25f);
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.15f,.20f);
    glVertex2f(0.75f,.20f);
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.15f,.25f);
    glVertex2f(0.15f,.20f);
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.75f,.25f);
    glVertex2f(0.75f,.20f);
    glEnd();
    glTranslatef(0.0,-0.05,0.0);
    glBegin(GL_QUADS);
    glColor3ub(153, 115, 0);
    glVertex2f(0.15, 0.25f); ///TL
    glVertex2f(0.75f, 0.25f); ///TR
    glVertex2f(0.75f, 0.20f); ///BR
    glVertex2f(0.15f, 0.20f); ///BL
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.15f,.25f);
    glVertex2f(0.75f,.25f);
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.15f,.20f);
    glVertex2f(0.75f,.20f);
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.15f,.25f);
    glVertex2f(0.15f,.20f);
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.75f,.25f);
    glVertex2f(0.75f,.20f);
    glEnd();
    glTranslatef(0.0,-0.05,0.0);
    glBegin(GL_QUADS);
    glColor3ub(153, 115, 0);
    glVertex2f(0.15, 0.25f); ///TL
    glVertex2f(0.75f, 0.25f); ///TR
    glVertex2f(0.75f, 0.20f); ///BR
    glVertex2f(0.15f, 0.20f); ///BL
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.15f,.25f);
    glVertex2f(0.75f,.25f);
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.15f,.20f);
    glVertex2f(0.75f,.20f);
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.15f,.25f);
    glVertex2f(0.15f,.20f);
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.75f,.25f);
    glVertex2f(0.75f,.20f);
    glEnd();
    glTranslatef(0.0,-0.05,0.0);
    glBegin(GL_QUADS);
    glColor3ub(153, 115, 0);
    glVertex2f(0.15, 0.25f); ///TL
    glVertex2f(0.75f, 0.25f); ///TR
    glVertex2f(0.75f, 0.20f); ///BR
    glVertex2f(0.15f, 0.20f); ///BL
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.15f,.25f);
    glVertex2f(0.75f,.25f);
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.15f,.20f);
    glVertex2f(0.75f,.20f);
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.15f,.25f);
    glVertex2f(0.15f,.20f);
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.75f,.25f);
    glVertex2f(0.75f,.20f);
    glEnd();
    glTranslatef(0.0,-0.05,0.0);
    glBegin(GL_QUADS);
    glColor3ub(153, 115, 0);
    glVertex2f(0.15, 0.25f); ///TL
    glVertex2f(0.75f, 0.25f); ///TR
    glVertex2f(0.75f, 0.20f); ///BR
    glVertex2f(0.15f, 0.20f); ///BL
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.15f,.25f);
    glVertex2f(0.75f,.25f);
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.15f,.20f);
    glVertex2f(0.75f,.20f);
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.15f,.25f);
    glVertex2f(0.15f,.20f);
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.75f,.25f);
    glVertex2f(0.75f,.20f);
    glEnd();
    glTranslatef(0.0,-0.05,0.0);
    glBegin(GL_QUADS);
    glColor3ub(153, 115, 0);
    glVertex2f(0.15, 0.25f); ///TL
    glVertex2f(0.75f, 0.25f); ///TR
    glVertex2f(0.75f, 0.20f); ///BR
    glVertex2f(0.15f, 0.20f); ///BL
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.15f,.25f);
    glVertex2f(0.75f,.25f);
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.15f,.20f);
    glVertex2f(0.75f,.20f);
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.15f,.25f);
    glVertex2f(0.15f,.20f);
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.75f,.25f);
    glVertex2f(0.75f,.20f);
    glEnd();
    glTranslatef(0.0,-0.05,0.0);
    glBegin(GL_QUADS);
    glColor3ub(153, 115, 0);
    glVertex2f(0.15, 0.25f); ///TL
    glVertex2f(0.75f, 0.25f); ///TR
    glVertex2f(0.75f, 0.20f); ///BR
    glVertex2f(0.15f, 0.20f); ///BL
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.15f,.25f);
    glVertex2f(0.75f,.25f);
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.15f,.20f);
    glVertex2f(0.75f,.20f);
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.15f,.25f);
    glVertex2f(0.15f,.20f);
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.75f,.25f);
    glVertex2f(0.75f,.20f);
    glEnd();
    glTranslatef(0.0,-0.05,0.0);
    glBegin(GL_QUADS);
    glColor3ub(153, 115, 0);
    glVertex2f(0.15, 0.25f); ///TL
    glVertex2f(0.75f, 0.25f); ///TR
    glVertex2f(0.75f, 0.20f); ///BR
    glVertex2f(0.15f, 0.20f); ///BL
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.15f,.25f);
    glVertex2f(0.75f,.25f);
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.15f,.20f);
    glVertex2f(0.75f,.20f);
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.15f,.25f);
    glVertex2f(0.15f,.20f);
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.75f,.25f);
    glVertex2f(0.75f,.20f);
    glEnd();
    glTranslatef(0.0,-0.05,0.0);
    glBegin(GL_QUADS);
    glColor3ub(153, 115, 0);
    glVertex2f(0.15, 0.25f); ///TL
    glVertex2f(0.75f, 0.25f); ///TR
    glVertex2f(0.75f, 0.20f); ///BR
    glVertex2f(0.15f, 0.20f); ///BL
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.15f,.25f);
    glVertex2f(0.75f,.25f);
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.15f,.20f);
    glVertex2f(0.75f,.20f);
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.15f,.25f);
    glVertex2f(0.15f,.20f);
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.75f,.25f);
    glVertex2f(0.75f,.20f);
    glEnd();
    glTranslatef(0.0,-0.05,0.0);
    glBegin(GL_QUADS);
    glColor3ub(153, 115, 0);
    glVertex2f(0.15, 0.25f); ///TL
    glVertex2f(0.75f, 0.25f); ///TR
    glVertex2f(0.75f, 0.20f); ///BR
    glVertex2f(0.15f, 0.20f); ///BL
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.15f,.25f);
    glVertex2f(0.75f,.25f);
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.15f,.20f);
    glVertex2f(0.75f,.20f);
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.15f,.25f);
    glVertex2f(0.15f,.20f);
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.75f,.25f);
    glVertex2f(0.75f,.20f);
    glEnd();
    glTranslatef(0.0,-0.05,0.0);
    glBegin(GL_QUADS);
    glColor3ub(153, 115, 0);
    glVertex2f(0.15, 0.25f); ///TL
    glVertex2f(0.75f, 0.25f); ///TR
    glVertex2f(0.75f, 0.20f); ///BR
    glVertex2f(0.15f, 0.20f); ///BL
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.15f,.25f);
    glVertex2f(0.75f,.25f);
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.15f,.20f);
    glVertex2f(0.75f,.20f);
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.15f,.25f);
    glVertex2f(0.15f,.20f);
    glEnd();
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.75f,.25f);
    glVertex2f(0.75f,.20f);
    glEnd();
    glLoadIdentity();
    glLoadIdentity();
    glLoadIdentity();
    glLoadIdentity();
    glLoadIdentity();
    glLoadIdentity();
    glLoadIdentity();
    glLoadIdentity();
    glLoadIdentity();
    glLoadIdentity();
    glLoadIdentity();
    glLoadIdentity();
    glLoadIdentity();
    glLoadIdentity();
    glLoadIdentity();

    ///BASE
    glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(1.0f,-0.6f);
    glVertex2f(-1.0f,-0.6f);
    glEnd();

	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitWindowSize(900, 540);
	glutCreateWindow("LAB EXAM (17-35860-3)");
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
