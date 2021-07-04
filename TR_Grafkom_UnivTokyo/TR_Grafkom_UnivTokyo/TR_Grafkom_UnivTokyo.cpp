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
