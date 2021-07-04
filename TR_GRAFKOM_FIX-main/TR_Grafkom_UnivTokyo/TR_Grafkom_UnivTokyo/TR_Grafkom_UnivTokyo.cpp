#include <stdlib.h>
#include <windows.h>
#ifdef _APPLE_
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
using namespace std;
float xrot = 0;
float yrot = 0;
float xdiff = 0;
float ydiff = 0;
bool mousedown = false;

void init(void);
void display(void);
void keyboard(unsigned char, int, int);
void resize(int, int);
void mouseMove(int x, int y);
void mouseButton(int button, int state, int x, int y);

int is_depth;
int i;
//Fungsi Mouse
void mouseMove(int x, int y) {
    if (mousedown) {
        yrot = x - xdiff;
        xrot = y + ydiff;

        glutPostRedisplay();
    }
}

void mouseButton(int button, int state, int x, int y) {
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
        mousedown = true;
        xdiff = x - yrot;
        ydiff = -y + xrot;
    }
    else {
        mousedown = false;
    }
    glutPostRedisplay();
}
void init(void)
{
    glClearColor(0.0, 1.0, 0.906, 0.0);
    glEnable(GL_DEPTH_TEST);
    glMatrixMode(GL_MODELVIEW);
    glPointSize(9.0);
    glLineWidth(6.0f);

}
void gedung_1(void)
{
    glBegin(GL_QUADS);//Tembok depan 1
    glColor3f(0.502f, 0.000f, 0.000);
    glVertex3f(-150.0, 0.0, -10.0);
    glVertex3f(-150.0, 80.0, -10.0);
    glVertex3f(-80.0, 80.0, -10.0);
    glVertex3f(-80.0, 0.0, -10.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis Tembok depan 1
    glColor3f(0.000f, 0.000f, 0.000);
    glVertex3f(-150.0, 0.0, -10.0);
    glVertex3f(-150.0, 80.0, -10.0);
    glVertex3f(-80.0, 80.0, -10.0);
    glVertex3f(-80.0, 0.0, -10.0);
    glEnd();

    glBegin(GL_POLYGON);//Pillar depan 1
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(-150.0, 0.0, -5.0);
    glVertex3f(-150.0, 0.0, -10.0);
    glVertex3f(-150.0, 75.0, -10.0);
    glVertex3f(-140.0, 75.0, -10.0);
    glVertex3f(-140.0, 0.0, -10.0);
    glVertex3f(-140.0, 0.0, -5.0);
    glVertex3f(-140.0, 70.0, -5.0);
    glVertex3f(-150.0, 70.0, -5.0);
    glVertex3f(-150.0, 75.0, -10.0);
    glVertex3f(-140.0, 75.0, -10.0);
    glVertex3f(-140.0, 70.0, -5.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis Pillar depan 1
    glColor3f(0, 0, 0);
    glVertex3f(-150.0, 0.0, -5.0);
    glVertex3f(-150.0, 0.0, -10.0);
    glVertex3f(-150.0, 75.0, -10.0);
    glVertex3f(-140.0, 75.0, -10.0);
    glVertex3f(-140.0, 0.0, -10.0);
    glVertex3f(-140.0, 0.0, -5.0);
    glVertex3f(-140.0, 70.0, -5.0);
    glVertex3f(-150.0, 70.0, -5.0);
    glVertex3f(-150.0, 75.0, -10.0);
    glVertex3f(-140.0, 75.0, -10.0);
    glVertex3f(-140.0, 70.0, -5.0);
    glEnd();

    glBegin(GL_POLYGON);//Pillar depan 2
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(-110.0, 0.0, -5.0);
    glVertex3f(-110.0, 0.0, -10.0);
    glVertex3f(-110.0, 75.0, -10.0);
    glVertex3f(-100.0, 75.0, -10.0);
    glVertex3f(-100.0, 0.0, -10.0);
    glVertex3f(-100.0, 0.0, -5.0);
    glVertex3f(-100.0, 70.0, -5.0);
    glVertex3f(-110.0, 70.0, -5.0);
    glVertex3f(-110.0, 75.0, -10.0);
    glVertex3f(-100.0, 75.0, -10.0);
    glVertex3f(-100.0, 70.0, -5.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis Pillar depan 2
    glColor3f(0, 0, 0);
    glVertex3f(-110.0, 0.0, -5.0);
    glVertex3f(-110.0, 0.0, -10.0);
    glVertex3f(-110.0, 75.0, -10.0);
    glVertex3f(-100.0, 75.0, -10.0);
    glVertex3f(-100.0, 0.0, -10.0);
    glVertex3f(-100.0, 0.0, -5.0);
    glVertex3f(-100.0, 70.0, -5.0);
    glVertex3f(-110.0, 70.0, -5.0);
    glVertex3f(-110.0, 75.0, -10.0);
    glVertex3f(-100.0, 75.0, -10.0);
    glVertex3f(-100.0, 70.0, -5.0);
    glEnd();

    glBegin(GL_QUADS);//Tembok kiri 1
    glColor3f(0.502f, 0.000f, 0.000f);
    glVertex3f(-150.0, 0.0, -10.0);
    glVertex3f(-150.0, 0.0, -80.0);
    glVertex3f(-150.0, 80.0, -80.0);
    glVertex3f(-150.0, 80.0, -10.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis Tembok kiri 1
    glColor3f(0, 0, 0);
    glVertex3f(-150.0, 0.0, -10.0);
    glVertex3f(-150.0, 0.0, -80.0);
    glVertex3f(-150.0, 80.0, -80.0);
    glVertex3f(-150.0, 80.0, -10.0);
    glEnd();

    glBegin(GL_QUADS);//Tembok belakang 1
    glColor3f(0.502f, 0.000f, 0.000f);
    glVertex3f(-150.0, 0.0, -80.0);
    glVertex3f(-150.0, 80.0, -80.0);
    glVertex3f(-80.0, 80.0, -80.0);
    glVertex3f(-80.0, 0.0, -80.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis Tembok belakang 1
    glColor3f(0, 0, 0);
    glVertex3f(-150.0, 0.0, -80.0);
    glVertex3f(-150.0, 80.0, -80.0);
    glEnd();

    glBegin(GL_QUADS);//Tembok kanan 1
    glColor3f(0.502f, 0.000f, 0.000f);
    glVertex3f(-80.0, 0.0, -10.0);
    glVertex3f(-80.0, 0.0, -80.0);
    glVertex3f(-80.0, 80.0, -80.0);
    glVertex3f(-80.0, 80.0, -10.0);
    glEnd();


    glBegin(GL_POLYGON);//atap 1
    glColor3f(0.502f, 0.000f, 0.000f);
    glVertex3f(-150.0, 80.0, -10.0);
    glVertex3f(-150.0, 80.0, -80.0);
    glVertex3f(-80.0, 80.0, -80.0);
    glVertex3f(-80.0, 80.0, -10.0);
    glEnd();

    glBegin(GL_LINE_LOOP);//garis atap 1
    glColor3f(0.000f, 0.000f, 0.000f);
    glVertex3f(-150.0, 80.0, -10.0);
    glVertex3f(-150.0, 80.0, -80.0);
    glVertex3f(-80.0, 80.0, -80.0);
    glVertex3f(-80.0, 80.0, -10.0);
    glEnd();

    glBegin(GL_QUADS);//cover bawah depan atap 1
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(-155.0, 80.0, -10.0);
    glVertex3f(-155.0, 80.0, -5.0);
    glVertex3f(-80.0, 80.0, -5.0);
    glVertex3f(-80.0, 80.0, -10.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis cover bawah depan atap 1
    glColor3f(0, 0, 0);
    glVertex3f(-155.0, 80.0, -10.0);
    glVertex3f(-155.0, 80.0, -5.0);
    glVertex3f(-80.0, 80.0, -5.0);
    glVertex3f(-80.0, 80.0, -10.0);
    glEnd();

    glBegin(GL_QUADS);//cover bawah kiri atap 1
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(-155.0, 80.0, -5.0);
    glVertex3f(-155.0, 80.0, -85.0);
    glVertex3f(-150.0, 80.0, -85.0);
    glVertex3f(-150.0, 80.0, -5.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis cover bawah kiri atap 1
    glColor3f(0, 0, 0);
    glVertex3f(-155.0, 80.0, -5.0);
    glVertex3f(-155.0, 80.0, -85.0);
    glVertex3f(-150.0, 80.0, -85.0);
    glVertex3f(-150.0, 80.0, -5.0);
    glEnd();

    glBegin(GL_QUADS);//cover bawah belakang atap 1
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(-155.0, 80.0, -85.0);
    glVertex3f(-155.0, 80.0, -80.0);
    glVertex3f(20.0, 80.0, -80.0);
    glVertex3f(20.0, 80.0, -85.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis cover bawah belakang atap 1
    glColor3f(0, 0, 0);
    glVertex3f(-155.0, 80.0, -85.0);
    glVertex3f(-155.0, 80.0, -80.0);
    glVertex3f(20.0, 80.0, -80.0);
    glVertex3f(20.0, 80.0, -85.0);
    glEnd();

    glBegin(GL_QUADS);//cover depan atap 1
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(-155.0, 80.0, -5.0);
    glVertex3f(-155.0, 83.0, -5.0);
    glVertex3f(-80.0, 83.0, -5.0);
    glVertex3f(-80.0, 80.0, -5.0);
    glEnd();

    glBegin(GL_LINE_LOOP);//Garis cover depan atap 1
    glColor3f(0, 0, 0);
    glVertex3f(-155.0, 80.0, -5.0);
    glVertex3f(-155.0, 83.0, -5.0);
    glVertex3f(-85.0, 83.0, -5.0);
    glVertex3f(-85.0, 80.0, -5.0);
    glEnd();

    glBegin(GL_QUADS);//cover kiri atap 1
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(-155.0, 80.0, -5.0);
    glVertex3f(-155.0, 83.0, -5.0);
    glVertex3f(-155.0, 83.0, -85.0);
    glVertex3f(-155.0, 80.0, -85.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis cover kiri atap 1
    glColor3f(0, 0, 0);
    glVertex3f(-155.0, 80.0, -5.0);
    glVertex3f(-155.0, 83.0, -5.0);
    glVertex3f(-155.0, 83.0, -85.0);
    glVertex3f(-155.0, 80.0, -85.0);
    glEnd();

    glBegin(GL_QUADS);//cover belakang atap 1
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(-155.0, 80.0, -85.0);
    glVertex3f(-155.0, 83.0, -85.0);
    glVertex3f(20.0, 83.0, -85.0);
    glVertex3f(20.0, 80.0, -85.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis cover belakang atap 1
    glColor3f(0, 0, 0);
    glVertex3f(-155.0, 80.0, -85.0);
    glVertex3f(-155.0, 83.0, -85.0);
    glVertex3f(20.0, 83.0, -85.0);
    glVertex3f(20.0, 80.0, -85.0);
    glEnd();

    glBegin(GL_QUADS);//cover atas atap 1
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(-155.0, 83.0, -5.0);
    glVertex3f(-155.0, 83.0, -85.0);
    glVertex3f(-80.0, 83.0, -85.0);
    glVertex3f(-80.0, 83.0, -5.0);
    glEnd();

    glBegin(GL_LINE_LOOP);//Garis cover atas atap 1
    glColor3f(0, 0, 0);
    glVertex3f(-155.0, 83.0, -5.0);
    glVertex3f(-155.0, 83.0, -85.0);
    glEnd();

}
void gedung_2()
{
    glBegin(GL_QUADS);//Tembok depan 2
    glColor3f(0.502f, 0.000f, 0.000);
    glVertex3f(-80.0, 0.0, 20.0);
    glVertex3f(-80.0, 80.0, 20.0);
    glVertex3f(20.0, 80.0, 20.0);
    glVertex3f(20.0, 0.0, 20.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis Tembok depan 2
    glColor3f(0, 0, 0);
    glVertex3f(-80.0, 0.0, 20.0);
    glVertex3f(-80.0, 80.0, 20.0);
    glVertex3f(20.0, 80.0, 20.0);
    glVertex3f(20.0, 0.0, 20.0);
    glEnd();

    glBegin(GL_POLYGON);//Pillar depan 1
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(-80.0, 0.0, 25.0);
    glVertex3f(-80.0, 0.0, 20.0);
    glVertex3f(-80.0, 75.0, 20.0);
    glVertex3f(-70.0, 75.0, 20.0);
    glVertex3f(-70.0, 0.0, 20.0);
    glVertex3f(-70.0, 0.0, 25.0);
    glVertex3f(-70.0, 70.0, 25.0);
    glVertex3f(-80.0, 70.0, 25.0);
    glVertex3f(-80.0, 75.0, 20.0);
    glVertex3f(-70.0, 75.0, 20.0);
    glVertex3f(-70.0, 70.0, 25.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis Pillar depan 1
    glColor3f(0, 0, 0);
    glVertex3f(-80.0, 0.0, 25.0);
    glVertex3f(-80.0, 0.0, 20.0);
    glVertex3f(-80.0, 75.0, 20.0);
    glVertex3f(-70.0, 75.0, 20.0);
    glVertex3f(-70.0, 0.0, 20.0);
    glVertex3f(-70.0, 0.0, 25.0);
    glVertex3f(-70.0, 70.0, 25.0);
    glVertex3f(-80.0, 70.0, 25.0);
    glVertex3f(-80.0, 75.0, 20.0);
    glVertex3f(-70.0, 75.0, 20.0);
    glVertex3f(-70.0, 70.0, 25.0);
    glEnd();

    glBegin(GL_POLYGON);//Pillar depan 2
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(-30.0, 0.0, 25.0);
    glVertex3f(-30.0, 0.0, 20.0);
    glVertex3f(-30.0, 75.0, 20.0);
    glVertex3f(-20.0, 75.0, 20.0);
    glVertex3f(-20.0, 0.0, 20.0);
    glVertex3f(-20.0, 0.0, 25.0);
    glVertex3f(-20.0, 70.0, 25.0);
    glVertex3f(-30.0, 70.0, 25.0);
    glVertex3f(-30.0, 75.0, 20.0);
    glVertex3f(-20.0, 75.0, 20.0);
    glVertex3f(-20.0, 70.0, 25.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garisillar depan 2
    glColor3f(0, 0, 0);
    glVertex3f(-30.0, 0.0, 25.0);
    glVertex3f(-30.0, 0.0, 20.0);
    glVertex3f(-30.0, 75.0, 20.0);
    glVertex3f(-20.0, 75.0, 20.0);
    glVertex3f(-20.0, 0.0, 20.0);
    glVertex3f(-20.0, 0.0, 25.0);
    glVertex3f(-20.0, 70.0, 25.0);
    glVertex3f(-30.0, 70.0, 25.0);
    glVertex3f(-30.0, 75.0, 20.0);
    glVertex3f(-20.0, 75.0, 20.0);
    glVertex3f(-20.0, 70.0, 25.0);
    glEnd();

    glBegin(GL_QUADS);//Tembok kiri 2
    glColor3f(0.502f, 0.000f, 0.000f);
    glVertex3f(-80.0, 0.0, 20.0);
    glVertex3f(-80.0, 0.0, -80.0);
    glVertex3f(-80.0, 80.0, -80.0);
    glVertex3f(-80.0, 80.0, 20.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis Tembok kiri 2
    glColor3f(0, 0, 0);
    glVertex3f(-80.0, 0.0, 20.0);
    glVertex3f(-80.0, 80.0, 20.0);
    glEnd();

    glBegin(GL_QUADS);//Tembok belakang 2
    glColor3f(0.502f, 0.000f, 0.000f);
    glVertex3f(-80.0, 0.0, -80.0);
    glVertex3f(-80.0, 80.0, -80.0);
    glVertex3f(20.0, 80.0, -80.0);
    glVertex3f(20.0, 0.0, -80.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis Tembok belakang 2
    glColor3f(0, 0, 0);
    glVertex3f(20.0, 80.0, -80.0);
    glVertex3f(20.0, 0.0, -80.0);
    glEnd();

    glBegin(GL_QUADS);//Tembok kanan 2
    glColor3f(0.502f, 0.000f, 0.000f);
    glVertex3f(20.0, 0.0, 20.0);
    glVertex3f(20.0, 0.0, -80.0);
    glVertex3f(20.0, 80.0, -80.0);
    glVertex3f(20.0, 80.0, 20.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis Tembok kanan 2
    glColor3f(0, 0, 0);
    glVertex3f(20.0, 0.0, 20.0);
    glVertex3f(20.0, 0.0, -80.0);
    glVertex3f(20.0, 80.0, -80.0);
    glVertex3f(20.0, 80.0, 20.0);
    glEnd();

    glBegin(GL_POLYGON);//atap 2
    glColor3f(0.502f, 0.000f, 0.000f);
    glVertex3f(-80.0, 80.0, 20.0);
    glVertex3f(-80.0, 80.0, -80.0);
    glVertex3f(20.0, 80.0, -80.0);
    glVertex3f(20.0, 80.0, 20.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis atap 2
    glColor3f(0, 0, 0);
    glVertex3f(-80.0, 80.0, 20.0);
    glVertex3f(-80.0, 80.0, -80.0);
    glVertex3f(20.0, 80.0, -80.0);
    glVertex3f(20.0, 80.0, 20.0);
    glEnd();

    glBegin(GL_QUADS);//cover bawah depan atap 2
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(-85.0, 80.0, 20.0);
    glVertex3f(-85.0, 80.0, 25.0);
    glVertex3f(20.0, 80.0, 25.0);
    glVertex3f(20.0, 80.0, 20.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis cover bawah depan atap 2
    glColor3f(0, 0, 0);
    glVertex3f(-85.0, 80.0, 20.0);
    glVertex3f(-85.0, 80.0, 25.0);
    glVertex3f(20.0, 80.0, 25.0);
    glVertex3f(20.0, 80.0, 20.0);
    glEnd();

    glBegin(GL_QUADS);//cover bawah kiri atap 2
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(-85.0, 80.0, 25.0);
    glVertex3f(-85.0, 80.0, -50.0);
    glVertex3f(-80.0, 80.0, -50.0);
    glVertex3f(-80.0, 80.0, 25.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis cover bawah kiri atap 2
    glColor3f(0, 0, 0);
    glVertex3f(-85.0, 80.0, 25.0);
    glVertex3f(-85.0, 80.0, -50.0);
    glVertex3f(-80.0, 80.0, -50.0);
    glVertex3f(-80.0, 80.0, 25.0);
    glEnd();

    glBegin(GL_QUADS);//cover depan atap 2
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(-85.0, 80.0, 25.0);
    glVertex3f(-85.0, 83.0, 25.0);
    glVertex3f(20.0, 83.0, 25.0);
    glVertex3f(20.0, 80.0, 25.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis cover depan atap 2
    glColor3f(0, 0, 0);
    glVertex3f(-85.0, 80.0, 25.0);
    glVertex3f(-85.0, 83.0, 25.0);
    glVertex3f(20.0, 83.0, 25.0);
    glVertex3f(20.0, 80.0, 25.0);
    glEnd();

    glBegin(GL_QUADS);//cover kiri atap 2
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(-85.0, 80.0, 25.0);
    glVertex3f(-85.0, 83.0, 25.0);
    glVertex3f(-85.0, 83.0, -50.0);
    glVertex3f(-85.0, 80.0, -50.0);
    glEnd();


    glBegin(GL_QUADS);//cover kanan atap 2
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(20.0, 80.0, 25.0);
    glVertex3f(20.0, 83.0, 25.0);
    glVertex3f(20.0, 83.0, -85.0);
    glVertex3f(20.0, 80.0, -85.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis cover kanan atap 2
    glColor3f(0, 0, 0);
    glVertex3f(20.0, 80.0, 25.0);
    glVertex3f(20.0, 83.0, 25.0);
    glVertex3f(20.0, 83.0, -85.0);
    glVertex3f(20.0, 80.0, -85.0);
    glEnd();

    glBegin(GL_QUADS);//cover atas atap 2
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(-85.0, 83.0, 25.0);
    glVertex3f(-85.0, 83.0, -85.0);
    glVertex3f(20.0, 83.0, -85.0);
    glVertex3f(20.0, 83.0, 25.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis cover atas atap 2
    glColor3f(0, 0, 0);
    glVertex3f(20.0, 83.0, -85.0);
    glVertex3f(20.0, 83.0, 25.0);
    glEnd();


}
void gedung_3()
{
    glBegin(GL_QUADS);//Tembok depan 3
    glColor3f(0.502f, 0.000f, 0.000f);
    glVertex3f(20.0, 0.0, 20.0);
    glVertex3f(20.0, 110.0, 20.0);
    glVertex3f(70.0, 110.0, 20.0);
    glVertex3f(70.0, 0.0, 20.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis Tembok depan 3
    glColor3f(0, 0, 0);
    glVertex3f(20.0, 0.0, 20.0);
    glVertex3f(20.0, 110.0, 20.0);
    glVertex3f(70.0, 110.0, 20.0);
    glVertex3f(70.0, 0.0, 20.0);
    glEnd();

    glBegin(GL_POLYGON);//Pillar depan 3
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(20.0, 0.0, 25.0);
    glVertex3f(20.0, 0.0, 20.0);
    glVertex3f(20.0, 105.0, 20.0);
    glVertex3f(30.0, 105.0, 20.0);
    glVertex3f(30.0, 0.0, 20.0);
    glVertex3f(30.0, 0.0, 25.0);
    glVertex3f(30.0, 100.0, 25.0);
    glVertex3f(20.0, 100.0, 25.0);
    glVertex3f(20.0, 105.0, 20.0);
    glVertex3f(30.0, 105.0, 20.0);
    glVertex3f(30.0, 100.0, 25.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis Pillar depan 3
    glColor3f(0, 0, 0);
    glVertex3f(20.0, 0.0, 25.0);
    glVertex3f(20.0, 0.0, 20.0);
    glVertex3f(20.0, 105.0, 20.0);
    glVertex3f(30.0, 105.0, 20.0);
    glVertex3f(30.0, 0.0, 20.0);
    glVertex3f(30.0, 0.0, 25.0);
    glVertex3f(30.0, 100.0, 25.0);
    glVertex3f(20.0, 100.0, 25.0);
    glVertex3f(20.0, 105.0, 20.0);
    glVertex3f(30.0, 105.0, 20.0);
    glVertex3f(30.0, 100.0, 25.0);
    glEnd();

    glBegin(GL_QUADS);//Tembok kiri 3
    glColor3f(0.502f, 0.000f, 0.000f);
    glVertex3f(20.0, 0.0, 20.0);
    glVertex3f(20.0, 0.0, -80.0);
    glVertex3f(20.0, 110.0, -80.0);
    glVertex3f(20.0, 110.0, 20.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis Tembok kiri 3
    glColor3f(0, 0, 0);
    glVertex3f(20.0, 0.0, 20.0);
    glVertex3f(20.0, 0.0, -80.0);
    glVertex3f(20.0, 110.0, -80.0);
    glVertex3f(20.0, 110.0, 20.0);
    glEnd();

    glBegin(GL_QUADS);//Tembok belakang 3
    glColor3f(0.502f, 0.000f, 0.000f);
    glVertex3f(20.0, 0.0, -80.0);
    glVertex3f(20.0, 110.0, -80.0);
    glVertex3f(70.0, 110.0, -80.0);
    glVertex3f(70.0, 0.0, -80.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis Tembok belakang 3
    glColor3f(0, 0, 0);
    glVertex3f(20.0, 0.0, -80.0);
    glVertex3f(20.0, 110.0, -80.0);
    glVertex3f(70.0, 110.0, -80.0);
    glVertex3f(70.0, 0.0, -80.0);
    glEnd();

    glBegin(GL_QUADS);//Tembok kanan 3
    glColor3f(0.502f, 0.000f, 0.000f);
    glVertex3f(70.0, 0.0, 20.0);
    glVertex3f(70.0, 0.0, -80.0);
    glVertex3f(70.0, 110.0, -80.0);
    glVertex3f(70.0, 110.0, 20.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis Tembok kanan 3
    glColor3f(0, 0, 0);
    glVertex3f(70.0, 0.0, 20.0);
    glVertex3f(70.0, 0.0, -80.0);
    glVertex3f(70.0, 110.0, -80.0);
    glVertex3f(70.0, 110.0, 20.0);
    glEnd();

    glBegin(GL_POLYGON);//atap 3
    glColor3f(0.502f, 0.000f, 0.000f);
    glVertex3f(20.0, 110.0, 20.0);
    glVertex3f(20.0, 110.0, -80.0);
    glVertex3f(70.0, 110.0, -80.0);
    glVertex3f(70.0, 110.0, 20.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis atap 3
    glColor3f(0, 0, 0);
    glVertex3f(20.0, 110.0, 20.0);
    glVertex3f(20.0, 110.0, -80.0);
    glVertex3f(70.0, 110.0, -80.0);
    glVertex3f(70.0, 110.0, 20.0);
    glEnd();

    glBegin(GL_QUADS);//cover bawah depan atap 3
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(15.0, 110.0, 20.0);
    glVertex3f(15.0, 110.0, 25.0);
    glVertex3f(70.0, 110.0, 25.0);
    glVertex3f(70.0, 110.0, 20.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis cover bawah depan atap 3
    glColor3f(0, 0, 0);
    glVertex3f(15.0, 110.0, 20.0);
    glVertex3f(15.0, 110.0, 25.0);
    glVertex3f(70.0, 110.0, 25.0);
    glVertex3f(70.0, 110.0, 20.0);
    glEnd();

    glBegin(GL_QUADS);//cover bawah kiri atap 3
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(20.0, 110.0, 25.0);
    glVertex3f(20.0, 110.0, -85.0);
    glVertex3f(15.0, 110.0, -85.0);
    glVertex3f(15.0, 110.0, 25.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis cover bawah kiri atap 3
    glColor3f(0, 0, 0);
    glVertex3f(20.0, 110.0, 25.0);
    glVertex3f(20.0, 110.0, -85.0);
    glVertex3f(15.0, 110.0, -85.0);
    glVertex3f(15.0, 110.0, 25.0);
    glEnd();

    glBegin(GL_QUADS);//cover bawah belakang atap 1
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(15.0, 110.0, -85.0);
    glVertex3f(15.0, 110.0, -80.0);
    glVertex3f(70.0, 110.0, -80.0);
    glVertex3f(70.0, 110.0, -85.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis cover bawah belakang atap 1
    glColor3f(0, 0, 0);
    glVertex3f(15.0, 110.0, -85.0);
    glVertex3f(15.0, 110.0, -80.0);
    glVertex3f(70.0, 110.0, -80.0);
    glVertex3f(70.0, 110.0, -85.0);
    glEnd();

    glBegin(GL_QUADS);//cover depan atap 3
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(15.0, 110.0, 25.0);
    glVertex3f(15.0, 113.0, 25.0);
    glVertex3f(70.0, 113.0, 25.0);
    glVertex3f(70.0, 110.0, 25.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis cover depan atap 3
    glColor3f(0, 0, 0);
    glVertex3f(15.0, 110.0, 25.0);
    glVertex3f(15.0, 113.0, 25.0);
    glVertex3f(70.0, 113.0, 25.0);
    glVertex3f(70.0, 110.0, 25.0);
    glEnd();

    glBegin(GL_QUADS);//cover kiri atap 3
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(15.0, 110.0, 25.0);
    glVertex3f(15.0, 113.0, 25.0);
    glVertex3f(15.0, 113.0, -85.0);
    glVertex3f(15.0, 110.0, -85.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis cover kiri atap 3
    glColor3f(0, 0, 0);
    glVertex3f(15.0, 110.0, 25.0);
    glVertex3f(15.0, 113.0, 25.0);
    glVertex3f(15.0, 113.0, -85.0);
    glVertex3f(15.0, 110.0, -85.0);
    glEnd();

    glBegin(GL_QUADS);//cover belakang atap 3
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(15.0, 110.0, -85.0);
    glVertex3f(15.0, 113.0, -85.0);
    glVertex3f(70.0, 113.0, -85.0);
    glVertex3f(70.0, 110.0, -85.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis cover belakang atap 3
    glColor3f(0, 0, 0);
    glVertex3f(15.0, 110.0, -85.0);
    glVertex3f(15.0, 113.0, -85.0);
    glVertex3f(70.0, 113.0, -85.0);
    glVertex3f(70.0, 110.0, -85.0);
    glEnd();

    glBegin(GL_QUADS);//cover atas atap 3
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(15.0, 113.0, 25.0);
    glVertex3f(15.0, 113.0, -85.0);
    glVertex3f(70.0, 113.0, -85.0);
    glVertex3f(70.0, 113.0, 25.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis cover atas atap 3
    glColor3f(0, 0, 0);
    glVertex3f(15.0, 113.0, 25.0);
    glVertex3f(15.0, 113.0, -85.0);
    glVertex3f(70.0, 113.0, -85.0);
    glVertex3f(70.0, 113.0, 25.0);
    glEnd();
}
void gedung_utama()
{
    glBegin(GL_QUADS);//pillar 1
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(70, 0, 20);
    glVertex3f(70, 180, 20);
    glVertex3f(70, 180, 30);
    glVertex3f(70, 0, 30);

    glVertex3f(70, 0, 30);
    glVertex3f(70, 180, 30);
    glVertex3f(80, 180, 40);
    glVertex3f(80, 0, 40);

    glVertex3f(80, 0, 40);
    glVertex3f(80, 180, 40);
    glVertex3f(90, 180, 40);
    glVertex3f(90, 0, 40);

    glVertex3f(90, 0, 40);
    glVertex3f(90, 180, 40);
    glVertex3f(100, 180, 30);
    glVertex3f(100, 0, 30);

    glVertex3f(100, 0, 30);
    glVertex3f(100, 180, 30);
    glVertex3f(100, 180, 20);
    glVertex3f(100, 0, 20);

    glVertex3f(100, 0, 20);
    glVertex3f(100, 180, 20);
    glVertex3f(90, 180, 10);
    glVertex3f(90, 0, 10);

    glVertex3f(90, 0, 10);
    glVertex3f(90, 180, 10);
    glVertex3f(80, 180, 10);
    glVertex3f(80, 0, 10);

    glVertex3f(80, 0, 10);
    glVertex3f(80, 180, 10);
    glVertex3f(70, 180, 20);
    glVertex3f(70, 0, 20);
    glEnd();


    //tembok kiri
    glBegin(GL_QUADS);
    glColor3f(0.502f, 0.000f, 0.000f);
    glVertex3f(70.5, 0, 20);
    glVertex3f(70.5, 165, 20);
    glVertex3f(70.5, 165, -80);
    glVertex3f(70.5, 0, -80);
    glEnd();

    //Pillar 2
    glBegin(GL_QUADS);
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(70, 0, -80);
    glVertex3f(70, 180, -80);
    glVertex3f(70, 180, -90);
    glVertex3f(70, 0, -90);

    glVertex3f(70, 0, -90);
    glVertex3f(70, 180, -90);
    glVertex3f(80, 180, -100);
    glVertex3f(80, 0, -100);

    glVertex3f(80, 0, -100);
    glVertex3f(80, 180, -100);
    glVertex3f(90, 180, -100);
    glVertex3f(90, 0, -100);

    glVertex3f(90, 0, -100);
    glVertex3f(90, 180, -100);
    glVertex3f(100, 180, -90);
    glVertex3f(100, 0, -90);

    glVertex3f(100, 0, -90);
    glVertex3f(100, 180, -90);
    glVertex3f(100, 180, -80);
    glVertex3f(100, 0, -80);

    glVertex3f(100, 0, -80);
    glVertex3f(100, 180, -80);
    glVertex3f(90, 180, -70);
    glVertex3f(90, 0, -70);

    glVertex3f(90, 0, -70);
    glVertex3f(90, 180, -70);
    glVertex3f(80, 180, -70);
    glVertex3f(80, 0, -70);

    glVertex3f(80, 0, -70);
    glVertex3f(80, 180, -70);
    glVertex3f(70, 180, -80);
    glVertex3f(70, 0, -80);
    glEnd();

    //tembok belakang
    glBegin(GL_QUADS);
    glColor3f(0.502f, 0.000f, 0.000f);
    glVertex3f(100.0, 0.0, -90.0);
    glVertex3f(100.0, 165.0, -90.0);
    glVertex3f(180.0, 165.0, -90.0);
    glVertex3f(180.0, 0.0, -90.0);
    glEnd();


    //Pillar 3
    glBegin(GL_QUADS);
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(180, 0, -80);
    glVertex3f(180, 180, -80);
    glVertex3f(180, 180, -90);
    glVertex3f(180, 0, -90);

    glVertex3f(180, 0, -90);
    glVertex3f(180, 180, -90);
    glVertex3f(190, 180, -100);
    glVertex3f(190, 0, -100);

    glVertex3f(190, 0, -100);
    glVertex3f(190, 180, -100);
    glVertex3f(200, 180, -100);
    glVertex3f(200, 0, -100);

    glVertex3f(200, 0, -100);
    glVertex3f(200, 180, -100);
    glVertex3f(210, 180, -90);
    glVertex3f(210, 0, -90);

    glVertex3f(210, 0, -90);
    glVertex3f(210, 180, -90);
    glVertex3f(210, 180, -80);
    glVertex3f(210, 0, -80);

    glVertex3f(210, 0, -80);
    glVertex3f(210, 180, -80);
    glVertex3f(200, 180, -70);
    glVertex3f(200, 0, -70);

    glVertex3f(200, 0, -70);
    glVertex3f(200, 180, -70);
    glVertex3f(190, 180, -70);
    glVertex3f(190, 0, -70);

    glVertex3f(190, 0, -70);
    glVertex3f(190, 180, -70);
    glVertex3f(180, 180, -80);
    glVertex3f(180, 0, -80);
    glEnd();

    //Tembok kanan
    glBegin(GL_QUADS);
    glColor3f(0.502f, 0.000f, 0.000f);
    glVertex3f(210, 0, 20);
    glVertex3f(210, 165, 20);
    glVertex3f(210, 165, -80);
    glVertex3f(210, 0, -80);
    glEnd();

    //Pillar 4
    glBegin(GL_QUADS);
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(180, 0, 20);
    glVertex3f(180, 180, 20);
    glVertex3f(180, 180, 30);
    glVertex3f(180, 0, 30);

    glVertex3f(180, 0, 30);
    glVertex3f(180, 180, 30);
    glVertex3f(190, 180, 40);
    glVertex3f(190, 0, 40);

    glVertex3f(190, 0, 40);
    glVertex3f(190, 180, 40);
    glVertex3f(200, 180, 40);
    glVertex3f(200, 0, 40);

    glVertex3f(200, 0, 40);
    glVertex3f(200, 180, 40);
    glVertex3f(210, 180, 30);
    glVertex3f(210, 0, 30);

    glVertex3f(210, 0, 30);
    glVertex3f(210, 180, 30);
    glVertex3f(210, 180, 20);
    glVertex3f(210, 0, 20);

    glVertex3f(210, 0, 20);
    glVertex3f(210, 180, 20);
    glVertex3f(200, 180, 10);
    glVertex3f(200, 0, 10);

    glVertex3f(200, 0, 10);
    glVertex3f(200, 180, 10);
    glVertex3f(190, 180, 10);
    glVertex3f(190, 0, 10);

    glVertex3f(190, 0, 10);
    glVertex3f(190, 180, 10);
    glVertex3f(180, 180, 20);
    glVertex3f(180, 0, 20);
    glEnd();

    //Tembok depan
    glBegin(GL_QUADS);
    glColor3f(0.502f, 0.000f, 0.000f);
    glVertex3f(100.0, 0.0, 30.0);
    glVertex3f(100.0, 165.0, 30.0);
    glVertex3f(180.0, 165.0, 30.0);
    glVertex3f(180.0, 0.0, 30.0);
    glEnd();

    //detail tembok depan
    glBegin(GL_POLYGON);
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(100.0, 0.0, 30.5);
    glVertex3f(100.0, 115.0, 30.5);
    glVertex3f(180.0, 115.0, 30.5);
    glVertex3f(180.0, 0.0, 30.5);
    glVertex3f(100.0, 0.0, 30.5);
    glVertex3f(100.0, 115.0, 30.5);
    glVertex3f(120.0, 115.0, 40.5);
    glVertex3f(160.0, 115.0, 40.5);
    glVertex3f(180.0, 115.0, 30.5);
    glVertex3f(180.0, 0.0, 30.5);
    glVertex3f(160.0, 0.0, 40.5);
    glVertex3f(120.0, 0.0, 40.5);
    glEnd();

    //pintu depan
    glBegin(GL_QUADS);
    glColor3f(0.545f, 0.271f, 0.075f);
    glVertex3f(120.0, 0.0, 40.5);
    glVertex3f(120.0, 55.0, 40.5);
    glVertex3f(160.0, 55.0, 40.5);
    glVertex3f(160.0, 0.0, 40.5);
    glEnd();

    //Garis tengah pintu depan
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(120.0, 0.0, 40.5);
    glVertex3f(120.0, 55.0, 40.5);
    glVertex3f(160.0, 55.0, 40.5);
    glVertex3f(160.0, 0.0, 40.5);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glVertex3f(140.0, 55.0, 40.8);
    glVertex3f(140.0, 0.0, 40.8);
    glEnd();

    //Ganggang pintu depan
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex3f(135.0, 27.0, 40.8);
    glVertex3f(135.0, 28.0, 40.8);
    glVertex3f(136.0, 28.0, 40.8);
    glVertex3f(136.0, 27.0, 40.8);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex3f(144.0, 27.0, 40.8);
    glVertex3f(144.0, 28.0, 40.8);
    glVertex3f(145.0, 28.0, 40.8);
    glVertex3f(145.0, 27.0, 40.8);
    glEnd();

    //detail tembok belakang
    glBegin(GL_POLYGON);
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(100.0, 0.0, -90.5);
    glVertex3f(100.0, 115.0, -90.5);
    glVertex3f(180.0, 115.0, -90.5);
    glVertex3f(180.0, 0.0, -90.5);
    glVertex3f(100.0, 0.0, -90.5);
    glVertex3f(100.0, 115.0, -90.5);
    glVertex3f(120.0, 115.0, -100.5);
    glVertex3f(160.0, 115.0, -100.5);
    glVertex3f(180.0, 115.0, -90.5);
    glVertex3f(180.0, 0.0, -90.5);
    glVertex3f(160.0, 0.0, -100.5);
    glVertex3f(120.0, 0.0, -100.5);
    glEnd();

    //pintu belakang
    glBegin(GL_QUADS);
    glColor3f(0.545f, 0.271f, 0.075f);
    glVertex3f(120.0, 0.0, -100.5);
    glVertex3f(120.0, 55.0, -100.5);
    glVertex3f(160.0, 55.0, -100.5);
    glVertex3f(160.0, 0.0, -100.5);
    glEnd();

    //Garis tengah pintu belakang
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(120.0, 0.0, -100.5);
    glVertex3f(120.0, 55.0, -100.5);
    glVertex3f(160.0, 55.0, -100.5);
    glVertex3f(160.0, 0.0, -100.5);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glVertex3f(140.0, 55.0, -100.8);
    glVertex3f(140.0, 0.0, -100.8);
    glEnd();

    //Ganggang pintu belakang
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex3f(135.0, 27.0, -100.8);
    glVertex3f(135.0, 28.0, -100.8);
    glVertex3f(136.0, 28.0, -100.8);
    glVertex3f(136.0, 27.0, -100.8);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex3f(144.0, 27.0, -100.8);
    glVertex3f(144.0, 28.0, -100.8);
    glVertex3f(145.0, 28.0, -100.8);
    glVertex3f(145.0, 27.0, -100.8);
    glEnd();

    //atap
    glBegin(GL_QUADS);
    glColor3f(0.502f, 0.000f, 0.000f);
    glVertex3f(70.0, 165.0, 30.0);
    glVertex3f(70.0, 165.0, -90.0);
    glVertex3f(210.0, 165.0, -90.0);
    glVertex3f(210.0, 165.0, 30.0);
    glEnd();
}
void tambahan_gedung_utama()
{
    //TEMBOK DEPAN
    // Garis 1 belakang
    glBegin(GL_QUADS);
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(129, 115., 30.7);
    glVertex3f(129, 175, 30.7);
    glVertex3f(134, 175, 30.7);
    glVertex3f(134, 115, 30.7);
    glEnd();

    // Garis 1 kiri
    glBegin(GL_QUADS);
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(129, 115, 30.7);
    glVertex3f(129, 175, 30.7);
    glVertex3f(129, 175, 33.7);
    glVertex3f(129, 115, 33.7);
    glEnd();

    // Garis 1 depan
    glBegin(GL_QUADS);
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(129, 115, 33.7);
    glVertex3f(129, 175, 33.7);
    glVertex3f(134, 175, 33.7);
    glVertex3f(134, 115, 33.7);
    glEnd();

    // Garis 1 kanan
    glBegin(GL_QUADS);
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(134, 115, 30.7);
    glVertex3f(134, 175, 30.7);
    glVertex3f(134, 175, 33.7);
    glVertex3f(134, 115, 33.7);
    glEnd();

    // Garis 1 atas
    glBegin(GL_QUADS);
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(129, 175, 30.7);
    glVertex3f(129, 175, 30.7);
    glVertex3f(134, 175, 33.7);
    glVertex3f(134, 175, 33.7);
    glEnd();

    // Garis 2 belakang
    glBegin(GL_QUADS);
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(139, 115, 30.7);
    glVertex3f(139, 175, 30.7);
    glVertex3f(144, 175, 30.7);
    glVertex3f(144, 115, 30.7);
    glEnd();

    // Garis 2 kiri
    glBegin(GL_QUADS);
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(139, 115, 30.7);
    glVertex3f(139, 175, 30.7);
    glVertex3f(139, 175, 33.7);
    glVertex3f(139, 115, 33.7);
    glEnd();

    // Garis 2 depan
    glBegin(GL_QUADS);
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(139, 115, 33.7);
    glVertex3f(139, 175, 33.7);
    glVertex3f(144, 175, 33.7);
    glVertex3f(144, 115, 33.7);
    glEnd();

    // Garis 2 kanan
    glBegin(GL_QUADS);
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(144, 115, 30.7);
    glVertex3f(144, 175, 30.7);
    glVertex3f(144, 175, 33.7);
    glVertex3f(144, 115, 33.7);
    glEnd();

    // Garis 2 atas
    glBegin(GL_QUADS);
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(139, 175, 30.7);
    glVertex3f(139, 175, 30.7);
    glVertex3f(144, 175, 33.7);
    glVertex3f(144, 175, 33.7);
    glEnd();

    // Garis 3 belakang
    glBegin(GL_QUADS);
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(149, 115, 30.7);
    glVertex3f(149, 175, 30.7);
    glVertex3f(154, 175, 30.7);
    glVertex3f(154, 115, 30.7);
    glEnd();

    // Garis 3 kiri
    glBegin(GL_QUADS);
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(149, 115, 30.7);
    glVertex3f(149, 175, 30.7);
    glVertex3f(149, 175, 33.7);
    glVertex3f(149, 115, 33.7);
    glEnd();

    // Garis 3 depan
    glBegin(GL_QUADS);
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(149, 115, 33.7);
    glVertex3f(149, 175, 33.7);
    glVertex3f(154, 175, 33.7);
    glVertex3f(154, 115, 33.7);
    glEnd();

    // Garis 3 kanan
    glBegin(GL_QUADS);
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(154, 115, 30.7);
    glVertex3f(154, 175, 30.7);
    glVertex3f(154, 175, 33.7);
    glVertex3f(154, 115, 33.7);
    glEnd();

    // Garis 3 atas
    glBegin(GL_QUADS);
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(149, 175, 30.7);
    glVertex3f(149, 175, 30.7);
    glVertex3f(154, 175, 33.7);
    glVertex3f(154, 175, 33.7);
    glEnd();

    //TEMBOK KIRI
     // Garis 1 belakang
    glBegin(GL_QUADS);
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(69, 115, -44);
    glVertex3f(69, 175, -44);
    glVertex3f(69, 175, -38);
    glVertex3f(69, 115, -38);
    glEnd();

    // Garis 1 kiri
    glBegin(GL_QUADS);
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(69, 115., -44);
    glVertex3f(69, 175, -44);
    glVertex3f(66, 175, -44);
    glVertex3f(66, 115, -44);
    glEnd();

    // Garis 1 depan
    glBegin(GL_QUADS);
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(66, 115, -44);
    glVertex3f(66, 175, -44);
    glVertex3f(66, 175, -38);
    glVertex3f(66, 115, -38);
    glEnd();

    // Garis 1 kanan
    glBegin(GL_QUADS);
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(69, 115., -38);
    glVertex3f(69, 175, -38);
    glVertex3f(66, 175, -38);
    glVertex3f(66, 115, -38);
    glEnd();

    // Garis 1 atas
    glBegin(GL_QUADS);
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(69, 175., -38);
    glVertex3f(69, 175, -38);
    glVertex3f(66, 175, -44);
    glVertex3f(66, 175, -44);
    glEnd();

    // Garis 2 belakang
    glBegin(GL_QUADS);
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(69, 115, -33.7);
    glVertex3f(69, 175, -33.7);
    glVertex3f(69, 175, -27.7);
    glVertex3f(69, 115, -27.7);
    glEnd();

    // Garis 2 kiri
    glBegin(GL_QUADS);
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(69, 115, -33.7);
    glVertex3f(69, 175, -33.7);
    glVertex3f(66, 175, -33.7);
    glVertex3f(66, 115, -33.7);
    glEnd();

    // Garis 2 depan
    glBegin(GL_QUADS);
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(66, 115, -33.7);
    glVertex3f(66, 175, -33.7);
    glVertex3f(66, 175, -27.7);
    glVertex3f(66, 115, -27.7);
    glEnd();

    // Garis 2 kanan
    glBegin(GL_QUADS);
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(69, 115, -27.7);
    glVertex3f(69, 175, -27.7);
    glVertex3f(66, 175, -27.7);
    glVertex3f(66, 115, -27.7);
    glEnd();

    // Garis 2 atas
    glBegin(GL_QUADS);
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(69, 175, 33.7);
    glVertex3f(69, 175, 33.7);
    glVertex3f(66, 175, 27.7);
    glVertex3f(66, 175, 27.7);
    glEnd();

    // Garis 3 belakang
    glBegin(GL_QUADS);
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(69, 115, -23);
    glVertex3f(69, 175, -23);
    glVertex3f(69, 175, -17);
    glVertex3f(69, 115, -17);
    glEnd();

    // Garis 3 kiri
    glBegin(GL_QUADS);
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(69, 115., -23);
    glVertex3f(69, 175, -23);
    glVertex3f(66, 175, -23);
    glVertex3f(66, 115, -23);
    glEnd();

    // Garis 3 depan
    glBegin(GL_QUADS);
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(66, 115, -23);
    glVertex3f(66, 175, -23);
    glVertex3f(66, 175, -17);
    glVertex3f(66, 115, -17);
    glEnd();

    // Garis 3 kanan
    glBegin(GL_QUADS);
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(69, 115., -17);
    glVertex3f(69, 175, -17);
    glVertex3f(66, 175, -17);
    glVertex3f(66, 115, -17);
    glEnd();

    // Garis 3 atas
    glBegin(GL_QUADS);
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(69, 175., -17);
    glVertex3f(69, 175, -17);
    glVertex3f(66, 175, -23);
    glVertex3f(66, 175, -23);
    glEnd();

    //TEMBOK KANAN
    // Garis 1 belakang
    glBegin(GL_QUADS);
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(211, 115, -44);
    glVertex3f(211, 175, -44);
    glVertex3f(211, 175, -38);
    glVertex3f(211, 115, -38);
    glEnd();

    // Garis 1 kiri
    glBegin(GL_QUADS);
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(211, 115., -44);
    glVertex3f(211, 175, -44);
    glVertex3f(214, 175, -44);
    glVertex3f(214, 115, -44);
    glEnd();

    // Garis 1 depan
    glBegin(GL_QUADS);
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(214, 115, -44);
    glVertex3f(214, 175, -44);
    glVertex3f(214, 175, -38);
    glVertex3f(214, 115, -38);
    glEnd();

    // Garis 1 kanan
    glBegin(GL_QUADS);
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(211, 115., -38);
    glVertex3f(211, 175, -38);
    glVertex3f(214, 175, -38);
    glVertex3f(214, 115, -38);
    glEnd();

    // Garis 1 atas
    glBegin(GL_QUADS);
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(211, 175., -38);
    glVertex3f(211, 175, -38);
    glVertex3f(214, 175, -44);
    glVertex3f(214, 175, -44);
    glEnd();

    // Garis 2 belakang
    glBegin(GL_QUADS);
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(211, 115, -33.7);
    glVertex3f(211, 175, -33.7);
    glVertex3f(211, 175, -27.7);
    glVertex3f(211, 115, -27.7);
    glEnd();

    // Garis 2 kiri
    glBegin(GL_QUADS);
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(211, 115, -33.7);
    glVertex3f(211, 175, -33.7);
    glVertex3f(214, 175, -33.7);
    glVertex3f(214, 115, -33.7);
    glEnd();

    // Garis 2 depan
    glBegin(GL_QUADS);
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(214, 115, -33.7);
    glVertex3f(214, 175, -33.7);
    glVertex3f(214, 175, -27.7);
    glVertex3f(214, 115, -27.7);
    glEnd();

    // Garis 2 kanan
    glBegin(GL_QUADS);
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(211, 115, -27.7);
    glVertex3f(214, 175, -27.7);
    glVertex3f(214, 175, -27.7);
    glVertex3f(214, 115, -27.7);
    glEnd();

    // Garis 2 atas
    glBegin(GL_QUADS);
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(211, 175, -33.7);
    glVertex3f(214, 175, -33.7);
    glVertex3f(214, 175, -27.7);
    glVertex3f(211, 175, -27.7);
    glEnd();

    // Garis 3 belakang
    glBegin(GL_QUADS);
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(211, 115, -23);
    glVertex3f(211, 175, -23);
    glVertex3f(211, 175, -17);
    glVertex3f(211, 115, -17);
    glEnd();

    // Garis 3 kiri
    glBegin(GL_QUADS);
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(211, 115., -23);
    glVertex3f(211, 175, -23);
    glVertex3f(214, 175, -23);
    glVertex3f(214, 115, -23);
    glEnd();

    // Garis 3 depan
    glBegin(GL_QUADS);
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(214, 115, -23);
    glVertex3f(214, 175, -23);
    glVertex3f(214, 175, -17);
    glVertex3f(214, 115, -17);
    glEnd();

    // Garis 3 kanan
    glBegin(GL_QUADS);
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(211, 115., -17);
    glVertex3f(211, 175, -17);
    glVertex3f(214, 175, -17);
    glVertex3f(214, 115, -17);
    glEnd();

    // Garis 3 atas
    glBegin(GL_QUADS);
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(211, 175., -17);
    glVertex3f(211, 175, -17);
    glVertex3f(214, 175, -23);
    glVertex3f(214, 175, -23);
    glEnd();

    //TEMBOK BELAKANG
     // Garis 1 belakang
    glBegin(GL_QUADS);
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(129, 115., -91);
    glVertex3f(129, 175, -91);
    glVertex3f(134, 175, -91);
    glVertex3f(134, 115, -91);
    glEnd();

    // Garis 1 kiri
    glBegin(GL_QUADS);
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(129, 115, -91);
    glVertex3f(129, 175, -91);
    glVertex3f(129, 175, -94);
    glVertex3f(129, 115, -94);
    glEnd();

    // Garis 1 depan
    glBegin(GL_QUADS);
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(129, 115, -94);
    glVertex3f(129, 175, -94);
    glVertex3f(134, 175, -94);
    glVertex3f(134, 115, -94);
    glEnd();

    // Garis 1 kanan
    glBegin(GL_QUADS);
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(134, 115, -91);
    glVertex3f(134, 175, -91);
    glVertex3f(134, 175, -94);
    glVertex3f(134, 115, -94);
    glEnd();

    // Garis 1 atas
    glBegin(GL_QUADS);
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(129, 175, -91);
    glVertex3f(129, 175, -91);
    glVertex3f(134, 175, -94);
    glVertex3f(134, 175, -94);
    glEnd();

    // Garis 2 belakang
    glBegin(GL_QUADS);
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(139, 115, -91);
    glVertex3f(139, 175, -91);
    glVertex3f(144, 175, -91);
    glVertex3f(144, 115, -91);
    glEnd();

    // Garis 2 kiri
    glBegin(GL_QUADS);
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(139, 115, -91);
    glVertex3f(139, 175, -91);
    glVertex3f(139, 175, -94);
    glVertex3f(139, 115, -94);
    glEnd();

    // Garis 2 depan
    glBegin(GL_QUADS);
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(139, 115, -94);
    glVertex3f(139, 175, -94);
    glVertex3f(144, 175, -94);
    glVertex3f(144, 115, -94);
    glEnd();

    // Garis 2 kanan
    glBegin(GL_QUADS);
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(144, 115, -91);
    glVertex3f(144, 175, -91);
    glVertex3f(144, 175, -94);
    glVertex3f(144, 115, -94);
    glEnd();

    // Garis 2 atas
    glBegin(GL_QUADS);
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(139, 175, -91);
    glVertex3f(139, 175, -91);
    glVertex3f(144, 175, -94);
    glVertex3f(144, 175, -94);
    glEnd();

    // Garis 3 belakang
    glBegin(GL_QUADS);
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(149, 115, -91);
    glVertex3f(149, 175, -91);
    glVertex3f(154, 175, -91);
    glVertex3f(154, 115, -91);
    glEnd();

    // Garis 3 kiri
    glBegin(GL_QUADS);
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(149, 115, -91);
    glVertex3f(149, 175, -91);
    glVertex3f(149, 175, -94);
    glVertex3f(149, 115, -94);
    glEnd();

    // Garis 3 depan
    glBegin(GL_QUADS);
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(149, 115, -94);
    glVertex3f(149, 175, -94);
    glVertex3f(154, 175, -94);
    glVertex3f(154, 115, -94);
    glEnd();

    // Garis 3 kanan
    glBegin(GL_QUADS);
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(154, 115, -91);
    glVertex3f(154, 175, -91);
    glVertex3f(154, 175, -94);
    glVertex3f(154, 115, -94);
    glEnd();

    // Garis 3 atas
    glBegin(GL_QUADS);
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(149, 175, -91);
    glVertex3f(149, 175, -91);
    glVertex3f(154, 175, -94);
    glVertex3f(154, 175, -94);
    glEnd();
}
void gedung_4()
{
    glBegin(GL_QUADS);//Tembok depan 4
    glColor3f(0.502f, 0.000f, 0.000f);
    glVertex3f(210.0, 0.0, 20.0);
    glVertex3f(210.0, 110.0, 20.0);
    glVertex3f(260.0, 110.0, 20.0);
    glVertex3f(260.0, 0.0, 20.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis Tembok depan 4
    glColor3f(0, 0, 0);
    glVertex3f(210.0, 0.0, 20.0);
    glVertex3f(210.0, 110.0, 20.0);
    glVertex3f(260.0, 110.0, 20.0);
    glVertex3f(260.0, 0.0, 20.0);
    glEnd();

    glBegin(GL_POLYGON);//Pillar depan 4
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(250.0, 0.0, 25.0);
    glVertex3f(250.0, 0.0, 20.0);
    glVertex3f(250.0, 105.0, 20.0);
    glVertex3f(260.0, 105.0, 20.0);
    glVertex3f(260.0, 0.0, 20.0);
    glVertex3f(260.0, 0.0, 25.0);
    glVertex3f(260.0, 100.0, 25.0);
    glVertex3f(250.0, 100.0, 25.0);
    glVertex3f(250.0, 105.0, 20.0);
    glVertex3f(260.0, 105.0, 20.0);
    glVertex3f(260.0, 100.0, 25.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis Pillar depan 4
    glColor3f(0, 0, 0);
    glVertex3f(250.0, 0.0, 25.0);
    glVertex3f(250.0, 0.0, 20.0);
    glVertex3f(250.0, 105.0, 20.0);
    glVertex3f(260.0, 105.0, 20.0);
    glVertex3f(260.0, 0.0, 20.0);
    glVertex3f(260.0, 0.0, 25.0);
    glVertex3f(260.0, 100.0, 25.0);
    glVertex3f(250.0, 100.0, 25.0);
    glVertex3f(250.0, 105.0, 20.0);
    glVertex3f(260.0, 105.0, 20.0);
    glVertex3f(260.0, 100.0, 25.0);
    glEnd();

    glBegin(GL_QUADS);//Tembok kiri 4
    glColor3f(0.502f, 0.00f, 0.000f);
    glVertex3f(210.0, 0.0, 20.0);
    glVertex3f(210.0, 0.0, -80.0);
    glVertex3f(210.0, 110.0, -80.0);
    glVertex3f(210.0, 110.0, 20.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis Tembok kiri 4
    glColor3f(0, 0, 0);
    glVertex3f(210.0, 0.0, 20.0);
    glVertex3f(210.0, 0.0, -80.0);
    glVertex3f(210.0, 110.0, -80.0);
    glVertex3f(210.0, 110.0, 20.0);
    glEnd();

    glBegin(GL_QUADS);//Tembok belakang 4
    glColor3f(0.502f, 0.000f, 0.000f);
    glVertex3f(210.0, 0.0, -80.0);
    glVertex3f(210.0, 110.0, -80.0);
    glVertex3f(260.0, 110.0, -80.0);
    glVertex3f(260.0, 0.0, -80.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis Tembok belakang 4
    glColor3f(0, 0, 0);
    glVertex3f(210.0, 0.0, -80.0);
    glVertex3f(210.0, 110.0, -80.0);
    glVertex3f(260.0, 110.0, -80.0);
    glVertex3f(260.0, 0.0, -80.0);
    glEnd();

    glBegin(GL_QUADS);//Tembok kanan 4
    glColor3f(0.502f, 0.000f, 0.000f);
    glVertex3f(260.0, 0.0, 20.0);
    glVertex3f(260.0, 0.0, -80.0);
    glVertex3f(260.0, 110.0, -80.0);
    glVertex3f(260.0, 110.0, 20.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis Tembok kanan 4
    glColor3f(0, 0, 0);
    glVertex3f(260.0, 0.0, 20.0);
    glVertex3f(260.0, 0.0, -80.0);
    glVertex3f(260.0, 110.0, -80.0);
    glVertex3f(260.0, 110.0, 20.0);
    glEnd();

    glBegin(GL_POLYGON);//atap 4
    glColor3f(0.502f, 0.000f, 0.000f);
    glVertex3f(210.0, 110.0, 20.0);
    glVertex3f(210.0, 110.0, -80.0);
    glVertex3f(260.0, 110.0, -80.0);
    glVertex3f(260.0, 110.0, 20.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garisatap 4
    glColor3f(0, 0, 0);
    glVertex3f(210.0, 110.0, 20.0);
    glVertex3f(210.0, 110.0, -80.0);
    glVertex3f(260.0, 110.0, -80.0);
    glVertex3f(260.0, 110.0, 20.0);
    glEnd();

    glBegin(GL_QUADS);//cover bawah depan atap 4
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(210.0, 110.0, 20.0);
    glVertex3f(210.0, 110.0, 25.0);
    glVertex3f(265.0, 110.0, 25.0);
    glVertex3f(265.0, 110.0, 20.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis cover bawah depan atap 4
    glColor3f(0, 0, 0);
    glVertex3f(210.0, 110.0, 20.0);
    glVertex3f(210.0, 110.0, 25.0);
    glVertex3f(265.0, 110.0, 25.0);
    glVertex3f(265.0, 110.0, 20.0);
    glEnd();

    glBegin(GL_QUADS);//cover bawah kanan atap 4
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(260.0, 110.0, 25.0);
    glVertex3f(260.0, 110.0, -85.0);
    glVertex3f(265.0, 110.0, -85.0);
    glVertex3f(265.0, 110.0, 25.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis cover bawah kanan atap 4
    glColor3f(0, 0, 0);
    glVertex3f(260.0, 110.0, 25.0);
    glVertex3f(260.0, 110.0, -85.0);
    glVertex3f(265.0, 110.0, -85.0);
    glVertex3f(265.0, 110.0, 25.0);
    glEnd();

    glBegin(GL_QUADS);//cover bawah belakang atap 4
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(210.0, 110.0, -85.0);
    glVertex3f(210.0, 110.0, -80.0);
    glVertex3f(265.0, 110.0, -80.0);
    glVertex3f(265.0, 110.0, -85.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis cover bawah belakang atap 4
    glColor3f(0, 0, 0);
    glVertex3f(210.0, 110.0, -85.0);
    glVertex3f(210.0, 110.0, -80.0);
    glVertex3f(265.0, 110.0, -80.0);
    glVertex3f(265.0, 110.0, -85.0);
    glEnd();

    glBegin(GL_QUADS);//cover depan atap 4
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(210.0, 110.0, 25.0);
    glVertex3f(210.0, 113.0, 25.0);
    glVertex3f(265.0, 113.0, 25.0);
    glVertex3f(265.0, 110.0, 25.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis cover depan atap 4
    glColor3f(0, 0, 0);
    glVertex3f(210.0, 110.0, 25.0);
    glVertex3f(210.0, 113.0, 25.0);
    glVertex3f(265.0, 113.0, 25.0);
    glVertex3f(265.0, 110.0, 25.0);
    glEnd();

    glBegin(GL_QUADS);//cover kanan atap 4
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(265.0, 110.0, 25.0);
    glVertex3f(265.0, 113.0, 25.0);
    glVertex3f(265.0, 113.0, -85.0);
    glVertex3f(265.0, 110.0, -85.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis cover kanan atap 4
    glColor3f(0, 0, 0);
    glVertex3f(265.0, 110.0, 25.0);
    glVertex3f(265.0, 113.0, 25.0);
    glVertex3f(265.0, 113.0, -85.0);
    glVertex3f(265.0, 110.0, -85.0);
    glEnd();

    glBegin(GL_QUADS);//cover belakang atap 4
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(210.0, 110.0, -85.0);
    glVertex3f(210.0, 113.0, -85.0);
    glVertex3f(265.0, 113.0, -85.0);
    glVertex3f(265.0, 110.0, -85.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis cover belakang atap 4
    glColor3f(0, 0, 0);
    glVertex3f(210.0, 110.0, -85.0);
    glVertex3f(210.0, 113.0, -85.0);
    glVertex3f(265.0, 113.0, -85.0);
    glVertex3f(265.0, 110.0, -85.0);
    glEnd();

    glBegin(GL_QUADS);//cover atas atap 4
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(210.0, 113.0, 25.0);
    glVertex3f(210.0, 113.0, -85.0);
    glVertex3f(265.0, 113.0, -85.0);
    glVertex3f(265.0, 113.0, 25.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis cover atas atap 4
    glColor3f(0, 0, 0);
    glVertex3f(210.0, 113.0, 25.0);
    glVertex3f(210.0, 113.0, -85.0);
    glVertex3f(265.0, 113.0, -85.0);
    glVertex3f(265.0, 113.0, 25.0);
    glEnd();
}
void gedung_5()
{
    glBegin(GL_QUADS);//Tembok depan 5
    glColor3f(0.502f, 0.000f, 0.000);
    glVertex3f(260.0, 0.0, 20.0);
    glVertex3f(260.0, 80.0, 20.0);
    glVertex3f(360.0, 80.0, 20.0);
    glVertex3f(360.0, 0.0, 20.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis Tembok depan 5
    glColor3f(0, 0, 0);
    glVertex3f(260.0, 0.0, 20.0);
    glVertex3f(260.0, 80.0, 20.0);
    glVertex3f(360.0, 80.0, 20.0);
    glVertex3f(360.0, 0.0, 20.0);
    glEnd();

    glBegin(GL_POLYGON);//Pillar depan 1
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(350.0, 0.0, 25.0);
    glVertex3f(350.0, 0.0, 20.0);
    glVertex3f(350.0, 75.0, 20.0);
    glVertex3f(360.0, 75.0, 20.0);
    glVertex3f(360.0, 0.0, 20.0);
    glVertex3f(360.0, 0.0, 25.0);
    glVertex3f(360.0, 70.0, 25.0);
    glVertex3f(350.0, 70.0, 25.0);
    glVertex3f(350.0, 75.0, 20.0);
    glVertex3f(360.0, 75.0, 20.0);
    glVertex3f(360.0, 70.0, 25.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis Pillar depan 1
    glColor3f(0, 0, 0);
    glVertex3f(350.0, 0.0, 25.0);
    glVertex3f(350.0, 0.0, 20.0);
    glVertex3f(350.0, 75.0, 20.0);
    glVertex3f(360.0, 75.0, 20.0);
    glVertex3f(360.0, 0.0, 20.0);
    glVertex3f(360.0, 0.0, 25.0);
    glVertex3f(360.0, 70.0, 25.0);
    glVertex3f(350.0, 70.0, 25.0);
    glVertex3f(350.0, 75.0, 20.0);
    glVertex3f(360.0, 75.0, 20.0);
    glVertex3f(360.0, 70.0, 25.0);
    glEnd();

    glBegin(GL_POLYGON);//Pillar depan 2
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(300.0, 0.0, 25.0);
    glVertex3f(300.0, 0.0, 20.0);
    glVertex3f(300.0, 75.0, 20.0);
    glVertex3f(310.0, 75.0, 20.0);
    glVertex3f(310.0, 0.0, 20.0);
    glVertex3f(310.0, 0.0, 25.0);
    glVertex3f(310.0, 70.0, 25.0);
    glVertex3f(300.0, 70.0, 25.0);
    glVertex3f(300.0, 75.0, 20.0);
    glVertex3f(300.0, 75.0, 20.0);
    glVertex3f(300.0, 70.0, 25.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis Pillar depan 2
    glColor3f(0, 0, 0);
    glVertex3f(300.0, 0.0, 25.0);
    glVertex3f(300.0, 0.0, 20.0);
    glVertex3f(300.0, 75.0, 20.0);
    glVertex3f(310.0, 75.0, 20.0);
    glVertex3f(310.0, 0.0, 20.0);
    glVertex3f(310.0, 0.0, 25.0);
    glVertex3f(310.0, 70.0, 25.0);
    glVertex3f(300.0, 70.0, 25.0);
    glVertex3f(300.0, 75.0, 20.0);
    glVertex3f(310.0, 75.0, 20.0);
    glVertex3f(310.0, 70.0, 25.0);
    glEnd();

    glBegin(GL_QUADS);//Tembok kiri 5
    glColor3f(0.502f, 0.000f, 0.000f);
    glVertex3f(260.0, 0.0, 20.0);
    glVertex3f(260.0, 0.0, -80.0);
    glVertex3f(260.0, 80.0, -80.0);
    glVertex3f(260.0, 80.0, 20.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis Tembok kiri 5
    glColor3f(0, 0, 0);
    glVertex3f(260.0, 0.0, 20.0);
    glVertex3f(260.0, 0.0, -80.0);
    glVertex3f(260.0, 80.0, -80.0);
    glVertex3f(260.0, 80.0, 20.0);
    glEnd();

    glBegin(GL_QUADS);//Tembok belakang 5
    glColor3f(0.502f, 0.000f, 0.000f);
    glVertex3f(260.0, 0.0, -80.0);
    glVertex3f(260.0, 80.0, -80.0);
    glVertex3f(360.0, 80.0, -80.0);
    glVertex3f(360.0, 0.0, -80.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis Tembok belakang 5
    glColor3f(0, 0, 0);
    glVertex3f(260.0, 0.0, -80.0);
    glVertex3f(260.0, 80.0, -80.0);
    glVertex3f(430.0, 80.0, -80.0);
    glVertex3f(430.0, 0.0, -80.0);
    glEnd();

    glBegin(GL_QUADS);//Tembok kanan 5
    glColor3f(0.502f, 0.000f, 0.000f);
    glVertex3f(360.0, 0.0, 20.0);
    glVertex3f(360.0, 0.0, -80.0);
    glVertex3f(360.0, 80.0, -80.0);
    glVertex3f(360.0, 80.0, 20.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis Tembok kanan 5
    glColor3f(0, 0, 0);
    glVertex3f(360.0, 0.0, 20.0);
    glVertex3f(360.0, 80.0, 20.0);
    glEnd();

    glBegin(GL_POLYGON);//atap 5
    glColor3f(0.502f, 0.000f, 0.000f);
    glVertex3f(260.0, 80.0, 20.0);
    glVertex3f(260.0, 80.0, -80.0);
    glVertex3f(360.0, 80.0, -80.0);
    glVertex3f(360.0, 80.0, 20.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis atap 5
    glColor3f(0, 0, 0);
    glVertex3f(260.0, 80.0, 20.0);
    glVertex3f(260.0, 80.0, -80.0);
    glVertex3f(360.0, 80.0, -80.0);
    glVertex3f(360.0, 80.0, 20.0);
    glEnd();

    glBegin(GL_QUADS);//cover bawah depan atap 5
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(260.0, 80.0, 20.0);
    glVertex3f(260.0, 80.0, 25.0);
    glVertex3f(365.0, 80.0, 25.0);
    glVertex3f(365.0, 80.0, 20.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis cover bawah depan atap 5
    glColor3f(0, 0, 0);
    glVertex3f(260.0, 80.0, 20.0);
    glVertex3f(260.0, 80.0, 25.0);
    glVertex3f(365.0, 80.0, 25.0);
    glVertex3f(365.0, 80.0, 20.0);
    glEnd();

    glBegin(GL_QUADS);//cover bawah kanan atap 5
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(360.0, 80.0, 25.0);
    glVertex3f(360.0, 80.0, -50.0);
    glVertex3f(365.0, 80.0, -50.0);
    glVertex3f(365.0, 80.0, 25.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis cover bawah kanan atap 5
    glColor3f(0, 0, 0);
    glVertex3f(360.0, 80.0, 25.0);
    glVertex3f(360.0, 80.0, -50.0);
    glVertex3f(365.0, 80.0, -50.0);
    glVertex3f(365.0, 80.0, 25.0);
    glEnd();

    glBegin(GL_QUADS);//cover bawah belakang atap 1
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(260.0, 80.0, -85.0);
    glVertex3f(260.0, 80.0, -80.0);
    glVertex3f(435.0, 80.0, -80.0);
    glVertex3f(435.0, 80.0, -85.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis cover bawah belakang atap 1
    glColor3f(0, 0, 0);
    glVertex3f(260.0, 80.0, -85.0);
    glVertex3f(260.0, 80.0, -80.0);
    glVertex3f(435.0, 80.0, -80.0);
    glVertex3f(435.0, 80.0, -85.0);
    glEnd();

    glBegin(GL_QUADS);//cover depan atap 5
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(260.0, 80.0, 25.0);
    glVertex3f(260.0, 83.0, 25.0);
    glVertex3f(365.0, 83.0, 25.0);
    glVertex3f(365.0, 80.0, 25.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis cover depan atap 5
    glColor3f(0, 0, 0);
    glVertex3f(260.0, 80.0, 25.0);
    glVertex3f(260.0, 83.0, 25.0);
    glVertex3f(365.0, 83.0, 25.0);
    glVertex3f(365.0, 80.0, 25.0);
    glEnd();

    glBegin(GL_QUADS);//cover kiri atap 5
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(260.0, 80.0, 25.0);
    glVertex3f(260.0, 83.0, 25.0);
    glVertex3f(260.0, 83.0, -85.0);
    glVertex3f(260.0, 80.0, -85.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis cover kiri atap 5
    glColor3f(0, 0, 0);
    glVertex3f(260.0, 80.0, 25.0);
    glVertex3f(260.0, 83.0, 25.0);
    glVertex3f(260.0, 83.0, -85.0);
    glVertex3f(260.0, 80.0, -85.0);
    glEnd();

    glBegin(GL_QUADS);//cover kanan atap 5
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(365.0, 80.0, 25.0);
    glVertex3f(365.0, 83.0, 25.0);
    glVertex3f(365.0, 83.0, -85.0);
    glVertex3f(365.0, 80.0, -85.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis cover kanan atap 5
    glColor3f(0, 0, 0);
    glVertex3f(365.0, 80.0, 25.0);
    glVertex3f(365.0, 83.0, 25.0);
    glVertex3f(365.0, 83.0, -5.0);
    glVertex3f(365.0, 80.0, -5.0);
    glEnd();

    glBegin(GL_QUADS);//cover belakang atap 5
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(260.0, 80.0, -85.0);
    glVertex3f(260.0, 83.0, -85.0);
    glVertex3f(435.0, 83.0, -85.0);
    glVertex3f(435.0, 80.0, -85.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis cover belakang atap 5
    glColor3f(0, 0, 0);
    glVertex3f(260.0, 80.0, -85.0);
    glVertex3f(260.0, 83.0, -85.0);
    glVertex3f(435.0, 83.0, -85.0);
    glVertex3f(435.0, 80.0, -85.0);
    glEnd();

    glBegin(GL_QUADS);//cover atas atap 5
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(260.0, 83.0, 25.0);
    glVertex3f(260.0, 83.0, -85.0);
    glVertex3f(365.0, 83.0, -85.0);
    glVertex3f(365.0, 83.0, 25.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis cover atas atap 5
    glColor3f(0, 0, 0);
    glVertex3f(260.0, 83.0, 25.0);
    glVertex3f(260.0, 83.0, -85.0);
    glEnd();


}
void gedung_6(void)
{
    glBegin(GL_QUADS);//Tembok depan 6
    glColor3f(0.502f, 0.000f, 0.000);
    glVertex3f(360.0, 0.0, -10.0);
    glVertex3f(360.0, 80.0, -10.0);
    glVertex3f(430.0, 80.0, -10.0);
    glVertex3f(430.0, 0.0, -10.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis Tembok depan 6
    glColor3f(0, 0, 0);
    glVertex3f(360.0, 0.0, -10.0);
    glVertex3f(360.0, 80.0, -10.0);
    glVertex3f(430.0, 80.0, -10.0);
    glVertex3f(430.0, 0.0, -10.0);
    glEnd();

    glBegin(GL_POLYGON);//Pillar depan 1
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(420.0, 0.0, -5.0);
    glVertex3f(420.0, 0.0, -10.0);
    glVertex3f(420.0, 75.0, -10.0);
    glVertex3f(430.0, 75.0, -10.0);
    glVertex3f(430.0, 0.0, -10.0);
    glVertex3f(430.0, 0.0, -5.0);
    glVertex3f(430.0, 70.0, -5.0);
    glVertex3f(420.0, 70.0, -5.0);
    glVertex3f(420.0, 75.0, -10.0);
    glVertex3f(430.0, 75.0, -10.0);
    glVertex3f(430.0, 70.0, -5.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis Pillar depan 1
    glColor3f(0, 0, 0);
    glVertex3f(420.0, 0.0, -5.0);
    glVertex3f(420.0, 0.0, -10.0);
    glVertex3f(420.0, 75.0, -10.0);
    glVertex3f(430.0, 75.0, -10.0);
    glVertex3f(430.0, 0.0, -10.0);
    glVertex3f(430.0, 0.0, -5.0);
    glVertex3f(430.0, 70.0, -5.0);
    glVertex3f(420.0, 70.0, -5.0);
    glVertex3f(420.0, 75.0, -10.0);
    glVertex3f(430.0, 75.0, -10.0);
    glVertex3f(430.0, 70.0, -5.0);
    glEnd();

    glBegin(GL_POLYGON);//Pillar depan 2
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(380.0, 0.0, -5.0);
    glVertex3f(380.0, 0.0, -10.0);
    glVertex3f(380.0, 75.0, -10.0);
    glVertex3f(390.0, 75.0, -10.0);
    glVertex3f(390.0, 0.0, -10.0);
    glVertex3f(390.0, 0.0, -5.0);
    glVertex3f(390.0, 70.0, -5.0);
    glVertex3f(380.0, 70.0, -5.0);
    glVertex3f(380.0, 75.0, -10.0);
    glVertex3f(390.0, 75.0, -10.0);
    glVertex3f(390.0, 70.0, -5.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis Pillar depan 2
    glColor3f(0, 0, 0);
    glVertex3f(380.0, 0.0, -5.0);
    glVertex3f(380.0, 0.0, -10.0);
    glVertex3f(380.0, 75.0, -10.0);
    glVertex3f(390.0, 75.0, -10.0);
    glVertex3f(390.0, 0.0, -10.0);
    glVertex3f(390.0, 0.0, -5.0);
    glVertex3f(390.0, 70.0, -5.0);
    glVertex3f(380.0, 70.0, -5.0);
    glVertex3f(380.0, 75.0, -10.0);
    glVertex3f(390.0, 75.0, -10.0);
    glVertex3f(390.0, 70.0, -5.0);
    glEnd();

    glBegin(GL_QUADS);//Tembok kiri 6
    glColor3f(0.502f, 0.000f, 0.000f);
    glVertex3f(360.0, 0.0, -10.0);
    glVertex3f(360.0, 0.0, -80.0);
    glVertex3f(360.0, 80.0, -80.0);
    glVertex3f(360.0, 80.0, -10.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis Tembok kiri 6
    glColor3f(0, 0, 0);
    glVertex3f(360.0, 0.0, -10.0);
    glVertex3f(360.0, 80.0, -10.0);
    glEnd();

    glBegin(GL_QUADS);//Tembok belakang 6
    glColor3f(0.502f, 0.000f, 0.000f);
    glVertex3f(430.0, 0.0, -80.0);
    glVertex3f(430.0, 80.0, -80.0);
    glVertex3f(360.0, 80.0, -80.0);
    glVertex3f(360.0, 0.0, -80.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis Tembok belakang 6
    glColor3f(0, 0, 0);
    glVertex3f(430.0, 0.0, -80.0);
    glVertex3f(360.0, 0.0, -80.0);

    glEnd();

    glBegin(GL_QUADS);//Tembok kanan 6
    glColor3f(0.502f, 0.000f, 0.000f);
    glVertex3f(430.0, 0.0, -10.0);
    glVertex3f(430.0, 0.0, -80.0);
    glVertex3f(430.0, 80.0, -80.0);
    glVertex3f(430.0, 80.0, -10.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis Tembok kanan 6
    glColor3f(0, 0, 0);
    glVertex3f(430.0, 0.0, -10.0);
    glVertex3f(430.0, 0.0, -80.0);
    glVertex3f(430.0, 80.0, -80.0);
    glVertex3f(430.0, 80.0, -10.0);
    glEnd();

    glBegin(GL_POLYGON);//atap 6
    glColor3f(0.502f, 0.000f, 0.000f);
    glVertex3f(360.0, 80.0, -10.0);
    glVertex3f(360.0, 80.0, -80.0);
    glVertex3f(430.0, 80.0, -80.0);
    glVertex3f(430.0, 80.0, -10.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis atap 6
    glColor3f(0, 0, 0);
    glVertex3f(360.0, 80.0, -10.0);
    glVertex3f(360.0, 80.0, -80.0);
    glVertex3f(430.0, 80.0, -80.0);
    glVertex3f(430.0, 80.0, -10.0);
    glEnd();

    glBegin(GL_QUADS);//cover bawah depan atap 6
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(360.0, 80.0, -10.0);
    glVertex3f(360.0, 80.0, -5.0);
    glVertex3f(435.0, 80.0, -5.0);
    glVertex3f(435.0, 80.0, -10.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis cover bawah depan atap 6
    glColor3f(0, 0, 0);
    glVertex3f(360.0, 80.0, -10.0);
    glVertex3f(360.0, 80.0, -5.0);
    glVertex3f(435.0, 80.0, -5.0);
    glVertex3f(435.0, 80.0, -10.0);
    glEnd();

    glBegin(GL_QUADS);//cover bawah kanan atap 6
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(435.0, 80.0, -5.0);
    glVertex3f(435.0, 80.0, -85.0);
    glVertex3f(435.0, 80.0, -85.0);
    glVertex3f(435.0, 80.0, -5.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis cover bawah kanan atap 6
    glColor3f(0, 0, 0);
    glVertex3f(435.0, 80.0, -5.0);
    glVertex3f(435.0, 80.0, -85.0);
    glVertex3f(435.0, 80.0, -85.0);
    glVertex3f(435.0, 80.0, -5.0);
    glEnd();

    glBegin(GL_QUADS);//cover depan atap 6
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(360.0, 80.0, -5.0);
    glVertex3f(360.0, 83.0, -5.0);
    glVertex3f(435.0, 83.0, -5.0);
    glVertex3f(435.0, 80.0, -5.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis cover depan atap 6
    glColor3f(0, 0, 0);
    glVertex3f(365.0, 80.0, -5.0);
    glVertex3f(365.0, 83.0, -5.0);
    glVertex3f(435.0, 83.0, -5.0);
    glVertex3f(435.0, 80.0, -5.0);
    glEnd();

    glBegin(GL_QUADS);//cover kanan atap 6
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(435.0, 80.0, -5.0);
    glVertex3f(435.0, 83.0, -5.0);
    glVertex3f(435.0, 83.0, -85.0);
    glVertex3f(435.0, 80.0, -85.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis cover kanan atap 6
    glColor3f(0, 0, 0);
    glVertex3f(435.0, 80.0, -5.0);
    glVertex3f(435.0, 83.0, -5.0);
    glVertex3f(435.0, 83.0, -85.0);
    glVertex3f(435.0, 80.0, -85.0);
    glEnd();

    glBegin(GL_QUADS);//cover atas atap 6
    glColor3f(0.627, 0.322, 0.176);
    glVertex3f(360.0, 83.0, -5.0);
    glVertex3f(360.0, 83.0, -85.0);
    glVertex3f(435.0, 83.0, -85.0);
    glVertex3f(435.0, 83.0, -5.0);
    glEnd();

    glBegin(GL_LINE_STRIP);//Garis cover atas atap 6
    glColor3f(0, 0, 0);
    glVertex3f(435.0, 83.0, -85.0);
    glVertex3f(435.0, 83.0, -5.0);
    glEnd();

}

void garis_gedung_utama()
{
    glBegin(GL_LINE_STRIP);//pillar 1
    glColor3f(0, 0, 0);
    glVertex3f(70, 0, 20);
    glVertex3f(70, 180, 20);
    glVertex3f(70, 180, 30);
    glVertex3f(70, 0, 30);

    glVertex3f(70, 0, 30);
    glVertex3f(70, 180, 30);
    glVertex3f(80, 180, 40);
    glVertex3f(80, 0, 40);

    glVertex3f(80, 0, 40);
    glVertex3f(80, 180, 40);
    glVertex3f(90, 180, 40);
    glVertex3f(90, 0, 40);

    glVertex3f(90, 0, 40);
    glVertex3f(90, 180, 40);
    glVertex3f(100, 180, 30);
    glVertex3f(100, 0, 30);

    glVertex3f(100, 0, 30);
    glVertex3f(100, 180, 30);
    glVertex3f(100, 180, 20);
    glVertex3f(100, 0, 20);

    glVertex3f(100, 0, 20);
    glVertex3f(100, 180, 20);
    glVertex3f(90, 180, 10);
    glVertex3f(90, 0, 10);

    glVertex3f(90, 0, 10);
    glVertex3f(90, 180, 10);
    glVertex3f(80, 180, 10);
    glVertex3f(80, 0, 10);

    glVertex3f(80, 0, 10);
    glVertex3f(80, 180, 10);
    glVertex3f(70, 180, 20);
    glVertex3f(70, 0, 20);

    glEnd();

    glBegin(GL_LINE_STRIP);
    //Pillar 2
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(70, 0, -80);
    glVertex3f(70, 180, -80);
    glVertex3f(70, 180, -90);
    glVertex3f(70, 0, -90);

    glVertex3f(70, 0, -90);
    glVertex3f(70, 180, -90);
    glVertex3f(80, 180, -100);
    glVertex3f(80, 0, -100);

    glVertex3f(80, 0, -100);
    glVertex3f(80, 180, -100);
    glVertex3f(90, 180, -100);
    glVertex3f(90, 0, -100);

    glVertex3f(90, 0, -100);
    glVertex3f(90, 180, -100);
    glVertex3f(100, 180, -90);
    glVertex3f(100, 0, -90);

    glVertex3f(100, 0, -90);
    glVertex3f(100, 180, -90);
    glVertex3f(100, 180, -80);
    glVertex3f(100, 0, -80);

    glVertex3f(100, 0, -80);
    glVertex3f(100, 180, -80);
    glVertex3f(90, 180, -70);
    glVertex3f(90, 0, -70);

    glVertex3f(90, 0, -70);
    glVertex3f(90, 180, -70);
    glVertex3f(80, 180, -70);
    glVertex3f(80, 0, -70);

    glVertex3f(80, 0, -70);
    glVertex3f(80, 180, -70);
    glVertex3f(70, 180, -80);
    glVertex3f(70, 0, -80);

    glEnd();

    glBegin(GL_LINE_STRIP);
    //Pillar 3
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(180, 0, -80);
    glVertex3f(180, 180, -80);
    glVertex3f(180, 180, -90);
    glVertex3f(180, 0, -90);

    glVertex3f(180, 0, -90);
    glVertex3f(180, 180, -90);
    glVertex3f(190, 180, -100);
    glVertex3f(190, 0, -100);

    glVertex3f(190, 0, -100);
    glVertex3f(190, 180, -100);
    glVertex3f(200, 180, -100);
    glVertex3f(200, 0, -100);

    glVertex3f(200, 0, -100);
    glVertex3f(200, 180, -100);
    glVertex3f(210, 180, -90);
    glVertex3f(210, 0, -90);

    glVertex3f(210, 0, -90);
    glVertex3f(210, 180, -90);
    glVertex3f(210, 180, -80);
    glVertex3f(210, 0, -80);

    glVertex3f(210, 0, -80);
    glVertex3f(210, 180, -80);
    glVertex3f(200, 180, -70);
    glVertex3f(200, 0, -70);

    glVertex3f(200, 0, -70);
    glVertex3f(200, 180, -70);
    glVertex3f(190, 180, -70);
    glVertex3f(190, 0, -70);

    glVertex3f(190, 0, -70);
    glVertex3f(190, 180, -70);
    glVertex3f(180, 180, -80);
    glVertex3f(180, 0, -80);

    glEnd();

    glBegin(GL_LINE_STRIP);
    //Pillar 4
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(180, 0, 20);
    glVertex3f(180, 180, 20);
    glVertex3f(180, 180, 30);
    glVertex3f(180, 0, 30);

    glVertex3f(180, 0, 30);
    glVertex3f(180, 180, 30);
    glVertex3f(190, 180, 40);
    glVertex3f(190, 0, 40);

    glVertex3f(190, 0, 40);
    glVertex3f(190, 180, 40);
    glVertex3f(200, 180, 40);
    glVertex3f(200, 0, 40);

    glVertex3f(200, 0, 40);
    glVertex3f(200, 180, 40);
    glVertex3f(210, 180, 30);
    glVertex3f(210, 0, 30);

    glVertex3f(210, 0, 30);
    glVertex3f(210, 180, 30);
    glVertex3f(210, 180, 20);
    glVertex3f(210, 0, 20);

    glVertex3f(210, 0, 20);
    glVertex3f(210, 180, 20);
    glVertex3f(200, 180, 10);
    glVertex3f(200, 0, 10);

    glVertex3f(200, 0, 10);
    glVertex3f(200, 180, 10);
    glVertex3f(190, 180, 10);
    glVertex3f(190, 0, 10);

    glVertex3f(190, 0, 10);
    glVertex3f(190, 180, 10);
    glVertex3f(180, 180, 20);
    glVertex3f(180, 0, 20);

    glEnd();

    //tembok kiri
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(70, 0, 20);
    glVertex3f(70, 165, 20);
    glVertex3f(70, 165, -80);
    glVertex3f(70, 0, -80);
    glEnd();



    //tembok belakang
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(100.0, 0.0, -90.0);
    glVertex3f(100.0, 165.0, -90.0);
    glVertex3f(180.0, 165.0, -90.0);
    glVertex3f(180.0, 0.0, -90.0);
    glEnd();



    //Tembok kanan
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(210, 0, 20);
    glVertex3f(210, 165, 20);
    glVertex3f(210, 165, -80);
    glVertex3f(210, 0, -80);
    glEnd();


    //Tembok depan
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(100.0, 0.0, 30.0);
    glVertex3f(100.0, 165.0, 30.0);
    glVertex3f(180.0, 165.0, 30.0);
    glVertex3f(180.0, 0.0, 30.0);
    glEnd();

    //detail tembok depan
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(100.0, 0.0, 30.5);
    glVertex3f(100.0, 115.0, 30.5);
    glVertex3f(180.0, 115.0, 30.5);
    glVertex3f(180.0, 0.0, 30.5);
    glVertex3f(100.0, 0.0, 30.5);
    glVertex3f(100.0, 115.0, 30.5);
    glVertex3f(120.0, 115.0, 40.5);
    glVertex3f(160.0, 115.0, 40.5);
    glVertex3f(180.0, 115.0, 30.5);
    glVertex3f(180.0, 0.0, 30.5);
    glVertex3f(160.0, 0.0, 40.5);
    glVertex3f(120.0, 0.0, 40.5);
    glVertex3f(100.0, 0.0, 30.5);
    glEnd();

    //detail tembok belakang
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(100.0, 0.0, -90.5);
    glVertex3f(100.0, 115.0, -90.5);
    glVertex3f(180.0, 115.0, -90.5);
    glVertex3f(180.0, 0.0, -90.5);
    glVertex3f(100.0, 0.0, -90.5);
    glVertex3f(100.0, 115.0, -90.5);
    glVertex3f(120.0, 115.0, -100.5);
    glVertex3f(160.0, 115.0, -100.5);
    glVertex3f(180.0, 115.0, -90.5);
    glVertex3f(180.0, 0.0, -90.5);
    glVertex3f(160.0, 0.0, -100.5);
    glVertex3f(120.0, 0.0, -100.5);
    glVertex3f(100.0, 0.0, -90.5);
    glEnd();

}
void garis_tambahan_gedung_utama()
{
    //TEMBOK DEPAN
    // Garis 1 belakang
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(129, 115., 30.7);
    glVertex3f(129, 175, 30.7);
    glVertex3f(134, 175, 30.7);
    glVertex3f(134, 115, 30.7);
    glEnd();

    // Garis 1 kiri
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(129, 115, 30.7);
    glVertex3f(129, 175, 30.7);
    glVertex3f(129, 175, 33.7);
    glVertex3f(129, 115, 33.7);
    glEnd();

    // Garis 1 depan
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(129, 115, 33.7);
    glVertex3f(129, 175, 33.7);
    glVertex3f(134, 175, 33.7);
    glVertex3f(134, 115, 33.7);
    glEnd();

    // Garis 1 kanan
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(134, 115, 30.7);
    glVertex3f(134, 175, 30.7);
    glVertex3f(134, 175, 33.7);
    glVertex3f(134, 115, 33.7);
    glEnd();

    // Garis 2 belakang
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(139, 115, 30.7);
    glVertex3f(139, 175, 30.7);
    glVertex3f(144, 175, 30.7);
    glVertex3f(144, 115, 30.7);
    glEnd();

    // Garis 2 kiri
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(139, 115, 30.7);
    glVertex3f(139, 175, 30.7);
    glVertex3f(139, 175, 33.7);
    glVertex3f(139, 115, 33.7);
    glEnd();

    // Garis 2 depan
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(139, 115, 33.7);
    glVertex3f(139, 175, 33.7);
    glVertex3f(144, 175, 33.7);
    glVertex3f(144, 115, 33.7);
    glEnd();

    // Garis 2 kanan
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(144, 115, 30.7);
    glVertex3f(144, 175, 30.7);
    glVertex3f(144, 175, 33.7);
    glVertex3f(144, 115, 33.7);
    glEnd();


    // Garis 3 belakang
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(149, 115, 30.7);
    glVertex3f(149, 175, 30.7);
    glVertex3f(154, 175, 30.7);
    glVertex3f(154, 115, 30.7);
    glEnd();

    // Garis 3 kiri
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(149, 115, 30.7);
    glVertex3f(149, 175, 30.7);
    glVertex3f(149, 175, 33.7);
    glVertex3f(149, 115, 33.7);
    glEnd();

    // Garis 3 depan
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(149, 115, 33.7);
    glVertex3f(149, 175, 33.7);
    glVertex3f(154, 175, 33.7);
    glVertex3f(154, 115, 33.7);
    glEnd();

    // Garis 3 kanan
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(154, 115, 30.7);
    glVertex3f(154, 175, 30.7);
    glVertex3f(154, 175, 33.7);
    glVertex3f(154, 115, 33.7);
    glEnd();

    //TEMBOK KIRI
     // Garis 1 belakang
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(69, 115, -44);
    glVertex3f(69, 175, -44);
    glVertex3f(69, 175, -38);
    glVertex3f(69, 115, -38);
    glEnd();

    // Garis 1 kiri
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(69, 115., -44);
    glVertex3f(69, 175, -44);
    glVertex3f(66, 175, -44);
    glVertex3f(66, 115, -44);
    glEnd();

    // Garis 1 depan
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(66, 115, -44);
    glVertex3f(66, 175, -44);
    glVertex3f(66, 175, -38);
    glVertex3f(66, 115, -38);
    glEnd();

    // Garis 1 kanan
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(69, 115., -38);
    glVertex3f(69, 175, -38);
    glVertex3f(66, 175, -38);
    glVertex3f(66, 115, -38);
    glEnd();


    // Garis 2 belakang
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(69, 115, -33.7);
    glVertex3f(69, 175, -33.7);
    glVertex3f(69, 175, -27.7);
    glVertex3f(69, 115, -27.7);
    glEnd();

    // Garis 2 kiri
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(69, 115, -33.7);
    glVertex3f(69, 175, -33.7);
    glVertex3f(66, 175, -33.7);
    glVertex3f(66, 115, -33.7);
    glEnd();

    // Garis 2 depan
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(66, 115, -33.7);
    glVertex3f(66, 175, -33.7);
    glVertex3f(66, 175, -27.7);
    glVertex3f(66, 115, -27.7);
    glEnd();

    // Garis 2 kanan
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(69, 115, -27.7);
    glVertex3f(69, 175, -27.7);
    glVertex3f(66, 175, -27.7);
    glVertex3f(66, 115, -27.7);
    glEnd();


    // Garis 3 belakang
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(69, 115, -23);
    glVertex3f(69, 175, -23);
    glVertex3f(69, 175, -17);
    glVertex3f(69, 115, -17);
    glEnd();

    // Garis 3 kiri
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(69, 115., -23);
    glVertex3f(69, 175, -23);
    glVertex3f(66, 175, -23);
    glVertex3f(66, 115, -23);
    glEnd();

    // Garis 3 depan
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(66, 115, -23);
    glVertex3f(66, 175, -23);
    glVertex3f(66, 175, -17);
    glVertex3f(66, 115, -17);
    glEnd();

    // Garis 3 kanan
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(69, 115., -17);
    glVertex3f(69, 175, -17);
    glVertex3f(66, 175, -17);
    glVertex3f(66, 115, -17);
    glEnd();


    //TEMBOK KANAN
    // Garis 1 belakang
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(211, 115, -44);
    glVertex3f(211, 175, -44);
    glVertex3f(211, 175, -38);
    glVertex3f(211, 115, -38);
    glEnd();

    // Garis 1 kiri
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(211, 115., -44);
    glVertex3f(211, 175, -44);
    glVertex3f(214, 175, -44);
    glVertex3f(214, 115, -44);
    glEnd();

    // Garis 1 depan
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(214, 115, -44);
    glVertex3f(214, 175, -44);
    glVertex3f(214, 175, -38);
    glVertex3f(214, 115, -38);
    glEnd();

    // Garis 1 kanan
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(211, 115., -38);
    glVertex3f(211, 175, -38);
    glVertex3f(214, 175, -38);
    glVertex3f(214, 115, -38);
    glEnd();


    // Garis 2 belakang
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(211, 115, -33.7);
    glVertex3f(211, 175, -33.7);
    glVertex3f(211, 175, -27.7);
    glVertex3f(211, 115, -27.7);
    glEnd();

    // Garis 2 kiri
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(211, 115, -33.7);
    glVertex3f(211, 175, -33.7);
    glVertex3f(214, 175, -33.7);
    glVertex3f(214, 115, -33.7);
    glEnd();

    // Garis 2 depan
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(214, 115, -33.7);
    glVertex3f(214, 175, -33.7);
    glVertex3f(214, 175, -27.7);
    glVertex3f(214, 115, -27.7);
    glEnd();

    // Garis 2 kanan
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(211, 115, -27.7);
    glVertex3f(214, 175, -27.7);
    glVertex3f(214, 175, -27.7);
    glVertex3f(214, 115, -27.7);
    glEnd();


    // Garis 3 belakang
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(211, 115, -23);
    glVertex3f(211, 175, -23);
    glVertex3f(211, 175, -17);
    glVertex3f(211, 115, -17);
    glEnd();

    // Garis 3 kiri
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(211, 115., -23);
    glVertex3f(211, 175, -23);
    glVertex3f(214, 175, -23);
    glVertex3f(214, 115, -23);
    glEnd();

    // Garis 3 depan
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(214, 115, -23);
    glVertex3f(214, 175, -23);
    glVertex3f(214, 175, -17);
    glVertex3f(214, 115, -17);
    glEnd();

    // Garis 3 kanan
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(211, 115., -17);
    glVertex3f(211, 175, -17);
    glVertex3f(214, 175, -17);
    glVertex3f(214, 115, -17);
    glEnd();


    //TEMBOK BELAKANG
     // Garis 1 belakang
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(129, 115., -91);
    glVertex3f(129, 175, -91);
    glVertex3f(134, 175, -91);
    glVertex3f(134, 115, -91);
    glEnd();

    // Garis 1 kiri
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(129, 115, -91);
    glVertex3f(129, 175, -91);
    glVertex3f(129, 175, -94);
    glVertex3f(129, 115, -94);
    glEnd();

    // Garis 1 depan
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(129, 115, -94);
    glVertex3f(129, 175, -94);
    glVertex3f(134, 175, -94);
    glVertex3f(134, 115, -94);
    glEnd();

    // Garis 1 kanan
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(134, 115, -91);
    glVertex3f(134, 175, -91);
    glVertex3f(134, 175, -94);
    glVertex3f(134, 115, -94);
    glEnd();


    // Garis 2 belakang
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(139, 115, -91);
    glVertex3f(139, 175, -91);
    glVertex3f(144, 175, -91);
    glVertex3f(144, 115, -91);
    glEnd();

    // Garis 2 kiri
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(139, 115, -91);
    glVertex3f(139, 175, -91);
    glVertex3f(139, 175, -94);
    glVertex3f(139, 115, -94);
    glEnd();

    // Garis 2 depan
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(139, 115, -94);
    glVertex3f(139, 175, -94);
    glVertex3f(144, 175, -94);
    glVertex3f(144, 115, -94);
    glEnd();

    // Garis 2 kanan
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(144, 115, -91);
    glVertex3f(144, 175, -91);
    glVertex3f(144, 175, -94);
    glVertex3f(144, 115, -94);
    glEnd();


    // Garis 3 belakang
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(149, 115, -91);
    glVertex3f(149, 175, -91);
    glVertex3f(154, 175, -91);
    glVertex3f(154, 115, -91);
    glEnd();

    // Garis 3 kiri
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(149, 115, -91);
    glVertex3f(149, 175, -91);
    glVertex3f(149, 175, -94);
    glVertex3f(149, 115, -94);
    glEnd();

    // Garis 3 depan
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(149, 115, -94);
    glVertex3f(149, 175, -94);
    glVertex3f(154, 175, -94);
    glVertex3f(154, 115, -94);
    glEnd();

    // Garis 3 kanan
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(154, 115, -91);
    glVertex3f(154, 175, -91);
    glVertex3f(154, 175, -94);
    glVertex3f(154, 115, -94);
    glEnd();
}
void jendela()
{
    glBegin(GL_QUADS);//jendela gedung1 atas
    glColor3f(0.94,0.87,0.80);
    for ( i = 0 ; i < 3 ; i++ ){
    glVertex3f(-138.0 + (i*10), 40.0, -9.3);
    glVertex3f(-138.0 + (i*10), 65.0, -9.3);
    glVertex3f(-133.0 + (i*10), 65.0, -9.3);
    glVertex3f(-133.0 + (i*10), 40.0, -9.3);
    }
    glEnd();

    glBegin(GL_QUADS);//jendela gedung1 bawah
    glColor3f(0.94,0.87,0.80);
    for ( i = 0 ; i < 3 ; i++ ){
    glVertex3f(-138.0 + (i*10), 10.0, -9.3);
    glVertex3f(-138.0 + (i*10), 35.0, -9.3);
    glVertex3f(-133.0 + (i*10), 35.0, -9.3);
    glVertex3f(-133.0 + (i*10), 10.0, -9.3);
    }
    glEnd();

    glBegin(GL_QUADS);//jendela gedung1 atas kanan
    glColor3f(0.94,0.87,0.80);
    for ( i = 0 ; i < 2 ; i++ ){
    glVertex3f(-98.0 + (i*10), 40.0, -9.3);
    glVertex3f(-98.0 + (i*10), 65.0, -9.3);
    glVertex3f(-93.0 + (i*10), 65.0, -9.3);
    glVertex3f(-93.0 + (i*10), 40.0, -9.3);
    }
    glEnd();

    glBegin(GL_QUADS);//jendela gedung1 bawah kanan
    glColor3f(0.94,0.87,0.80);
    for ( i = 0 ; i < 2 ; i++ ){
    glVertex3f(-98.0 + (i*10), 10.0, -9.3);
    glVertex3f(-98.0 + (i*10), 35.0, -9.3);
    glVertex3f(-93.0 + (i*10), 35.0, -9.3);
    glVertex3f(-93.0 + (i*10), 10.0, -9.3);
    }
    glEnd();

    glBegin(GL_QUADS);//jendela gedung2 atas kiri
    glColor3f(0.94,0.87,0.80);
    for ( i = 0 ; i < 2 ; i++ ){
    glVertex3f(-63.0 + (i*10), 34.0, 20.7);
    glVertex3f(-63.0 + (i*10), 65.0, 20.7);
    glVertex3f(-58.0 + (i*10), 65.0, 20.7);
    glVertex3f(-58.0 + (i*10), 34.0, 20.7);
    }
    glEnd();

    glBegin(GL_QUADS);//jendela gedung2 atas kiri pjg
    glColor3f(0.94,0.87,0.80);
    glVertex3f(-43.0 , 30.0, 20.7);
    glVertex3f(-43.0 , 65.0, 20.7);
    glVertex3f(-38.0 , 65.0, 20.7);
    glVertex3f(-38.0 , 30.0, 20.7);
    glEnd();

    glBegin(GL_QUADS);//jendela gedung2 bawah kiri
    glColor3f(0.94,0.87,0.80);
    for ( i = 0 ; i < 2 ; i++ ){
    glVertex3f(-63.0 + (i*10), 10.0, 20.7);
    glVertex3f(-63.0 + (i*10), 23.0, 20.7);
    glVertex3f(-58.0 + (i*10), 23.0, 20.7);
    glVertex3f(-58.0 + (i*10), 10.0, 20.7);
    }
    glEnd();

    glBegin(GL_QUADS);//jendela gedung2 kanan
    glColor3f(0.94,0.87,0.80);
    for ( i = 0 ; i < 3 ; i++ ){
    glVertex3f(-13.0 + (i*10), 25.0 - (i*5), 20.7);
    glVertex3f(-13.0 + (i*10), 65.0 , 20.7);
    glVertex3f(-8.0  + (i*10), 65.0 , 20.7);
    glVertex3f(-8.0  + (i*10), 25.0 - (i*5), 20.7);
    }
    glEnd();

    glBegin(GL_QUADS);//jendela gedung3 atas
    glColor3f(0.94,0.87,0.80);
    for ( i = 0 ; i < 3 ; i++ ){
    glVertex3f(37.0 + (i*10), 70.0, 20.7);
    glVertex3f(37.0 + (i*10), 95.0, 20.7);
    glVertex3f(42.0 + (i*10), 95.0, 20.7);
    glVertex3f(42.0 + (i*10), 70.0, 20.7);
    }
    glEnd();

    glBegin(GL_QUADS);//jendela gedung3 tengah
    glColor3f(0.94,0.87,0.80);
    for ( i = 0 ; i < 3 ; i++ ){
    glVertex3f(37.0 + (i*10), 40.0, 20.7);
    glVertex3f(37.0 + (i*10), 65.0, 20.7);
    glVertex3f(42.0 + (i*10), 65.0, 20.7);
    glVertex3f(42.0 + (i*10), 40.0, 20.7);
    }
    glEnd();

    glBegin(GL_QUADS);//jendela gedung3 bawah
    glColor3f(0.94,0.87,0.80);
    for ( i = 0 ; i < 3 ; i++ ){
    glVertex3f(37.0 + (i*10), 10.0, 20.7);
    glVertex3f(37.0 + (i*10), 35.0, 20.7);
    glVertex3f(42.0 + (i*10), 35.0, 20.7);
    glVertex3f(42.0 + (i*10), 10.0, 20.7);
    }
    glEnd();

    glBegin(GL_QUADS);//jendela gedung utama tengah
    glColor3f(0.94,0.87,0.80);
    for ( i = 0 ; i < 3 ; i++ ){
    glVertex3f(129.0 + (i*10), 85.0, 40.7);
    glVertex3f(129.0 + (i*10), 110.0, 40.7);
    glVertex3f(134.0 + (i*10), 110.0, 40.7);
    glVertex3f(134.0 + (i*10), 85.0, 40.7);
    }
    glEnd();

    glBegin(GL_QUADS);//jendela gedung utama atas
    glColor3f(0.94,0.87,0.80);
    for ( i = 0 ; i < 2 ; i++ ){
    glVertex3f(134.0 + (i*10), 120.0, 30.7);
    glVertex3f(134.0 + (i*10), 160.0, 30.7);
    glVertex3f(139.0 + (i*10), 160.0, 30.7);
    glVertex3f(139.0 + (i*10), 120.0, 30.7);
    }
    glEnd();

     glBegin(GL_QUADS);//jendela gedung4 atas
    glColor3f(0.94,0.87,0.80);
    for ( i = 0 ; i < 3 ; i++ ){
    glVertex3f(217.0 + (i*10), 70.0, 20.7);
    glVertex3f(217.0 + (i*10), 95.0, 20.7);
    glVertex3f(222.0 + (i*10), 95.0, 20.7);
    glVertex3f(222.0 + (i*10), 70.0, 20.7);
    }
    glEnd();

    glBegin(GL_QUADS);//jendela gedung4 tengah
    glColor3f(0.94,0.87,0.80);
    for ( i = 0 ; i < 3 ; i++ ){
    glVertex3f(217.0 + (i*10), 40.0, 20.7);
    glVertex3f(217.0 + (i*10), 65.0, 20.7);
    glVertex3f(222.0 + (i*10), 65.0, 20.7);
    glVertex3f(222.0 + (i*10), 40.0, 20.7);
    }
    glEnd();

    glBegin(GL_QUADS);//jendela gedung4 bawah
    glColor3f(0.94,0.87,0.80);
    for ( i = 0 ; i < 3 ; i++ ){
    glVertex3f(217.0 + (i*10), 10.0, 20.7);
    glVertex3f(217.0 + (i*10), 35.0, 20.7);
    glVertex3f(222.0 + (i*10), 35.0, 20.7);
    glVertex3f(222.0 + (i*10), 10.0, 20.7);
    }
    glEnd();

    glBegin(GL_QUADS);//jendela gedung5 atas kiri
    glColor3f(0.94,0.87,0.80);
    for ( i = 0 ; i < 2 ; i++ ){
    glVertex3f(327.0 + (i*10), 34.0, 20.7);
    glVertex3f(327.0 + (i*10), 65.0, 20.7);
    glVertex3f(332.0 + (i*10), 65.0, 20.7);
    glVertex3f(332.0 + (i*10), 34.0, 20.7);
    }
    glEnd();

    glBegin(GL_QUADS);//jendela gedung5 atas kiri pjg
    glColor3f(0.94,0.87,0.80);
    glVertex3f(317.0 , 30.0, 20.7);
    glVertex3f(317.0 , 65.0, 20.7);
    glVertex3f(322.0 , 65.0, 20.7);
    glVertex3f(322.0 , 30.0, 20.7);
    glEnd();

    glBegin(GL_QUADS);//jendela gedung5 bawah kiri
    glColor3f(0.94,0.87,0.80);
    for ( i = 0 ; i < 2 ; i++ ){
    glVertex3f(327.0 + (i*10), 10.0, 20.7);
    glVertex3f(327.0 + (i*10), 23.0, 20.7);
    glVertex3f(332.0 + (i*10), 23.0, 20.7);
    glVertex3f(332.0 + (i*10), 10.0, 20.7);
    }
    glEnd();

    glBegin(GL_QUADS);//jendela gedung5 kanan
    glColor3f(0.94,0.87,0.80);
    for ( i = 0 ; i < 3 ; i++ ){
    glVertex3f(268.0 + (i*10), 15.0 + (i*5), 20.7);
    glVertex3f(268.0 + (i*10), 65.0 , 20.7);
    glVertex3f(273.0 + (i*10), 65.0 , 20.7);
    glVertex3f(273.0 + (i*10), 15.0 + (i*5), 20.7);
    }
    glEnd();

    glBegin(GL_QUADS);//jendela gedung6 atas
    glColor3f(0.94,0.87,0.80);
    for ( i = 0 ; i < 3 ; i++ ){
    glVertex3f(393.0 + (i*10), 40.0, -9.3);
    glVertex3f(393.0 + (i*10), 65.0, -9.3);
    glVertex3f(398.0 + (i*10), 65.0, -9.3);
    glVertex3f(398.0 + (i*10), 40.0, -9.3);
    }
    glEnd();

    glBegin(GL_QUADS);//jendela gedung6 bawah
    glColor3f(0.94,0.87,0.80);
    for ( i = 0 ; i < 3 ; i++ ){
    glVertex3f(393.0 + (i*10), 10.0, -9.3);
    glVertex3f(393.0 + (i*10), 35.0, -9.3);
    glVertex3f(398.0 + (i*10), 35.0, -9.3);
    glVertex3f(398.0 + (i*10), 10.0, -9.3);
    }
    glEnd();

    glBegin(GL_QUADS);//jendela gedung6 atas kanan
    glColor3f(0.94,0.87,0.80);
    for ( i = 0 ; i < 2 ; i++ ){
    glVertex3f(363.0 + (i*10), 40.0, -9.3);
    glVertex3f(363.0 + (i*10), 65.0, -9.3);
    glVertex3f(368.0 + (i*10), 65.0, -9.3);
    glVertex3f(368.0 + (i*10), 40.0, -9.3);
    }
    glEnd();

    glBegin(GL_QUADS);//jendela gedung6 bawah kanan
    glColor3f(0.94,0.87,0.80);
    for ( i = 0 ; i < 2 ; i++ ){
    glVertex3f(363.0 + (i*10), 10.0, -9.3);
    glVertex3f(363.0 + (i*10), 35.0, -9.3);
    glVertex3f(368.0 + (i*10), 35.0, -9.3);
    glVertex3f(368.0 + (i*10), 10.0, -9.3);
    }
    glEnd();
}
void jendela_samping()
{
    glBegin(GL_QUADS);//jendela gedung utama atas kiri
    glColor3f(0.94,0.87,0.80);
    for ( i = 0 ; i < 2 ; i++ ){
    glVertex3f(69.7 , 120.0, -33 + (i*10));
    glVertex3f(69.7 , 160.0, -33 + (i*10));
    glVertex3f(69.7 , 160.0, -38 + (i*10));
    glVertex3f(69.7 , 120.0, -38 + (i*10));
    }
    glEnd();

    glBegin(GL_QUADS);//jendela gedung utama atas kanan
    glColor3f(0.94,0.87,0.80);
    for ( i = 0 ; i < 2 ; i++ ){
    glVertex3f(210.7 , 120.0, -33 + (i*10));
    glVertex3f(210.7 , 160.0, -33 + (i*10));
    glVertex3f(210.7 , 160.0, -38 + (i*10));
    glVertex3f(210.7 , 120.0, -38 + (i*10));
    }
    glEnd();
}
void jendela_blkng()
{
    glBegin(GL_QUADS);//jendela gedung1 atas
    glColor3f(0.94,0.87,0.80);
    for ( i = 0 ; i < 8 ; i++ ){
    glVertex3f(-138.0 + (i*20), 40.0, -80.7);
    glVertex3f(-138.0 + (i*20), 65.0, -80.7);
    glVertex3f(-133.0 + (i*20), 65.0, -80.7);
    glVertex3f(-133.0 + (i*20), 40.0, -80.7);
    }
    glEnd();

    glBegin(GL_QUADS);//jendela gedung1 bawah
    glColor3f(0.94,0.87,0.80);
    for ( i = 0 ; i < 8 ; i++ ){
    glVertex3f(-138.0 + (i*20), 10.0, -80.7);
    glVertex3f(-138.0 + (i*20), 35.0, -80.7);
    glVertex3f(-133.0 + (i*20), 35.0, -80.7);
    glVertex3f(-133.0 + (i*20), 10.0, -80.7);
    }
    glEnd();

    glBegin(GL_QUADS);//jendela gedung3 atas
    glColor3f(0.94,0.87,0.80);
    for ( i = 0 ; i < 3 ; i++ ){
    glVertex3f(33.0 + (i*10), 70.0, -80.7);
    glVertex3f(33.0 + (i*10), 95.0, -80.7);
    glVertex3f(38.0 + (i*10), 95.0, -80.7);
    glVertex3f(38.0 + (i*10), 70.0, -80.7);
    }
    glEnd();

    glBegin(GL_QUADS);//jendela gedung3 tengah
    glColor3f(0.94,0.87,0.80);
    for ( i = 0 ; i < 3 ; i++ ){
    glVertex3f(33.0 + (i*10), 40.0, -80.7);
    glVertex3f(33.0 + (i*10), 65.0, -80.7);
    glVertex3f(38.0 + (i*10), 65.0, -80.7);
    glVertex3f(38.0 + (i*10), 40.0, -80.7);
    }
    glEnd();

    glBegin(GL_QUADS);//jendela gedung3 bawah
    glColor3f(0.94,0.87,0.80);
    for ( i = 0 ; i < 3 ; i++ ){
    glVertex3f(33.0 + (i*10), 10.0, -80.7);
    glVertex3f(33.0 + (i*10), 35.0, -80.7);
    glVertex3f(38.0 + (i*10), 35.0, -80.7);
    glVertex3f(38.0 + (i*10), 10.0, -80.7);
    }
    glEnd();

    glBegin(GL_QUADS);//jendela gedung utama tengah
    glColor3f(0.94,0.87,0.80);
    for ( i = 0 ; i < 3 ; i++ ){
    glVertex3f(129.0 + (i*10), 85.0, -100.3);
    glVertex3f(129.0 + (i*10), 110.0,-100.3);
    glVertex3f(134.0 + (i*10), 110.0,-100.3);
    glVertex3f(134.0 + (i*10), 85.0, -100.3);
    }
    glEnd();

    glBegin(GL_QUADS);//jendela gedung utama atas
    glColor3f(0.94,0.87,0.80);
    for ( i = 0 ; i < 2 ; i++ ){
    glVertex3f(134.0 + (i*10), 120.0, -90.5);
    glVertex3f(134.0 + (i*10), 160.0, -90.5);
    glVertex3f(139.0 + (i*10), 160.0, -90.5);
    glVertex3f(139.0 + (i*10), 120.0, -90.5);
    }
    glEnd();

    glBegin(GL_QUADS);//jendela gedung4 atas
    glColor3f(0.94,0.87,0.80);
    for ( i = 0 ; i < 3 ; i++ ){
    glVertex3f(223.0 + (i*10), 70.0, -80.7);
    glVertex3f(223.0 + (i*10), 95.0, -80.7);
    glVertex3f(228.0 + (i*10), 95.0, -80.7);
    glVertex3f(228.0 + (i*10), 70.0, -80.7);
    }
    glEnd();

    glBegin(GL_QUADS);//jendela gedung4 tengah
    glColor3f(0.94,0.87,0.80);
    for ( i = 0 ; i < 3 ; i++ ){
    glVertex3f(223.0 + (i*10), 40.0, -80.7);
    glVertex3f(223.0 + (i*10), 65.0, -80.7);
    glVertex3f(228.0 + (i*10), 65.0, -80.7);
    glVertex3f(228.0 + (i*10), 40.0, -80.7);
    }
    glEnd();

    glBegin(GL_QUADS);//jendela gedung4 bawah
    glColor3f(0.94,0.87,0.80);
    for ( i = 0 ; i < 3 ; i++ ){
    glVertex3f(223.0 + (i*10), 10.0, -80.7);
    glVertex3f(223.0 + (i*10), 35.0, -80.7);
    glVertex3f(228.0 + (i*10), 35.0, -80.7);
    glVertex3f(228.0 + (i*10), 10.0, -80.7);
    }
    glEnd();

    glBegin(GL_QUADS);//jendela gedung6 atas
    glColor3f(0.94,0.87,0.80);
    for ( i = 0 ; i < 8 ; i++ ){
    glVertex3f(272.0 + (i*20), 40.0, -80.7);
    glVertex3f(272.0 + (i*20), 65.0, -80.7);
    glVertex3f(277.0 + (i*20), 65.0, -80.7);
    glVertex3f(277.0 + (i*20), 40.0, -80.7);
    }
    glEnd();

    glBegin(GL_QUADS);//jendela gedung6 bawah
    glColor3f(0.94,0.87,0.80);
    for ( i = 0 ; i < 8 ; i++ ){
    glVertex3f(272.0 + (i*20), 10.0, -80.7);
    glVertex3f(272.0 + (i*20), 35.0, -80.7);
    glVertex3f(277.0 + (i*20), 35.0, -80.7);
    glVertex3f(277.0 + (i*20), 10.0, -80.7);
    }
    glEnd();
}
void bingkaijendela_1()
{
    //bingkai jendela gedung1 atas
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(-138.0 , 40.0, -9.3);
    glVertex3f(-138.0 , 65.0, -9.3);
    glVertex3f(-133.0 , 65.0, -9.3);
    glVertex3f(-133.0 , 40.0, -9.3);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(-128.0 , 40.0, -9.3);
    glVertex3f(-128.0 , 65.0, -9.3);
    glVertex3f(-123.0 , 65.0, -9.3);
    glVertex3f(-123.0 , 40.0, -9.3);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(-118.0 , 40.0, -9.3);
    glVertex3f(-118.0 , 65.0, -9.3);
    glVertex3f(-113.0 , 65.0, -9.3);
    glVertex3f(-113.0 , 40.0, -9.3);
    glEnd();

    //bingkai jendela gedung1 bawah
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(-138.0 , 10.0, -9.3);
    glVertex3f(-138.0 , 35.0, -9.3);
    glVertex3f(-133.0 , 35.0, -9.3);
    glVertex3f(-133.0 , 10.0, -9.3);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(-128.0 , 10.0, -9.3);
    glVertex3f(-128.0 , 35.0, -9.3);
    glVertex3f(-123.0 , 35.0, -9.3);
    glVertex3f(-123.0 , 10.0, -9.3);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(-118.0 , 10.0, -9.3);
    glVertex3f(-118.0 , 35.0, -9.3);
    glVertex3f(-113.0  , 35.0, -9.3);
    glVertex3f(-113.0  , 10.0, -9.3);
    glEnd();
    //bingkai jendela gedung1 atas 2
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(-98.0 , 40.0, -9.3);
    glVertex3f(-98.0 , 65.0, -9.3);
    glVertex3f(-93.0 , 65.0, -9.3);
    glVertex3f(-93.0 , 40.0, -9.3);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(-88.0 , 40.0, -9.3);
    glVertex3f(-88.0 , 65.0, -9.3);
    glVertex3f(-83.0 , 65.0, -9.3);
    glVertex3f(-83.0 , 40.0, -9.3);
    glEnd();
    //bingkai jendela gedung1 bawah 2
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(-98.0 , 10.0, -9.3);
    glVertex3f(-98.0 , 35.0, -9.3);
    glVertex3f(-93.0 , 35.0, -9.3);
    glVertex3f(-93.0 , 10.0, -9.3);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(-88.0 , 10.0, -9.3);
    glVertex3f(-88.0 , 35.0, -9.3);
    glVertex3f(-83.0 , 35.0, -9.3);
    glVertex3f(-83.0 , 10.0, -9.3);
    glEnd();
}
void bingkaijendela_2()
{
    //bingkai atas 2
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(-63.0 , 34.0, 20.7);
    glVertex3f(-63.0 , 65.0, 20.7);
    glVertex3f(-58.0 , 65.0, 20.7);
    glVertex3f(-58.0 , 34.0, 20.7);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(-53.0 , 34.0, 20.7);
    glVertex3f(-53.0 , 65.0, 20.7);
    glVertex3f(-48.0 , 65.0, 20.7);
    glVertex3f(-48.0 , 34.0, 20.7);
    glEnd();
    //bingkai atas pjg
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(-43.0 , 30.0, 20.7);
    glVertex3f(-43.0 , 65.0, 20.7);
    glVertex3f(-38.0 , 65.0, 20.7);
    glVertex3f(-38.0 , 30.0, 20.7);
    glEnd();
    //bingkai bawah
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(-63.0 , 10.0, 20.7);
    glVertex3f(-63.0 , 23.0, 20.7);
    glVertex3f(-58.0 , 23.0, 20.7);
    glVertex3f(-58.0 , 10.0, 20.7);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(-53.0 , 10.0, 20.7);
    glVertex3f(-53.0 , 23.0, 20.7);
    glVertex3f(-48.0 , 23.0, 20.7);
    glVertex3f(-48.0 , 10.0, 20.7);
    glEnd();
    //bingkai kanan
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(-13.0 , 25.0 , 20.7);
    glVertex3f(-13.0 , 65.0 , 20.7);
    glVertex3f(-8.0  , 65.0 , 20.7);
    glVertex3f(-8.0  , 25.0 , 20.7);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(-3.0 , 20.0 , 20.7);
    glVertex3f(-3.0 , 65.0 , 20.7);
    glVertex3f(2.0 , 65.0 , 20.7);
    glVertex3f(2.0 , 20.0 , 20.7);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(7.0 , 15.0 , 20.7);
    glVertex3f(7.0 , 65.0 , 20.7);
    glVertex3f(12.0 , 65.0 , 20.7);
    glVertex3f(12.0 , 15.0 , 20.7);
    glEnd();
}
void bingkaijendela_3()
{
    //bingkai atas
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(37.0 , 70.0, 20.7);
    glVertex3f(37.0 , 95.0, 20.7);
    glVertex3f(42.0 , 95.0, 20.7);
    glVertex3f(42.0 , 70.0, 20.7);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(47.0 , 70.0, 20.7);
    glVertex3f(47.0 , 95.0, 20.7);
    glVertex3f(52.0 , 95.0, 20.7);
    glVertex3f(52.0 , 70.0, 20.7);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(57.0 , 70.0, 20.7);
    glVertex3f(57.0 , 95.0, 20.7);
    glVertex3f(62.0 , 95.0, 20.7);
    glVertex3f(62.0 , 70.0, 20.7);
    glEnd();
    //bingkai tengah
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(37.0 , 40.0, 20.7);
    glVertex3f(37.0 , 65.0, 20.7);
    glVertex3f(42.0 , 65.0, 20.7);
    glVertex3f(42.0 , 40.0, 20.7);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(47.0 , 40.0, 20.7);
    glVertex3f(47.0 , 65.0, 20.7);
    glVertex3f(52.0 , 65.0, 20.7);
    glVertex3f(52.0 , 40.0, 20.7);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(57.0 , 40.0, 20.7);
    glVertex3f(57.0 , 65.0, 20.7);
    glVertex3f(62.0 , 65.0, 20.7);
    glVertex3f(62.0 , 40.0, 20.7);
    glEnd();
    //bingkai bawah
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(37.0 , 10.0, 21);
    glVertex3f(37.0 , 35.0, 21);
    glVertex3f(42.0 , 35.0, 21);
    glVertex3f(42.0 , 10.0, 21);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(47.0 , 10.0, 21);
    glVertex3f(47.0 , 35.0, 21);
    glVertex3f(52.0 , 35.0, 21);
    glVertex3f(52.0 , 10.0, 21);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(57.0 , 10.0, 21);
    glVertex3f(57.0 , 35.0, 21);
    glVertex3f(62.0 , 35.0, 21);
    glVertex3f(62.0 , 10.0, 21);
    glEnd();
}
void bingkaijendela_utama()
{
    //bingkai tengah
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(129.0 , 85.0, 40.7);
    glVertex3f(129.0 , 110.0, 40.7);
    glVertex3f(134.0 , 110.0, 40.7);
    glVertex3f(134.0 , 85.0, 40.7);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(139.0 , 85.0, 40.7);
    glVertex3f(139.0 , 110.0, 40.7);
    glVertex3f(144.0 , 110.0, 40.7);
    glVertex3f(144.0 , 85.0, 40.7);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(149.0 , 85.0, 40.7);
    glVertex3f(149.0 , 110.0, 40.7);
    glVertex3f(154.0 , 110.0, 40.7);
    glVertex3f(154.0 , 85.0, 40.7);
    glEnd();
    //bingkai atas depan
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(134.0 , 120.0, 30.7);
    glVertex3f(134.0 , 160.0, 30.7);
    glVertex3f(139.0 , 160.0, 30.7);
    glVertex3f(139.0 , 120.0, 30.7);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(144.0 , 120.0, 30.7);
    glVertex3f(144.0 , 160.0, 30.7);
    glVertex3f(149.0 , 160.0, 30.7);
    glVertex3f(149.0 , 120.0, 30.7);
    glEnd();
}
void bingkaijendela_4()
{
    //bingkai atas
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(217.0 , 70.0, 20.7);
    glVertex3f(217.0 , 95.0, 20.7);
    glVertex3f(222.0 , 95.0, 20.7);
    glVertex3f(222.0 , 70.0, 20.7);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(227.0 , 70.0, 20.7);
    glVertex3f(227.0 , 95.0, 20.7);
    glVertex3f(232.0 , 95.0, 20.7);
    glVertex3f(232.0 , 70.0, 20.7);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(237.0 , 70.0, 20.7);
    glVertex3f(237.0 , 95.0, 20.7);
    glVertex3f(242.0 , 95.0, 20.7);
    glVertex3f(242.0 , 70.0, 20.7);
    glEnd();
    //bingkai tengah
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(217.0 , 40.0, 20.7);
    glVertex3f(217.0 , 65.0, 20.7);
    glVertex3f(222.0 , 65.0, 20.7);
    glVertex3f(222.0 , 40.0, 20.7);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(227.0 , 40.0, 20.7);
    glVertex3f(227.0 , 65.0, 20.7);
    glVertex3f(232.0 , 65.0, 20.7);
    glVertex3f(232.0 , 40.0, 20.7);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(237.0 , 40.0, 20.7);
    glVertex3f(237.0 , 65.0, 20.7);
    glVertex3f(242.0 , 65.0, 20.7);
    glVertex3f(242.0 , 40.0, 20.7);
    glEnd();
    //bingkai bawah
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(217.0 , 10.0, 21);
    glVertex3f(217.0 , 35.0, 21);
    glVertex3f(222.0 , 35.0, 21);
    glVertex3f(222.0 , 10.0, 21);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(227.0 , 10.0, 21);
    glVertex3f(227.0 , 35.0, 21);
    glVertex3f(232.0 , 35.0, 21);
    glVertex3f(232.0 , 10.0, 21);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(237.0 , 10.0, 21);
    glVertex3f(237.0 , 35.0, 21);
    glVertex3f(242.0 , 35.0, 21);
    glVertex3f(242.0 , 10.0, 21);
    glEnd();
}
void bingkaijendela_5()
{
    //bingkai kiri
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(268.0 , 15.0 , 20.7);
    glVertex3f(268.0 , 65.0 , 20.7);
    glVertex3f(273.0 , 65.0 , 20.7);
    glVertex3f(273.0 , 15.0 , 20.7);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(278.0 , 20.0 , 20.7);
    glVertex3f(278.0 , 65.0 , 20.7);
    glVertex3f(283.0 , 65.0 , 20.7);
    glVertex3f(283.0 , 20.0 , 20.7);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(288.0 , 25.0 , 20.7);
    glVertex3f(288.0 , 65.0 , 20.7);
    glVertex3f(293.0 , 65.0 , 20.7);
    glVertex3f(293.0 , 25.0 , 20.7);
    glEnd();
    //bingkai kanan pjg
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(317.0 , 30.0, 20.7);
    glVertex3f(317.0 , 65.0, 20.7);
    glVertex3f(322.0 , 65.0, 20.7);
    glVertex3f(322.0 , 30.0, 20.7);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(317.0 , 30.0, 20.7);
    glVertex3f(317.0 , 65.0, 20.7);
    glVertex3f(322.0 , 65.0, 20.7);
    glVertex3f(322.0 , 30.0, 20.7);
    glEnd();
    //bingkai kanan 2
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(327.0 , 34.0, 20.7);
    glVertex3f(327.0 , 65.0, 20.7);
    glVertex3f(332.0 , 65.0, 20.7);
    glVertex3f(332.0 , 34.0, 20.7);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(337.0 , 34.0, 20.7);
    glVertex3f(337.0 , 65.0, 20.7);
    glVertex3f(342.0 , 65.0, 20.7);
    glVertex3f(342.0 , 34.0, 20.7);
    glEnd();
    //bingkai bawah 2
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(327.0 , 10.0, 20.7);
    glVertex3f(327.0 , 23.0, 20.7);
    glVertex3f(332.0 , 23.0, 20.7);
    glVertex3f(332.0 , 10.0, 20.7);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(337.0 , 10.0, 20.7);
    glVertex3f(337.0 , 23.0, 20.7);
    glVertex3f(342.0 , 23.0, 20.7);
    glVertex3f(342.0 , 10.0, 20.7);
    glEnd();
}
void bingkaijendela_6()
{
    //bingkai kiri 2 atas
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(363.0 , 40.0, -9.3);
    glVertex3f(363.0 , 65.0, -9.3);
    glVertex3f(368.0 , 65.0, -9.3);
    glVertex3f(368.0 , 40.0, -9.3);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(373.0 , 40.0, -9.3);
    glVertex3f(373.0 , 65.0, -9.3);
    glVertex3f(378.0 , 65.0, -9.3);
    glVertex3f(378.0 , 40.0, -9.3);
    glEnd();
    //bingkai kiri 2 bawah
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(363.0 , 10.0, -9.3);
    glVertex3f(363.0 , 35.0, -9.3);
    glVertex3f(368.0 , 35.0, -9.3);
    glVertex3f(368.0 , 10.0, -9.3);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(373.0 , 10.0, -9.3);
    glVertex3f(373.0 , 35.0, -9.3);
    glVertex3f(378.0 , 35.0, -9.3);
    glVertex3f(378.0 , 10.0, -9.3);
    glEnd();

    //bingkai kanan
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(393.0 , 40.0, -9.3);
    glVertex3f(393.0 , 65.0, -9.3);
    glVertex3f(398.0 , 65.0, -9.3);
    glVertex3f(398.0 , 40.0, -9.3);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(403.0 , 40.0, -9.3);
    glVertex3f(403.0 , 65.0, -9.3);
    glVertex3f(408.0 , 65.0, -9.3);
    glVertex3f(408.0 , 40.0, -9.3);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(413.0 , 40.0, -9.3);
    glVertex3f(413.0 , 65.0, -9.3);
    glVertex3f(418.0 , 65.0, -9.3);
    glVertex3f(418.0 , 40.0, -9.3);
    glEnd();
    //bingkai kanan bawah
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(393.0 , 10.0, -9.3);
    glVertex3f(393.0 , 35.0, -9.3);
    glVertex3f(398.0 , 35.0, -9.3);
    glVertex3f(398.0 , 10.0, -9.3);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(403.0 , 10.0, -9.3);
    glVertex3f(403.0 , 35.0, -9.3);
    glVertex3f(408.0 , 35.0, -9.3);
    glVertex3f(408.0 , 10.0, -9.3);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(413.0 , 10.0, -9.3);
    glVertex3f(413.0 , 35.0, -9.3);
    glVertex3f(418.0 , 35.0, -9.3);
    glVertex3f(418.0 , 10.0, -9.3);
    glEnd();
}
void bingkaijendela_belakang()
{
    //bingkai gedung 1&2 atas
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(-138.0 , 40.0, -80.9);
    glVertex3f(-138.0 , 65.0, -80.9);
    glVertex3f(-133.0 , 65.0, -80.9);
    glVertex3f(-133.0 , 40.0, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(-118.0 , 40.0, -80.9);
    glVertex3f(-118.0 , 65.0, -80.9);
    glVertex3f(-113.0 , 65.0, -80.9);
    glVertex3f(-113.0 , 40.0, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(-98.0 , 40.0, -80.9);
    glVertex3f(-98.0 , 65.0, -80.9);
    glVertex3f(-93.0 , 65.0, -80.9);
    glVertex3f(-93.0 , 40.0, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(-78.0 , 40.0, -80.9);
    glVertex3f(-78.0 , 65.0, -80.9);
    glVertex3f(-73.0 , 65.0, -80.9);
    glVertex3f(-73.0 , 40.0, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(-58.0 , 40.0, -80.9);
    glVertex3f(-58.0 , 65.0, -80.9);
    glVertex3f(-53.0 , 65.0, -80.9);
    glVertex3f(-53.0 , 40.0, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(-38.0 , 40.0, -80.9);
    glVertex3f(-38.0 , 65.0, -80.9);
    glVertex3f(-33.0 , 65.0, -80.9);
    glVertex3f(-33.0 , 40.0, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(-18.0 , 40.0, -80.9);
    glVertex3f(-18.0 , 65.0, -80.9);
    glVertex3f(-13.0 , 65.0, -80.9);
    glVertex3f(-13.0 , 40.0, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(7.0 , 40.0, -80.9);
    glVertex3f(7.0 , 65.0, -80.9);
    glVertex3f(2.0 , 65.0, -80.9);
    glVertex3f(2.0 , 40.0, -80.9);
    glEnd();

    //bingkai gedung 1&2 bawah
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(-138.0 , 10.0, -80.9);
    glVertex3f(-138.0 , 35.0, -80.9);
    glVertex3f(-133.0 , 35.0, -80.9);
    glVertex3f(-133.0 , 10.0, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(-118.0 , 10.0, -80.9);
    glVertex3f(-118.0 , 35.0, -80.9);
    glVertex3f(-113.0 , 35.0, -80.9);
    glVertex3f(-113.0 , 10.0, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(-98.0 , 10.0, -80.9);
    glVertex3f(-98.0 , 35.0, -80.9);
    glVertex3f(-93.0 , 35.0, -80.9);
    glVertex3f(-93.0 , 10.0, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(-78.0 , 10.0, -80.9);
    glVertex3f(-78.0 , 35.0, -80.9);
    glVertex3f(-73.0 , 35.0, -80.9);
    glVertex3f(-73.0 , 10.0, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(-58.0 , 10.0, -80.9);
    glVertex3f(-58.0 , 35.0, -80.9);
    glVertex3f(-53.0 , 35.0, -80.9);
    glVertex3f(-53.0 , 10.0, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(-38.0 , 10.0, -80.9);
    glVertex3f(-38.0 , 35.0, -80.9);
    glVertex3f(-33.0 , 35.0, -80.9);
    glVertex3f(-33.0 , 10.0, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(-18.0 , 10.0, -80.9);
    glVertex3f(-18.0 , 35.0, -80.9);
    glVertex3f(-13.0 , 35.0, -80.9);
    glVertex3f(-13.0 , 10.0, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(7.0 , 10.0, -80.9);
    glVertex3f(7.0 , 35.0, -80.9);
    glVertex3f(2.0 , 35.0, -80.9);
    glVertex3f(2.0 , 10.0, -80.9);
    glEnd();

    //bingkai gedung 3 atas
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(33.0 , 70.0, -80.9);
    glVertex3f(33.0 , 95.0, -80.9);
    glVertex3f(38.0 , 95.0, -80.9);
    glVertex3f(38.0 , 70.0, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(43.0 , 70.0, -80.9);
    glVertex3f(43.0 , 95.0, -80.9);
    glVertex3f(48.0 , 95.0, -80.9);
    glVertex3f(48.0 , 70.0, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(53.0 , 70.0, -80.9);
    glVertex3f(53.0 , 95.0, -80.9);
    glVertex3f(58.0 , 95.0, -80.9);
    glVertex3f(58.0 , 70.0, -80.9);
    glEnd();
    //bingkai gedung 3 tengah
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(33.0 , 40.0, -80.9);
    glVertex3f(33.0 , 65.0, -80.9);
    glVertex3f(38.0 , 65.0, -80.9);
    glVertex3f(38.0 , 40.0, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(43.0 , 40.0, -80.9);
    glVertex3f(43.0 , 65.0, -80.9);
    glVertex3f(48.0 , 65.0, -80.9);
    glVertex3f(48.0 , 40.0, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(53.0 , 40.0, -80.9);
    glVertex3f(53.0 , 65.0, -80.9);
    glVertex3f(58.0 , 65.0, -80.9);
    glVertex3f(58.0 , 40.0, -80.9);
    glEnd();
    //bingkai gedung 3 bawah
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(33.0 , 10.0, -80.9);
    glVertex3f(33.0 , 35.0, -80.9);
    glVertex3f(38.0 , 35.0, -80.9);
    glVertex3f(38.0 , 10.0, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(43.0 , 10.0, -80.9);
    glVertex3f(43.0 , 35.0, -80.9);
    glVertex3f(48.0 , 35.0, -80.9);
    glVertex3f(48.0 , 10.0, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(53.0 , 10.0, -80.9);
    glVertex3f(53.0 , 35.0, -80.9);
    glVertex3f(58.0 , 35.0, -80.9);
    glVertex3f(58.0 , 10.0, -80.9);
    glEnd();

    //bingkai gedung utama atas
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(134.0 , 120.0, -90.5);
    glVertex3f(134.0 , 160.0, -90.5);
    glVertex3f(139.0 , 160.0, -90.5);
    glVertex3f(139.0 , 120.0, -90.5);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(144.0 , 120.0, -90.5);
    glVertex3f(144.0 , 160.0, -90.5);
    glVertex3f(149.0 , 160.0, -90.5);
    glVertex3f(149.0 , 120.0, -90.5);
    glEnd();

    //jendela gedung utama atas kiri
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(69.7 , 120.0, -33 );
    glVertex3f(69.7 , 160.0, -33 );
    glVertex3f(69.7 , 160.0, -38 );
    glVertex3f(69.7 , 120.0, -38 );
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(69.7 , 120.0, -23 );
    glVertex3f(69.7 , 160.0, -23 );
    glVertex3f(69.7 , 160.0, -28 );
    glVertex3f(69.7 , 120.0, -28 );
    glEnd();
    //jendela gedung utama atas kanan
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(210.7 , 120.0, -33 );
    glVertex3f(210.7 , 160.0, -33 );
    glVertex3f(210.7 , 160.0, -38 );
    glVertex3f(210.7 , 120.0, -38 );
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(210.7 , 120.0, -23 );
    glVertex3f(210.7 , 160.0, -23 );
    glVertex3f(210.7 , 160.0, -28 );
    glVertex3f(210.7 , 120.0, -28 );
    glEnd();

    //bingkai gedung utama bawah
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(129.0 , 85.0, -100.7);
    glVertex3f(129.0 , 110.0,-100.7);
    glVertex3f(134.0 , 110.0,-100.7);
    glVertex3f(134.0 , 85.0, -100.7);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(139.0 , 85.0, -100.7);
    glVertex3f(139.0 , 110.0,-100.7);
    glVertex3f(144.0 , 110.0,-100.7);
    glVertex3f(144.0 , 85.0, -100.7);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(149.0 , 85.0, -100.7);
    glVertex3f(149.0 , 110.0,-100.7);
    glVertex3f(154.0 , 110.0,-100.7);
    glVertex3f(154.0 , 85.0, -100.7);
    glEnd();

    //bingkai gedung 4 atas
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(223.0 , 70.0, -80.9);
    glVertex3f(223.0 , 95.0, -80.9);
    glVertex3f(228.0 , 95.0, -80.9);
    glVertex3f(228.0 , 70.0, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(233.0 , 70.0, -80.9);
    glVertex3f(233.0 , 95.0, -80.9);
    glVertex3f(238.0 , 95.0, -80.9);
    glVertex3f(238.0 , 70.0, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(243.0 , 70.0, -80.9);
    glVertex3f(243.0 , 95.0, -80.9);
    glVertex3f(248.0 , 95.0, -80.9);
    glVertex3f(248.0 , 70.0, -80.9);
    glEnd();
    //bingkai gedung4 tengah
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(223.0 , 40.0, -80.9);
    glVertex3f(223.0 , 65.0, -80.9);
    glVertex3f(228.0 , 65.0, -80.9);
    glVertex3f(228.0 , 40.0, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(233.0 , 40.0, -80.9);
    glVertex3f(233.0 , 65.0, -80.9);
    glVertex3f(238.0 , 65.0, -80.9);
    glVertex3f(238.0 , 40.0, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(243.0 , 40.0, -80.9);
    glVertex3f(243.0 , 65.0, -80.9);
    glVertex3f(248.0 , 65.0, -80.9);
    glVertex3f(248.0 , 40.0, -80.9);
    glEnd();
    //bingkai gedung4 bawah
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(223.0  , 10.0, -80.9);
    glVertex3f(223.0  , 35.0, -80.9);
    glVertex3f(228.0  , 35.0, -80.9);
    glVertex3f(228.0  , 10.0, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(233.0  , 10.0, -80.9);
    glVertex3f(233.0  , 35.0, -80.9);
    glVertex3f(238.0  , 35.0, -80.9);
    glVertex3f(238.0  , 10.0, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(243.0  , 10.0, -80.9);
    glVertex3f(243.0  , 35.0, -80.9);
    glVertex3f(248.0  , 35.0, -80.9);
    glVertex3f(248.0  , 10.0, -80.9);
    glEnd();

    //bingkai gedung 5&6 atas
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(272.0 , 40.0, -80.9);
    glVertex3f(272.0 , 65.0, -80.9);
    glVertex3f(277.0 , 65.0, -80.9);
    glVertex3f(277.0 , 40.0, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(292.0 , 40.0, -80.9);
    glVertex3f(292.0 , 65.0, -80.9);
    glVertex3f(297.0 , 65.0, -80.9);
    glVertex3f(297.0 , 40.0, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(312.0 , 40.0, -80.9);
    glVertex3f(312.0 , 65.0, -80.9);
    glVertex3f(317.0 , 65.0, -80.9);
    glVertex3f(317.0 , 40.0, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(332.0 , 40.0, -80.9);
    glVertex3f(332.0 , 65.0, -80.9);
    glVertex3f(337.0 , 65.0, -80.9);
    glVertex3f(337.0 , 40.0, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(352.0 , 40.0, -80.9);
    glVertex3f(352.0 , 65.0, -80.9);
    glVertex3f(357.0 , 65.0, -80.9);
    glVertex3f(357.0 , 40.0, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(372.0 , 40.0, -80.9);
    glVertex3f(372.0 , 65.0, -80.9);
    glVertex3f(377.0 , 65.0, -80.9);
    glVertex3f(377.0 , 40.0, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(392.0 , 40.0, -80.9);
    glVertex3f(392.0 , 65.0, -80.9);
    glVertex3f(397.0 , 65.0, -80.9);
    glVertex3f(397.0 , 40.0, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(412.0 , 40.0, -80.9);
    glVertex3f(412.0 , 65.0, -80.9);
    glVertex3f(417.0 , 65.0, -80.9);
    glVertex3f(417.0 , 40.0, -80.9);
    glEnd();

    //bingkai gedung 5&6 bawah
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(272.0 , 10.0, -80.9);
    glVertex3f(272.0 , 35.0, -80.9);
    glVertex3f(277.0 , 35.0, -80.9);
    glVertex3f(277.0 , 10.0, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(292.0 , 10.0, -80.9);
    glVertex3f(292.0 , 35.0, -80.9);
    glVertex3f(297.0 , 35.0, -80.9);
    glVertex3f(297.0 , 10.0, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(312.0 , 10.0, -80.9);
    glVertex3f(312.0 , 35.0, -80.9);
    glVertex3f(317.0 , 35.0, -80.9);
    glVertex3f(317.0 , 10.0, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(332.0 , 10.0, -80.9);
    glVertex3f(332.0 , 35.0, -80.9);
    glVertex3f(337.0 , 35.0, -80.9);
    glVertex3f(337.0 , 10.0, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(352.0 , 10.0, -80.9);
    glVertex3f(352.0 , 35.0, -80.9);
    glVertex3f(357.0 , 35.0, -80.9);
    glVertex3f(357.0 , 10.0, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(372.0 , 10.0, -80.9);
    glVertex3f(372.0 , 35.0, -80.9);
    glVertex3f(377.0 , 35.0, -80.9);
    glVertex3f(377.0 , 10.0, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(392.0 , 10.0, -80.9);
    glVertex3f(392.0 , 35.0, -80.9);
    glVertex3f(397.0 , 35.0, -80.9);
    glVertex3f(397.0 , 10.0, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(412.0 , 10.0, -80.9);
    glVertex3f(412.0 , 35.0, -80.9);
    glVertex3f(417.0 , 35.0, -80.9);
    glVertex3f(417.0 , 10.0, -80.9);
    glEnd();
}
void bingkaihorizontal_1()
{
    //bingkai horizontal gedung1 atas
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(-138.0 , 52.5, -9);
    glVertex3f(-133.0 , 52.5, -9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(-128.0 , 52.5, -9);
    glVertex3f(-123.0 , 52.5, -9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(-118.0 , 52.5, -9);
    glVertex3f(-113.0 , 52.5, -9);
    glEnd();
    //bingkai horizontal gedung1 bawah
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(-138.0 , 22.5, -9);
    glVertex3f(-133.0 , 22.5, -9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(-128.0 , 22.5, -9);
    glVertex3f(-123.0 , 22.5, -9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(-118.0 , 22.5, -9);
    glVertex3f(-113.0  , 22.5, -9);
    glEnd();

    //bingkai horizontal gedung1 atas 2
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(-98.0 , 52.5, -9);
    glVertex3f(-93.0 , 52.5, -9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(-88.0 , 52.5, -9);
    glVertex3f(-83.0 , 52.5, -9);
    glEnd();

    //bingkai horizontal gedung1 bawah 2
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(-98.0 , 22.5, -9);
    glVertex3f(-93.0 , 22.5, -9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(-88.0 , 22.5, -9);
    glVertex3f(-83.0 , 22.5, -9);
    glEnd();
}
void bingkaihorizontal_2()
{
    //bingkai horizontal gedung2 atas 2
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(-63.0 , 57.25, 20.9);
    glVertex3f(-58.0 , 57.25, 20.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(-63.0 , 42.25, 20.9);
    glVertex3f(-58.0 , 42.25, 20.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(-53.0 , 57.25, 20.9);
    glVertex3f(-48.0 , 57.25, 20.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(-53.0 , 42.25, 20.9);
    glVertex3f(-48.0 , 42.25, 20.9);
    glEnd();
    //bingkai horizontal gedung2 atas pjg
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(-43.0 , 57.25, 20.9);
    glVertex3f(-38.0 , 57.25, 20.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(-43.0 , 37.25, 20.9);
    glVertex3f(-38.0 , 37.25, 20.9);
    glEnd();
    //bingkai horizontal gedung2 atas kanan
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(-13.0 , 57.25, 20.9);
    glVertex3f(-8.0 , 57.25, 20.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(-13.0 , 35.25, 20.9);
    glVertex3f(-8.0 , 35.25, 20.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(-3.0 , 57.25, 20.9);
    glVertex3f(2.0 , 57.25, 20.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(-3.0 , 30.25, 20.9);
    glVertex3f(2.0 , 30.25, 20.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(7.0 , 57.25, 20.9);
    glVertex3f(12.0 , 57.25, 20.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(7.0 , 25.25, 20.9);
    glVertex3f(12.0 , 25.25, 20.9);
    glEnd();
}
void bingkaihorizontal_3()
{
    //atas kiri
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(37.0 , 88.75, 20.9);
    glVertex3f(42.0 , 88.75, 20.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(37.0 , 82.50, 20.9);
    glVertex3f(42.0 , 82.50, 20.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(37.0 , 76.25, 20.9);
    glVertex3f(42.0 , 76.25, 20.9);
    glEnd();
    //atas tengah
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(47.0 , 88.75, 20.9);
    glVertex3f(52.0 , 88.75, 20.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(47.0 , 82.50, 20.9);
    glVertex3f(52.0 , 82.50, 20.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(47.0 , 76.25, 20.9);
    glVertex3f(52.0 , 76.25, 20.9);
    glEnd();
    //atas kanan
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(57.0 , 88.75, 20.9);
    glVertex3f(62.0 , 88.75, 20.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(57.0 , 82.50, 20.9);
    glVertex3f(62.0 , 82.50, 20.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(57.0 , 76.25, 20.9);
    glVertex3f(62.0 , 76.25, 20.9);
    glEnd();
    //tengah kiri
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(37.0 , 58.75, 20.9);
    glVertex3f(42.0 , 58.75, 20.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(37.0 , 52.50, 20.9);
    glVertex3f(42.0 , 52.50, 20.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(37.0 , 46.25, 20.9);
    glVertex3f(42.0 , 46.25, 20.9);
    glEnd();
    //tengah tengah
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(47.0 , 58.75, 20.9);
    glVertex3f(52.0 , 58.75, 20.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(47.0 , 52.50, 20.9);
    glVertex3f(52.0 , 52.50, 20.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(47.0 , 46.25, 20.9);
    glVertex3f(52.0 , 46.25, 20.9);
    glEnd();
    //tengah kanan
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(57.0 , 58.75, 20.9);
    glVertex3f(62.0 , 58.75, 20.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(57.0 , 52.50, 20.9);
    glVertex3f(62.0 , 52.50, 20.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(57.0 , 46.25, 20.9);
    glVertex3f(62.0 , 46.25, 20.9);
    glEnd();
    //bawah kiri
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(37.0 , 28.75, 20.9);
    glVertex3f(42.0 , 28.75, 20.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(37.0 , 22.75, 20.9);
    glVertex3f(42.0 , 22.75, 20.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(37.0 , 16.75, 20.9);
    glVertex3f(42.0 , 16.75, 20.9);
    glEnd();
    //bawah tengah
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(47.0 , 28.75, 20.9);
    glVertex3f(52.0 , 28.75, 20.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(47.0 , 22.75, 20.9);
    glVertex3f(52.0 , 22.75, 20.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(47.0 , 16.75, 20.9);
    glVertex3f(52.0 , 16.75, 20.9);
    glEnd();
    //bawah kanan
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(57.0 , 28.75, 20.9);
    glVertex3f(62.0 , 28.75, 20.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(57.0 , 22.75, 20.9);
    glVertex3f(62.0 , 22.75, 20.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(57.0 , 16.75, 20.9);
    glVertex3f(62.0 , 16.75, 20.9);
    glEnd();
}
void bingkaihorizontal_utama()
{
    //utama tengah kiri
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(129.0 , 104.75, 40.9);
    glVertex3f(134.0 , 104.75, 40.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(129.0 , 98.75, 40.9);
    glVertex3f(134.0 , 98.75, 40.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(129.0 , 92.25, 40.9);
    glVertex3f(134.0 , 92.25, 40.9);
    glEnd();
    //utama tengah tengah
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(139.0 , 104.75, 40.9);
    glVertex3f(144.0 , 104.75, 40.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(139.0 , 98.75, 40.9);
    glVertex3f(144.0 , 98.75, 40.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(139.0 , 92.25, 40.9);
    glVertex3f(144.0 , 92.25, 40.9);
    glEnd();
    //utama tengah kanan
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(149.0 , 104.75, 40.9);
    glVertex3f(154.0 , 104.75, 40.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(149.0 , 98.75, 40.9);
    glVertex3f(154.0 , 98.75, 40.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(149.0 , 92.25, 40.9);
    glVertex3f(154.0 , 92.25, 40.9);
    glEnd();
    //utama atas kiri
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(134.0 , 155.0, 30.9);
    glVertex3f(139.0 , 155.0, 30.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(134.0 , 150.0, 30.9);
    glVertex3f(139.0 , 150.0, 30.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(134.0 , 145.0, 30.9);
    glVertex3f(139.0 , 145.0, 30.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(134.0 , 140.0, 30.9);
    glVertex3f(139.0 , 140.0, 30.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(134.0 , 135.0, 30.9);
    glVertex3f(139.0 , 135.0, 30.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(134.0 , 130.0, 30.9);
    glVertex3f(139.0 , 130.0, 30.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(134.0 , 125.0, 30.9);
    glVertex3f(139.0 , 125.0, 30.9);
    glEnd();
    //utama atas kanan
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(144.0 , 155.0, 30.9);
    glVertex3f(149.0 , 155.0, 30.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(144.0 , 150.0, 30.9);
    glVertex3f(149.0 , 150.0, 30.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(144.0 , 145.0, 30.9);
    glVertex3f(149.0 , 145.0, 30.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(144.0 , 140.0, 30.9);
    glVertex3f(149.0 , 140.0, 30.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(144.0 , 135.0, 30.9);
    glVertex3f(149.0 , 135.0, 30.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(144.0 , 130.0, 30.9);
    glVertex3f(149.0 , 130.0, 30.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(144.0 , 125.0, 30.9);
    glVertex3f(149.0 , 125.0, 30.9);
    glEnd();
}
void bingkaihorizontal_4()
{
    //atas kiri
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(217.0 , 88.75, 20.9);
    glVertex3f(222.0 , 88.75, 20.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(217.0 , 82.5, 20.9);
    glVertex3f(222.0 , 82.5, 20.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(217.0 , 76.25, 20.9);
    glVertex3f(222.0 , 76.25, 20.9);
    glEnd();
    //atas tengah
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(227.0 , 88.75, 20.9);
    glVertex3f(232.0 , 88.75, 20.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(227.0 , 82.5, 20.9);
    glVertex3f(232.0 , 82.5, 20.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(227.0 , 76.25, 20.9);
    glVertex3f(232.0 , 76.25, 20.9);
    glEnd();
    //atas kanan
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(237.0 , 88.75, 20.9);
    glVertex3f(242.0 , 88.75, 20.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(237.0 , 82.5, 20.9);
    glVertex3f(242.0 , 82.5, 20.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(237.0 , 76.25, 20.9);
    glVertex3f(242.0 , 76.25, 20.9);
    glEnd();
    //tengah kiri
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(217.0 , 58.75, 20.9);
    glVertex3f(222.0 , 58.75, 20.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(217.0 , 52.5, 20.9);
    glVertex3f(222.0 , 52.5, 20.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(217.0 , 46.25, 20.9);
    glVertex3f(222.0 , 46.25, 20.9);
    glEnd();
    //tengah tengah
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(227.0 , 58.75, 20.9);
    glVertex3f(232.0 , 58.75, 20.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(227.0 , 52.5, 20.9);
    glVertex3f(232.0 , 52.5, 20.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(227.0 , 46.25, 20.9);
    glVertex3f(232.0 , 46.25, 20.9);
    glEnd();
    //tengah kanan
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(237.0 , 58.75, 20.9);
    glVertex3f(242.0 , 58.75, 20.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(237.0 , 52.5, 20.9);
    glVertex3f(242.0 , 52.5, 20.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(237.0 , 46.25, 20.9);
    glVertex3f(242.0 , 46.25, 20.9);
    glEnd();
    //bawah kiri
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(217.0 , 28.75, 20.9);
    glVertex3f(222.0 , 28.75, 20.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(217.0 , 22.5, 20.9);
    glVertex3f(222.0 , 22.5, 20.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(217.0 , 16.25, 20.9);
    glVertex3f(222.0 , 16.25, 20.9);
    glEnd();
    //bawah tengah
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(227.0 , 28.75, 20.9);
    glVertex3f(232.0 , 28.75, 20.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(227.0 , 22.5, 20.9);
    glVertex3f(232.0 , 22.5, 20.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(227.0 , 16.25, 20.9);
    glVertex3f(232.0 , 16.25, 20.9);
    glEnd();
    //bawah kanan
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(237.0 , 28.75, 20.9);
    glVertex3f(242.0 , 28.75, 20.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(237.0 , 22.5, 20.9);
    glVertex3f(242.0 , 22.5, 20.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(237.0 , 16.25, 20.9);
    glVertex3f(242.0 , 16.25, 20.9);
    glEnd();
}
void bingkaihorizontal_5()
{
    //bingkai horizontal gedung5 atas 2
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(327.0 , 57.25, 20.9);
    glVertex3f(332.0 , 57.25, 20.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(327.0 , 42.25, 20.9);
    glVertex3f(332.0 , 42.25, 20.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(337.0 , 57.25, 20.9);
    glVertex3f(342.0 , 57.25, 20.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(337.0 , 42.25, 20.9);
    glVertex3f(342.0 , 42.25, 20.9);
    glEnd();
     //bingkai horizontal gedung2 atas pjg
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(317.0 , 57.25, 20.9);
    glVertex3f(322.0 , 57.25, 20.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(317.0 , 37.25, 20.9);
    glVertex3f(322.0 , 37.25, 20.9);
    glEnd();
    glVertex3f(268.0 + (i*10), 15.0 + (i*5), 20.7);
    glVertex3f(268.0 + (i*10), 65.0 , 20.7);
    glVertex3f(273.0 + (i*10), 65.0 , 20.7);
    glVertex3f(273.0 + (i*10), 15.0 + (i*5), 20.7);
    //bingkai horizontal gedung2 atas kanan
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(268.0 , 57.25, 20.9);
    glVertex3f(273.0 , 57.25, 20.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(268.0 , 25.25, 20.9);
    glVertex3f(273.0 , 25.25, 20.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(278.0 , 57.25, 20.9);
    glVertex3f(283.0 , 57.25, 20.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(278.0 , 30.25, 20.9);
    glVertex3f(283.0 , 30.25, 20.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(288.0 , 57.25, 20.9);
    glVertex3f(293.0 , 57.25, 20.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(288.0 , 35.25, 20.9);
    glVertex3f(293.0 , 35.25, 20.9);
    glEnd();
}
void bingkaihorizontal_6()
{
    //bingkai horizontal gedung6 atas
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(393.0 , 52.5, -9);
    glVertex3f(398.0 , 52.5, -9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(403.0 , 52.5, -9);
    glVertex3f(408.0 , 52.5, -9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(413.0 , 52.5, -9);
    glVertex3f(418.0 , 52.5, -9);
    glEnd();
    //bingkai horizontal gedung6 bawah
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(393.0 , 22.5, -9);
    glVertex3f(398.0 , 22.5, -9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(403.0 , 22.5, -9);
    glVertex3f(408.0 , 22.5, -9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(413.0 , 22.5, -9);
    glVertex3f(418.0 , 22.5, -9);
    glEnd();

    //bingkai horizontal gedung6 atas 2
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(363.0 , 52.5, -9);
    glVertex3f(368.0 , 52.5, -9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(373.0 , 52.5, -9);
    glVertex3f(378.0 , 52.5, -9);
    glEnd();

    //bingkai horizontal gedung6 bawah 2
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(363.0 , 22.5, -9);
    glVertex3f(368.0 , 22.5, -9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(373.0 , 22.5, -9);
    glVertex3f(378.0 , 22.5, -9);
    glEnd();
}
void bingkaihorizontalbelakang()
{
    //bingkaihorizontal gedung 1&2 atas
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(-138.0 , 52.5, -80.9);
    glVertex3f(-133.0 , 52.5, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(-118.0 , 52.5, -80.9);
    glVertex3f(-113.0 , 52.5, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(-98.0 , 52.5, -80.9);
    glVertex3f(-93.0 , 52.5, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(-78.0 , 52.5, -80.9);
    glVertex3f(-73.0 , 52.5, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(-58.0 , 52.5, -80.9);
    glVertex3f(-53.0 , 52.5, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(-38.0 , 52.5, -80.9);
    glVertex3f(-33.0 , 52.5, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(-18.0 , 52.5, -80.9);
    glVertex3f(-13.0 , 52.5, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(2.0 , 52.5, -80.9);
    glVertex3f(7.0 , 52.5, -80.9);
    glEnd();
    //bingkaihorizontal gedung 1&2 bawah
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(-138.0 , 22.5, -80.9);
    glVertex3f(-133.0 , 22.5, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(-118.0 , 22.5, -80.9);
    glVertex3f(-113.0 , 22.5, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(-98.0 , 22.5, -80.9);
    glVertex3f(-93.0 , 22.5, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(-78.0 , 22.5, -80.9);
    glVertex3f(-73.0 , 22.5, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(-58.0 , 22.5, -80.9);
    glVertex3f(-53.0 , 22.5, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(-38.0 , 22.5, -80.9);
    glVertex3f(-33.0 , 22.5, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(-18.0 , 22.5, -80.9);
    glVertex3f(-13.0 , 22.5, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(2.0  , 22.5, -80.9);
    glVertex3f(7.0  , 22.5, -80.9);
    glEnd();
    //bingkaihorizontal gedung 3 atas
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(33.0  , 82.5, -80.9);
    glVertex3f(38.0  , 82.5, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(43.0  , 82.5, -80.9);
    glVertex3f(48.0  , 82.5, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(53.0  , 82.5, -80.9);
    glVertex3f(58.0  , 82.5, -80.9);
    glEnd();
    //bingkaihorizontal gedung 3 tengah
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(33.0  , 52.5, -80.9);
    glVertex3f(38.0  , 52.5, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(43.0  , 52.5, -80.9);
    glVertex3f(48.0  , 52.5, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(53.0  , 52.5, -80.9);
    glVertex3f(58.0  , 52.5, -80.9);
    glEnd();
    //bingkaihorizontal gedung 3 bawah
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(33.0  , 22.5, -80.9);
    glVertex3f(38.0  , 22.5, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(43.0  , 22.5, -80.9);
    glVertex3f(48.0  , 22.5, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(53.0  , 22.5, -80.9);
    glVertex3f(58.0  , 22.5, -80.9);
    glEnd();

    //bingkaihorizontal gedung 4 atas
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(223.0  , 82.5, -80.9);
    glVertex3f(228.0  , 82.5, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(233.0  , 82.5, -80.9);
    glVertex3f(238.0  , 82.5, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(243.0  , 82.5, -80.9);
    glVertex3f(248.0  , 82.5, -80.9);
    glEnd();
    //bingkaihorizontal gedung 4 tengah
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(223.0  , 52.5, -80.9);
    glVertex3f(228.0  , 52.5, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(233.0  , 52.5, -80.9);
    glVertex3f(238.0  , 52.5, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(243.0  , 52.5, -80.9);
    glVertex3f(248.0  , 52.5, -80.9);
    glEnd();
    //bingkaihorizontal gedung 4 bawah
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(223.0  , 22.5, -80.9);
    glVertex3f(228.0  , 22.5, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(233.0  , 22.5, -80.9);
    glVertex3f(238.0  , 22.5, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(243.0  , 22.5, -80.9);
    glVertex3f(248.0  , 22.5, -80.9);
    glEnd();

    //bingkaihorizontal gedung 5&6 atas
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(272.0 , 52.5, -80.9);
    glVertex3f(277.0 , 52.5, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(292.0 , 52.5, -80.9);
    glVertex3f(297.0 , 52.5, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(312.0 , 52.5, -80.9);
    glVertex3f(317.0 , 52.5, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(332.0 , 52.5, -80.9);
    glVertex3f(337.0 , 52.5, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(352.0 , 52.5, -80.9);
    glVertex3f(357.0 , 52.5, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(372.0 , 52.5, -80.9);
    glVertex3f(377.0 , 52.5, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(392.0 , 52.5, -80.9);
    glVertex3f(397.0 , 52.5, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(412.0 , 52.5, -80.9);
    glVertex3f(417.0 , 52.5, -80.9);
    glEnd();
    //bingkaihorizontal gedung 5&6 bawah
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(272.0 , 22.5, -80.9);
    glVertex3f(277.0 , 22.5, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(292.0 , 22.5, -80.9);
    glVertex3f(297.0 , 22.5, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(312.0 , 22.5, -80.9);
    glVertex3f(317.0 , 22.5, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(332.0 , 22.5, -80.9);
    glVertex3f(337.0 , 22.5, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(352.0 , 22.5, -80.9);
    glVertex3f(357.0 , 22.5, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(372.0 , 22.5, -80.9);
    glVertex3f(377.0 , 22.5, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(392.0 , 22.5, -80.9);
    glVertex3f(397.0 , 22.5, -80.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(412.0 , 22.5, -80.9);
    glVertex3f(417.0 , 22.5, -80.9);
    glEnd();
}
void bingkaihorizontalbelakangutama()
{
    //utama atas kiri
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(134.0 , 155.0, -90.7);
    glVertex3f(139.0 , 155.0, -90.7);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(134.0 , 150.0, -90.7);
    glVertex3f(139.0 , 150.0, -90.7);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(134.0 , 145.0, -90.7);
    glVertex3f(139.0 , 145.0, -90.7);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(134.0 , 140.0, -90.7);
    glVertex3f(139.0 , 140.0, -90.7);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(134.0 , 135.0, -90.7);
    glVertex3f(139.0 , 135.0, -90.7);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(134.0 , 130.0, -90.7);
    glVertex3f(139.0 , 130.0, -90.7);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(134.0 , 125.0, -90.7);
    glVertex3f(139.0 , 125.0, -90.7);
    glEnd();
    //utama atas kanan
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(144.0 , 155.0, -90.7);
    glVertex3f(149.0 , 155.0, -90.7);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(144.0 , 150.0, -90.7);
    glVertex3f(149.0 , 150.0, -90.7);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(144.0 , 145.0, -90.7);
    glVertex3f(149.0 , 145.0, -90.7);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(144.0 , 140.0, -90.7);
    glVertex3f(149.0 , 140.0, -90.7);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(144.0 , 135.0, -90.7);
    glVertex3f(149.0 , 135.0, -90.7);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(144.0 , 130.0, -90.7);
    glVertex3f(149.0 , 130.0, -90.7);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(144.0 , 125.0, -90.7);
    glVertex3f(149.0 , 125.0, -90.7);
    glEnd();
    //bingkai gedung utama bawah
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(129.0 , 97.5, -100.7);
    glVertex3f(134.0 , 97.5, -100.7);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(139.0 , 97.5, -100.7);
    glVertex3f(144.0 , 97.5, -100.7);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(149.0 , 97.5, -100.7);
    glVertex3f(154.0 , 97.5, -100.7);
    glEnd();

    //atas kiri kiri
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(69.3 , 155, -38);
    glVertex3f(69.3 , 155, -28);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(69.3 , 150, -38);
    glVertex3f(69.3 , 150, -28);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(69.3 , 145, -38);
    glVertex3f(69.3 , 145, -28);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(69.3 , 140, -38);
    glVertex3f(69.3 , 140, -28);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(69.3 , 135, -38);
    glVertex3f(69.3 , 135, -28);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(69.3 , 130, -38);
    glVertex3f(69.3 , 130, -28);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(69.3 , 125, -38);
    glVertex3f(69.3 , 125, -28);
    glEnd();
    //atas kiri kanan
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(69.3 , 155, -28);
    glVertex3f(69.3 , 155, -18);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(69.3 , 150, -28);
    glVertex3f(69.3 , 150, -18);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(69.3 , 145, -28);
    glVertex3f(69.3 , 145, -18);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(69.3 , 140, -28);
    glVertex3f(69.3 , 140, -18);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(69.3 , 135, -28);
    glVertex3f(69.3 , 135, -18);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(69.3 , 130, -28);
    glVertex3f(69.3 , 130, -18);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(69.3 , 125, -28);
    glVertex3f(69.3 , 125, -18);
    glEnd();

    //atas kanan kiri
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(210.9 , 155, -38);
    glVertex3f(210.9, 155, -28);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(210.9 , 150, -38);
    glVertex3f(210.9 , 150, -28);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(210.9 , 145, -38);
    glVertex3f(210.9 , 145, -28);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(210.9 , 140, -38);
    glVertex3f(210.9, 140, -28);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(210.9 , 135, -38);
    glVertex3f(210.9 , 135, -28);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(210.9, 130, -38);
    glVertex3f(210.9 , 130, -28);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(210.9 , 125, -38);
    glVertex3f(210.9 , 125, -28);
    glEnd();
    //atas kanan kanan
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(210.9 , 155, -28);
    glVertex3f(210.9 , 155, -18);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(210.9 , 150, -28);
    glVertex3f(210.9 , 150, -18);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(210.9 , 145, -28);
    glVertex3f(210.9 , 145, -18);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(210.9 , 140, -28);
    glVertex3f(210.9 , 140, -18);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(210.9 , 135, -28);
    glVertex3f(210.9 , 135, -18);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(210.9 , 130, -28);
    glVertex3f(210.9 , 130, -18);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.98,0.99,1.00);
    glVertex3f(210.9 , 125, -28);
    glVertex3f(210.9 , 125, -18);
    glEnd();
}

void jam()
{
    //jam depan
    glBegin(GL_QUADS);
    glColor3f(1, 1, 1);
    glVertex3f(134, 145, 34.5);
    glVertex3f(134, 160, 34.5);
    glVertex3f(149, 160, 34.5);
    glVertex3f(149, 145, 34.5);
    glEnd();

    //jarum jam depan
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(140.5, 152.5, 35.5);
    glVertex3f(140.5, 156.5, 35.5);
    glVertex3f(140.5, 152.5, 35.5);
    glVertex3f(144.5, 152.5, 35.5);
    glEnd();

    //garis jam depan
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(134, 145, 34.5);
    glVertex3f(134, 160, 34.5);
    glVertex3f(149, 160, 34.5);
    glVertex3f(149, 145, 34.5);
    glVertex3f(134, 145, 34.5);
    glEnd();

    //jam kiri
    glBegin(GL_QUADS);
    glColor3f(1, 1, 1);
    glVertex3f(65.5, 145, -37.7);
    glVertex3f(65.5, 160, -37.7);
    glVertex3f(65.5, 160, -23.3);
    glVertex3f(65.5, 145, -23.3);
    glEnd();

    //jarum jam kiri
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(65, 152.5, -31.2);
    glVertex3f(65, 156.5, -31.2);
    glVertex3f(65, 152.5, -31.2);
    glVertex3f(65, 152.5, -26.8);
    glEnd();

    //garis jam kiri
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(65.5, 145, -37.7);
    glVertex3f(65.5, 160, -37.7);
    glVertex3f(65.5, 160, -23.3);
    glVertex3f(65.5, 145, -23.3);
    glVertex3f(65.5, 145, -37.7);
    glEnd();

    //jam kanan
    glBegin(GL_QUADS);
    glColor3f(1, 1, 1);
    glVertex3f(214.5, 145, -37.7);
    glVertex3f(214.5, 160, -37.7);
    glVertex3f(214.5, 160, -23.3);
    glVertex3f(214.5, 145, -23.3);
    glEnd();

    //jarum jam kanan
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(215, 152.5, -31.2);
    glVertex3f(215, 156.5, -31.2);
    glVertex3f(215, 152.5, -31.2);
    glVertex3f(215, 152.5, -34.6);
    glEnd();

    //garis jam kanan
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(214.5, 145, -37.7);
    glVertex3f(214.5, 160, -37.7);
    glVertex3f(214.5, 160, -23.3);
    glVertex3f(214.5, 145, -23.3);
    glVertex3f(214.5, 145, -37.7);
    glEnd();

    //jam belakang
    glBegin(GL_QUADS);
    glColor3f(1, 1, 1);
    glVertex3f(134, 145, -94.5);
    glVertex3f(134, 160, -94.5);
    glVertex3f(149, 160, -94.5);
    glVertex3f(149, 145, -94.5);
    glEnd();

    //jarum jam belakang
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(140.5, 152.5, -95.5);
    glVertex3f(140.5, 156.5, -95.5);
    glVertex3f(140.5, 152.5, -95.5);
    glVertex3f(136.5, 152.5, -95.5);
    glEnd();

    //garis jam belakang
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(134, 145, -94.5);
    glVertex3f(134, 160, -94.5);
    glVertex3f(149, 160, -94.5);
    glVertex3f(149, 145, -94.5);
    glVertex3f(134, 145, -94.5);
    glEnd();
}
void loker(void)
{
    //depan LOKER
    glBegin(GL_QUADS);
    glColor3f(0.412f, 0.412f, 0.412f);
    glVertex3f(10.0, 0.0, -77.0);
    glVertex3f(18.0, 0.0, -77.0);
    glVertex3f(18.0, 24.0, -77.0);
    glVertex3f(10.0, 24.0, -77.0);
    glEnd();
    //garis
    glBegin(GL_LINE_LOOP);
    glColor3f(0.000f, 0.000f, 0.000f);
    glVertex3f(10.0, 0.0, -77.0);
    glVertex3f(18.0, 0.0, -77.0);
    glVertex3f(18.0, 24.0, -77.0);
    glVertex3f(10.0, 24.0, -77.0);
    glEnd();

    //belakang lemari
    glBegin(GL_QUADS);
    glColor3f(0.412f, 0.412f, 0.412f);
    glVertex3f(10.0, 0.0, -59.0);
    glVertex3f(18.0, 0.0, -59.0);
    glVertex3f(18.0, 24.0, -59.0);
    glVertex3f(10.0, 24.0, -59.0);
    glEnd();
    //garis
    glBegin(GL_LINE_LOOP);
    glColor3f(0.000f, 0.000f, 0.000f);
    glVertex3f(10.0, 0.0, -59.0);
    glVertex3f(18.0, 0.0, -59.0);
    glVertex3f(18.0, 24.0, -59.0);
    glVertex3f(10.0, 24.0, -59.0);
    glEnd();

    //kanan lemari
    glBegin(GL_QUADS);
    glColor3f(0.412f, 0.412f, 0.412f);
    glVertex3f(18.0, 24.0, -77.0);
    glVertex3f(18.0, 0.0, -77.0);
    glVertex3f(18.0, 0.0, -59.0);
    glVertex3f(18.0, 24.0, -59.0);
    glEnd();
    //garis
    glBegin(GL_LINE_LOOP);
    glColor3f(0.000f, 0.000f, 0.000f);
    glVertex3f(18.0, 24.0, -77.0);
    glVertex3f(18.0, 0.0, -77.0);
    glVertex3f(18.0, 0.0, -59.0);
    glVertex3f(18.0, 24.0, -59.0);
    glEnd();

    //kiri lemari
    glBegin(GL_QUADS);
    glColor3f(0.412f, 0.412f, 0.412f);
    glVertex3f(10.0, 24.0, -77.0);
    glVertex3f(10.0, 0.0, -77.0);
    glVertex3f(10.0, 0.0, -59.0);
    glVertex3f(10.0, 24.0, -59.0);
    glEnd();
    //garis
    glBegin(GL_LINE_LOOP);
    glColor3f(0.000f, 0.000f, 0.000f);
    glVertex3f(10.0, 24.0, -77.0);
    glVertex3f(10.0, 0.0, -77.0);
    glVertex3f(10.0, 0.0, -59.0);
    glVertex3f(10.0, 24.0, -59.0);
    glEnd();
    //garis tengah
    glBegin(GL_LINE_LOOP);
    glColor3f(0.000f, 0.000f, 0.000f);
    glVertex3f(9.9, 24.0, -68.0);
    glVertex3f(9.9, 0.0, -68.0);
    glVertex3f(9.9, 0.0, -68.0);
    glVertex3f(9.9, 24.0, -68.0);
    glEnd();
    //GAGANG PINTU
    glBegin(GL_POINTS);
    glColor3f(0.000f, 0.000f, 0.000f);
    glVertex3f(9.9, 12.0, -67.0);
    glVertex3f(9.9, 13.0, -67.0);
    glVertex3f(9.9, 12.0, -69.0);
    glVertex3f(9.9, 13.0, -69.0);
    glEnd();

    //atas lemari
    glBegin(GL_QUADS);
    glColor3f(0.412f, 0.412f, 0.412f);
    glVertex3f(10.0, 24.0, -77.0);
    glVertex3f(18.0, 24.0, -77.0);
    glVertex3f(18.0, 24.0, -59.0);
    glVertex3f(10.0, 24.0, -59.0);
    glEnd();
    //garis
    glBegin(GL_LINE_LOOP);
    glColor3f(0.000f, 0.000f, 0.000f);
    glVertex3f(10.0, 24.0, -77.0);
    glVertex3f(18.0, 24.0, -77.0);
    glVertex3f(18.0, 24.0, -59.0);
    glVertex3f(10.0, 24.0, -59.0);
    glEnd();

    //bawah lemari
    glBegin(GL_QUADS);
    glColor3f(0.412f, 0.412f, 0.412f);
    glVertex3f(10.0, 0.0, -77.0);
    glVertex3f(18.0, 0.0, -77.0);
    glVertex3f(18.0, 0.0, -59.0);
    glVertex3f(10.0, 0.0, -59.0);
    glEnd();

    //GARIS
    glBegin(GL_LINE_LOOP);
    glColor3f(0.000f, 0.000f, 0.000f);
    glVertex3f(10.0, 0.0, -77.0);
    glVertex3f(18.0, 0.0, -77.0);
    glVertex3f(18.0, 0.0, -59.0);
    glVertex3f(10.0, 0.0, -59.0);
    glEnd();

}
void kursi()
{
    //ATAS
    glBegin(GL_POLYGON);
    glColor3f(0.502, 0.502, 0.000);
    glVertex3f(-39, 4, -61);
    glVertex3f(-39, 4, -70);
    glVertex3f(-30, 4, -70);
    glVertex3f(-30, 4, -61);
    glEnd();

    //ATAS LAGII
    glBegin(GL_POLYGON);
    glColor3f(0.502, 0.502, 0.000);
    glVertex3f(-39, 3, -61);
    glVertex3f(-39, 3, -70);
    glVertex3f(-30, 3, -70);
    glVertex3f(-30, 3, -61);
    glEnd();

    //ATAS DEPAN
    glBegin(GL_POLYGON);
    glColor3f(0.502, 0.502, 0.000);
    glVertex3f(-39, 4, -70);
    glVertex3f(-39, 3, -70);
    glVertex3f(-30, 3, -70);
    glVertex3f(-30, 4, -70);
    glEnd();

    //BELAKANG
    glBegin(GL_POLYGON);
    glColor3f(0.000, 0.502, 0.502);
    glVertex3f(-39.0, 4.0, -70.1);
    glVertex3f(-39.0, 12.0, -70.1);
    glVertex3f(-30.0, 12.0, -70.1);
    glVertex3f(-30.0, 4.0, -70.1);
    glEnd();

    //BELAKANG DEPAN
    glBegin(GL_POLYGON);
    glColor3f(0.502, 0.502, 0.000);
    glVertex3f(-39, 4, -61);
    glVertex3f(-39, 3, -61);
    glVertex3f(-30, 3, -61);
    glVertex3f(-30, 4, -61);
    glEnd();

    //BELAKANG LAGI
    glBegin(GL_POLYGON);
    glColor3f(0.000, 0.502, 0.502);
    glVertex3f(-39.0, 4.0, -69.1);
    glVertex3f(-39.0, 12.0, -69.1);
    glVertex3f(-30.0, 12.0, -69.1);
    glVertex3f(-30.0, 4.0, -69.1);
    glEnd();

    //BELAKANG ATAS
    glBegin(GL_QUADS);
    glColor3f(0.000, 0.502, 0.502);
    glVertex3f(-30, 12, -69);
    glVertex3f(-30, 12, -70.1);
    glVertex3f(-39, 12, -70.1);
    glVertex3f(-39, 12, -69);
    glEnd();

    //BELAKANG KIRI
    glBegin(GL_QUADS);
    glColor3f(0.000, 0.502, 0.502);
    glVertex3f(-39, 4, -69);
    glVertex3f(-39, 4, -70.1);
    glVertex3f(-39, 12, -70.1);
    glVertex3f(-39, 12, -69);
    glEnd();

    //BELAKANG KANAN
    glBegin(GL_QUADS);
    glColor3f(0.000, 0.502, 0.502);
    glVertex3f(-30, 4, -69);
    glVertex3f(-30, 4, -70.1);
    glVertex3f(-30, 12, -70.1);
    glVertex3f(-30, 12, -69);
    glEnd();

    //BELAKANG KIRI
    glBegin(GL_QUADS);
    glColor3f(0.000, 0.502, 0.502);
    glVertex3f(-30, 4, -69);
    glVertex3f(-30, 4, -70.1);
    glVertex3f(-30, 12, -70.1);
    glVertex3f(-30, 12, -69);
    glEnd();

    //KIRI
    glBegin(GL_QUADS);
    glColor3f(0.753, 0.753, 0.753);
    glVertex3f(-39, 0, -61);
    glVertex3f(-39, 0, -70);
    glVertex3f(-39, 8, -70);
    glVertex3f(-39, 8, -61);
    glEnd();

    //KIRI LAGI
    glBegin(GL_QUADS);
    glColor3f(0.753, 0.753, 0.753);
    glVertex3f(-40, 0, -61);
    glVertex3f(-40, 0, -70);
    glVertex3f(-40, 8, -70);
    glVertex3f(-40, 8, -61);
    glEnd();

    //ATAS KIRI
    glBegin(GL_QUADS);
    glColor3f(0.753, 0.753, 0.753);
    glVertex3f(-39, 8, -61);
    glVertex3f(-39, 8, -70);
    glVertex3f(-40, 8, -70);
    glVertex3f(-40, 8, -61);
    glEnd();

    //DEPAN KIRI
    glBegin(GL_QUADS);
    glColor3f(0.753, 0.753, 0.753);
    glVertex3f(-39, 0, -61);
    glVertex3f(-39, 8, -70);
    glVertex3f(-40, 8, -70);
    glVertex3f(-40, 0, -61);
    glEnd();

    //BELAKANG KIRI
    glBegin(GL_QUADS);
    glColor3f(0.753, 0.753, 0.753);
    glVertex3f(-39, 0, -70);
    glVertex3f(-39, 8, -70);
    glVertex3f(-40, 8, -70);
    glVertex3f(-40, 0, -70);
    glEnd();

    //KANAN
    glBegin(GL_QUADS);
    glColor3f(0.753, 0.753, 0.753);
    glVertex3f(-30, 0, -61);
    glVertex3f(-30, 0, -70);
    glVertex3f(-30, 8, -70);
    glVertex3f(-30, 8, -61);
    glEnd();

    //KANAN LAGI
    glBegin(GL_QUADS);
    glColor3f(0.753, 0.753, 0.753);
    glVertex3f(-29, 0, -61);
    glVertex3f(-29, 0, -70);
    glVertex3f(-29, 8, -70);
    glVertex3f(-29, 8, -61);
    glEnd();

    //ATAS KANAN
    glBegin(GL_QUADS);
    glColor3f(0.753, 0.753, 0.753);
    glVertex3f(-30, 8, -61);
    glVertex3f(-30, 8, -70);
    glVertex3f(-29, 8, -70);
    glVertex3f(-29, 8, -61);
    glEnd();

    //DEPAN KANAN
    glBegin(GL_QUADS);
    glColor3f(0.753, 0.753, 0.753);
    glVertex3f(-30, 0, -61);
    glVertex3f(-30, 8, -70);
    glVertex3f(-29, 8, -70);
    glVertex3f(-29, 0, -61);
    glEnd();

    //BELAKANG KIRI
    glBegin(GL_QUADS);
    glColor3f(0.753, 0.753, 0.753);
    glVertex3f(-29, 0, -70);
    glVertex3f(-29, 8, -70);
    glVertex3f(-30, 8, -70);
    glVertex3f(-30, 0, -70);
    glEnd();

    //bantal
    glBegin(GL_POLYGON);
    glColor3f(0.00, 0.63, 0.63);
    glVertex3f(-38, 4, -68.7);
    glVertex3f(-38, 10.2, -68.7);
    glVertex3f(-31, 10.2, -68.7);
    glVertex3f(-31, 4, -68.7);
    glEnd();
}
void meja()
{
    //atas
    glBegin(GL_POLYGON);
    glColor3f(0.545, 0.271, 0.075);
    glVertex3f(-50, 8, -48);
    glVertex3f(-50, 8, -58);
    glVertex3f(-20, 8, -58);
    glVertex3f(-20, 8, -48);
    glEnd();
    //GARIS
    glBegin(GL_LINE_LOOP);
    glColor3f(0.000f, 0.000f, 0.000f);
    glVertex3f(-50, 8, -48);
    glVertex3f(-50, 8, -58);
    glVertex3f(-20, 8, -58);
    glVertex3f(-20, 8, -48);
    glEnd();

    //kiri
    glBegin(GL_POLYGON);
    glColor3f(0.753, 0.753, 0.753);
    glVertex3f(-49.7, 0, -51);
    glVertex3f(-49.7, 0, -55);
    glVertex3f(-49.7, 8, -55);
    glVertex3f(-49.7, 8, -51);
    glEnd();
    //GARIS
    glBegin(GL_LINE_STRIP);
    glColor3f(0.000f, 0.000f, 0.000f);
    glVertex3f(-49.7, 0, -51);
    glVertex3f(-49.7, 8, -51);
    glVertex3f(-49.7, 8, -55);
    glVertex3f(-49.7, 0, -55);
    glEnd();

    //kanan
    glBegin(GL_POLYGON);
    glColor3f(0.753, 0.753, 0.753);
    glVertex3f(-20.7, 0, -51);
    glVertex3f(-20.7, 0, -55);
    glVertex3f(-20.7, 8, -55);
    glVertex3f(-20.7, 8, -51);
    glEnd();
    //GARIS
    glBegin(GL_LINE_STRIP);
    glColor3f(0.000f, 0.000f, 0.000f);
    glVertex3f(-20.7, 0, -51);
    glVertex3f(-20.7, 8, -51);
    glVertex3f(-20.7, 8, -55);
    glVertex3f(-20.7, 0, -55);
    glEnd();
}
void pintu_kelas()
{
    glBegin(GL_QUADS);//PINTU KELAS
    glColor3f(0.545f, 0.271f, 0.075f);
    glVertex3f(19.7, 0.0, -10.0);
    glVertex3f(19.7, 0.0, -40.0);
    glVertex3f(19.7, 30.0, -40.0);
    glVertex3f(19.7, 30.0, -10.0);
    glEnd();

    glBegin(GL_LINE_STRIP); // GARIS
    glColor3f(0.722f, 0.525f, 0.043f);
    glVertex3f(19.6, 0.0, -40.0);
    glVertex3f(19.6, 30.0, -40.0);
    glVertex3f(19.6, 30.0, -10.0);
    glVertex3f(19.6, 0.0, -10.0);
    glEnd();

    glBegin(GL_LINE_STRIP); //GARIS TENGAH PINTU
    glColor3f(0.722f, 0.525f, 0.043f);
    glVertex3f(19.6, 0.0, -25.0);
    glVertex3f(19.6, 30.0, -25.0);
    glVertex3f(19.6, 30.0, -25.0);
    glVertex3f(19.6, 0.0, -25.0);
    glEnd();

    //GAGANG PINTU KELAS
    glBegin(GL_POINTS);
    glColor3f(0.000f, 0.000f, 0.000f);
    glVertex3f(19.6, 15.0, -23.0);
    glVertex3f(19.6, 15.0, -27.0);
    glEnd();
}
void papan_tulis()
{
    glBegin(GL_QUADS);//PAPAN TULIS
    glColor3f(0.941f, 0.973f, 1.000f);
    glVertex3f(-60.0, 10.0, -77.0);
    glVertex3f(-60.0, 35.0, -77.0);
    glVertex3f(-10.0, 35.0, -77.0);
    glVertex3f(-10.0, 10.0, -77.0);
    glEnd();

    glBegin(GL_LINE_LOOP); // GARIS
    glColor3f(0.000f, 0.000f, 0.000f);
    glVertex3f(-60.0, 10.0, -76.9);
    glVertex3f(-60.0, 35.0, -76.9);
    glVertex3f(-10.0, 35.0, -76.9);
    glVertex3f(-10.0, 10.0, -76.9);
    glEnd();
}
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
    glRotatef(xrot, 1, 0, 0);
    glRotatef(yrot, 0, 1, 0);

    glBegin(GL_QUADS);//Halaman Universitas
    glColor3f(0.000, 0.392, 0.000);
    glVertex3f(-200.0, -1.0, -200.0);
    glColor3f(0.196, 0.804, 0.196);
    glVertex3f(-200.0, -1.0, 200.0);
    glColor3f(0.000, 0.502, 0.000);
    glVertex3f(500.0, -1.0, 200.0);
    glColor3f(0.000, 0.392, 0.000);
    glVertex3f(500.0, -1.0, -200.0);

    glEnd();
    glBegin(GL_LINE_LOOP);//Garis Halaman Universitas
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex3f(-200.0, -1.0, -200.0);
    glVertex3f(-200.0, -1.0, 200.0);
    glVertex3f(500.0, -1.0, 200.0);
    glVertex3f(500.0, -1.0, -200.0);
    glEnd();

    gedung_1();
    gedung_2();
    gedung_3();
    gedung_utama();
    garis_gedung_utama();
    tambahan_gedung_utama();
    garis_tambahan_gedung_utama();
    gedung_4();
    gedung_5();
    gedung_6();
    jendela();
    jendela_blkng();
    jendela_samping();
    bingkaijendela_1();
    bingkaijendela_2();
    bingkaijendela_3();
    bingkaijendela_utama();
    bingkaijendela_4();
    bingkaijendela_5();
    bingkaijendela_6();
    bingkaijendela_belakang();
    bingkaihorizontal_1();
    bingkaihorizontal_2();
    bingkaihorizontal_3();
    bingkaihorizontal_utama();
    bingkaihorizontal_4();
    bingkaihorizontal_5();
    bingkaihorizontal_6();
    bingkaihorizontalbelakang();
    bingkaihorizontalbelakangutama();
    jam();
    meja();
    kursi();
    papan_tulis();
    pintu_kelas();
    loker();



    glPopMatrix();
    glutSwapBuffers();
}

/*
tombol pada keyboard:
"a": ke kiri
"d": ke kanan
"w": ke depan
"s": ke belakang
"z" : ke atas
"x" : ke bawah
"i" : rotasi ke bawah terhadap sumbu X
"k" : rotasi ke atas terhadap sumbu X
"j" : rotasi ke kiri terhadap sumbu Y
"l" : rotasi ke kanan terhadap sumbu Y
"m" : rotasi ke kiri terhadap sumbu Z
"n" : rotasi ke kanan terhadap sumbu Z
"Q" : Melihat interior
*/
void keyboard(unsigned char key, int x, int y)
{
    switch (key)
    {
    case 'a':
    case 'A':
        glTranslatef(5.0, 0.0, 0.0);
        break;
    case 'd':
    case 'D':
        glTranslatef(-5.0, 0.0, 0.0);
        break;
    case 'z':
    case 'Z':
        glTranslatef(0.0, 5.0, 0.0);
        break;
    case 'x':
    case 'X':
        glTranslatef(0.0, -5.0, 0.0);
        break;
    case 'w':
    case 'W':
        glTranslatef(0.0, 0.0, 5.0);
        break;
    case 's':
    case 'S':
        glTranslatef(0.0, 0.0, -5.0);
        break;
    case 'i':
    case 'I':
        glRotatef(3.0, 1.0, 0.0, 0.0);
        break;
    case 'k':
    case 'K':
        glRotatef(-3.0, 1.0, 0.0, 0.0);
        break;
    case 'j':
    case 'J':
        glRotatef(3.0, 0.0, 1.0, 0.0);
        break;
    case 'l':
    case 'L':
        glRotatef(-3.0, 0.0, 1.0, 0.0);
        break;
    case 'm':
    case 'M':
        glRotatef(3.0, 0.0, 0.0, 1.0);
        break;
    case 'n':
    case 'N':
        glRotatef(-3.0, 0.0, 0.0, 1.0);
        break;
    case 'q':
    case 'Q':
        if (is_depth)
        {
            is_depth = 0;
            glDisable(GL_DEPTH_TEST);
        }
        else
        {
            is_depth = 1;
            glEnable(GL_DEPTH_TEST);
        }
    }
    display();
}

void resize(int width, int height)
{
    if (height == 0) height = 1;
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(100.0, width / height, 1.0, 1500.0);
    glTranslatef(0.0, -5.0, -150.0);
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(900, 900);
    glutInitWindowPosition(40, 40);
    glutCreateWindow("Fungsi Mouse dan Keyboardss");
    init();
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouseButton);
    glutMotionFunc(mouseMove);
    glutReshapeFunc(resize);
    glutMainLoop();
    return 0;
}
