#include <windows.h>
#ifdef _APPLE_
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>
#include <stdio.h>

void init(void);
void tampil(void);
void keyboard(unsigned char, int, int);
void ukuran(int, int);

int is_depth;
float xrot = 0.0f;
float yrot = 0.0f;
float xdiff = 0.0f;
float ydiff = 0.0f;
bool mouseDown = false;
void init(void)
{
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glEnable(GL_DEPTH_TEST);
    glMatrixMode(GL_MODELVIEW);
}

void tampil(void){
    double i,j;
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLineWidth(1.0);
    glPushMatrix();
    glRotatef(xrot, 1.0f, 0.0f, 0.0f);
    glRotatef(yrot, 0.0f, 1.0f, 0.0f);


    //===========LANTAI 4 ======

//-------------------------------------------------
    //kaca lt4 (depan)
    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(130, 138, 230);
    glVertex3d(27, 138, 230);
    glVertex3d(27, 140, 230);
    glVertex3d(130, 140, 230);
    glEnd();

  //kaca lt4 (1)
    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(28, 125, 230);
    glVertex3d(27, 125, 230);
    glVertex3d(27, 140, 230);
    glVertex3d(28, 140, 230);
    glEnd();

      //kaca lt4 (2)
    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(38, 125, 230);
    glVertex3d(37, 125, 230);
    glVertex3d(37, 140, 230);
    glVertex3d(38, 140, 230);
    glEnd();

         //kaca lt4 (3)
    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(48, 125, 230);
    glVertex3d(47, 125, 230);
    glVertex3d(47, 140, 230);
    glVertex3d(48, 140, 230);
    glEnd();

        //kaca lt4 (4)
    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(58, 125, 230);
    glVertex3d(57, 125, 230);
    glVertex3d(57, 140, 230);
    glVertex3d(58, 140, 230);
    glEnd();

        //kaca lt4 (5)
    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(68, 125, 230);
    glVertex3d(67, 125, 230);
    glVertex3d(67, 140, 230);
    glVertex3d(68, 140, 230);
    glEnd();

        //kaca lt4 (6)
    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(78, 125, 230);
    glVertex3d(77, 125, 230);
    glVertex3d(77, 140, 230);
    glVertex3d(78, 140, 230);
    glEnd();

        //kaca lt4 (7)
    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(88, 125, 230);
    glVertex3d(87, 125, 230);
    glVertex3d(87, 140, 230);
    glVertex3d(88, 140, 230);
    glEnd();

        //kaca lt4 (8)
    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(98, 125, 230);
    glVertex3d(97, 125, 230);
    glVertex3d(97, 140, 230);
    glVertex3d(98, 140, 230);
    glEnd();

        //kaca lt4 (9)
    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(108, 125, 230);
    glVertex3d(107, 125, 230);
    glVertex3d(107, 140, 230);
    glVertex3d(108, 140, 230);
    glEnd();

      //kaca lt4 (10)
    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(118, 125, 230);
    glVertex3d(117, 125, 230);
    glVertex3d(117, 140, 230);
    glVertex3d(118, 140, 230);
    glEnd();

     //kaca lt4 (11)
    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(130, 125, 230);
    glVertex3d(129, 125, 230);
    glVertex3d(129, 140, 230);
    glVertex3d(130, 140, 230);
    glEnd();

   //kaca lantai 4 (belakang)
    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(130, 138, -45);
    glVertex3d(27, 138, -45);
    glVertex3d(27, 140, -45);
    glVertex3d(130, 140, -45);
    glEnd();

    //kaca lt4 (1)
    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(28, 125, -45);
    glVertex3d(27, 125, -45);
    glVertex3d(27, 140, -45);
    glVertex3d(28, 140, -45);
    glEnd();

      //kaca lt4 (2)
    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(38, 125, -45);
    glVertex3d(37, 125, -45);
    glVertex3d(37, 140, -45);
    glVertex3d(38, 140, -45);
    glEnd();

       //kaca lt4 (3)
    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(48, 125, -45);
    glVertex3d(47, 125, -45);
    glVertex3d(47, 140, -45);
    glVertex3d(48, 140, -45);
    glEnd();

    //kaca lt4 (4)
    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(58, 125, -45);
    glVertex3d(57, 125, -45);
    glVertex3d(57, 140, -45);
    glVertex3d(58, 140, -45);
    glEnd();

       //kaca lt4 (5)
    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(68, 125, -45);
    glVertex3d(67, 125, -45);
    glVertex3d(67, 140, -45);
    glVertex3d(68, 140, -45);
    glEnd();

        //kaca lt4 (6)
    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(78, 125, -45);
    glVertex3d(77, 125, -45);
    glVertex3d(77, 140, -45);
    glVertex3d(78, 140, -45);
    glEnd();

          //kaca lt4 (7)
    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(88, 125, -45);
    glVertex3d(87, 125, -45);
    glVertex3d(87, 140, -45);
    glVertex3d(88, 140, -45);
    glEnd();

            //kaca lt4 (8)
    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(98, 125, -45);
    glVertex3d(97, 125, -45);
    glVertex3d(97, 140, -45);
    glVertex3d(98, 140, -45);
    glEnd();

          //kaca lt4 (9)
    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(108, 125, -45);
    glVertex3d(107, 125, -45);
    glVertex3d(107, 140, -45);
    glVertex3d(108, 140, -45);
    glEnd();

          //kaca lt4 (10)
    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(118, 125, -45);
    glVertex3d(117, 125, -45);
    glVertex3d(117, 140, -45);
    glVertex3d(118, 140, -45);
    glEnd();

    //kaca lt4 (11)
    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(130, 125, -45);
    glVertex3d(129, 125, -45);
    glVertex3d(129, 140, -45);
    glVertex3d(130, 140, -45);
    glEnd();

    //kaca lantai 4 (kiri)
    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(27, 138, 230);
    glVertex3d(27, 138, -45);
    glVertex3d(27, 140, -45);
    glVertex3d(27, 140, 230);
    glEnd();

    //kaca lantai 4 (1)
    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(28, 125, -35);
    glVertex3d(28, 125, -34);
    glVertex3d(28, 140, -34);
    glVertex3d(28, 140, -35);
    glEnd();

    //kaca lantai 4 (2)
    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(28, 125, -25);
    glVertex3d(28, 125, -24);
    glVertex3d(28, 140, -24);
    glVertex3d(28, 140, -25);
    glEnd();

     //kaca lantai 4 (3)
    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(28, 125, -15);
    glVertex3d(28, 125, -14);
    glVertex3d(28, 140, -14);
    glVertex3d(28, 140, -15);
    glEnd();

     //kaca lantai 4 (4)
    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(28, 125, -5);
    glVertex3d(28, 125, -4);
    glVertex3d(28, 140, -4);
    glVertex3d(28, 140, -5);
    glEnd();

         //kaca lantai 4 (5)
    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(28, 125, 5);
    glVertex3d(28, 125, 4);
    glVertex3d(28, 140, 4);
    glVertex3d(28, 140, 5);
    glEnd();

        //kaca lantai 4 (6)
    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(28, 125, 15);
    glVertex3d(28, 125, 14);
    glVertex3d(28, 140, 14);
    glVertex3d(28, 140, 15);
    glEnd();

        //kaca lantai 4 (7)
    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(28, 125, 25);
    glVertex3d(28, 125, 24);
    glVertex3d(28, 140, 24);
    glVertex3d(28, 140, 25);
    glEnd();

        //kaca lantai 4 (8)
    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(28, 125, 35);
    glVertex3d(28, 125, 34);
    glVertex3d(28, 140, 34);
    glVertex3d(28, 140, 35);
    glEnd();

        //kaca lantai 4 (9)
    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(28, 125, 45);
    glVertex3d(28, 125, 44);
    glVertex3d(28, 140, 44);
    glVertex3d(28, 140, 45);
    glEnd();

        //kaca lantai 4 (10)
    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(28, 125, 55);
    glVertex3d(28, 125, 54);
    glVertex3d(28, 140, 54);
    glVertex3d(28, 140, 55);
    glEnd();

        //kaca lantai 4 (11)
    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(28, 125, 65);
    glVertex3d(28, 125, 64);
    glVertex3d(28, 140, 64);
    glVertex3d(28, 140, 65);
    glEnd();

        //kaca lantai 4 (12)
    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(28, 125, 75);
    glVertex3d(28, 125, 74);
    glVertex3d(28, 140, 74);
    glVertex3d(28, 140, 75);
    glEnd();

        //kaca lantai 4 (13)
    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(28, 125, 85);
    glVertex3d(28, 125, 84);
    glVertex3d(28, 140, 84);
    glVertex3d(28, 140, 85);
    glEnd();

        //kaca lantai 4 (14)
    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(28, 125, 95);
    glVertex3d(28, 125, 94);
    glVertex3d(28, 140, 94);
    glVertex3d(28, 140, 95);
    glEnd();

        //kaca lantai 4 (15)
    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(28, 125, 105);
    glVertex3d(28, 125, 104);
    glVertex3d(28, 140, 104);
    glVertex3d(28, 140, 105);
    glEnd();

        //kaca lantai 4 (16)
    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(28, 125, 115);
    glVertex3d(28, 125, 114);
    glVertex3d(28, 140, 114);
    glVertex3d(28, 140, 115);
    glEnd();

        //kaca lantai 4 (17)
    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(28, 125, 125);
    glVertex3d(28, 125, 124);
    glVertex3d(28, 140, 124);
    glVertex3d(28, 140, 125);
    glEnd();

         //kaca lantai 4 (18)
    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(28, 125, 135);
    glVertex3d(28, 125, 134);
    glVertex3d(28, 140, 134);
    glVertex3d(28, 140, 135);
    glEnd();

        //kaca lantai 4 (19)
    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(28, 125, 145);
    glVertex3d(28, 125, 144);
    glVertex3d(28, 140, 144);
    glVertex3d(28, 140, 145);
    glEnd();

            //kaca lantai 4 (20)
    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(28, 125, 155);
    glVertex3d(28, 125, 154);
    glVertex3d(28, 140, 154);
    glVertex3d(28, 140, 155);
    glEnd();

        //kaca lantai 4 (21)
    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(28, 125, 165);
    glVertex3d(28, 125, 164);
    glVertex3d(28, 140, 164);
    glVertex3d(28, 140, 165);
    glEnd();

        //kaca lantai 4 (21)
    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(28, 125, 175);
    glVertex3d(28, 125, 174);
    glVertex3d(28, 140, 174);
    glVertex3d(28, 140, 175);
    glEnd();

       //kaca lantai 4 (22)
    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(28, 125, 185);
    glVertex3d(28, 125, 184);
    glVertex3d(28, 140, 184);
    glVertex3d(28, 140, 185);
    glEnd();

       //kaca lantai 4 (23)
    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(28, 125, 195);
    glVertex3d(28, 125, 194);
    glVertex3d(28, 140, 194);
    glVertex3d(28, 140, 195);
    glEnd();

       //kaca lantai 4 (24)
    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(28, 125, 205);
    glVertex3d(28, 125, 204);
    glVertex3d(28, 140, 204);
    glVertex3d(28, 140, 205);
    glEnd();

          //kaca lantai 4 (25)
    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(28, 125, 215);
    glVertex3d(28, 125, 214);
    glVertex3d(28, 140, 214);
    glVertex3d(28, 140, 215);
    glEnd();

           //kaca lantai 4 (26)
    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(28, 125, 225);
    glVertex3d(28, 125, 224);
    glVertex3d(28, 140, 224);
    glVertex3d(28, 140, 225);
    glEnd();


     //kaca lantai 4 (kanan)
    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(130, 138, 230);
    glVertex3d(130, 138, -45);
    glVertex3d(130, 140, -45);
    glVertex3d(130, 140, 230);
    glEnd();


    //kaca lt 4 (1)
        glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(130, 125, -35);
    glVertex3d(130, 125, -34);
    glVertex3d(130, 140, -34);
    glVertex3d(130, 140, -35);
    glEnd();

        //kaca lt 4 (2)
        glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(130, 125, -25);
    glVertex3d(130, 125, -24);
    glVertex3d(130, 140, -24);
    glVertex3d(130, 140, -25);
    glEnd();

        //kaca lt 4 (3)
        glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(130, 125, -15);
    glVertex3d(130, 125, -14);
    glVertex3d(130, 140, -14);
    glVertex3d(130, 140, -15);
    glEnd();

        //kaca lt 4 (4)
        glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(130, 125, -5);
    glVertex3d(130, 125, -4);
    glVertex3d(130, 140, -4);
    glVertex3d(130, 140, -5);
    glEnd();

        //kaca lt 4 (5)
        glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(130, 125, 5);
    glVertex3d(130, 125, 4);
    glVertex3d(130, 140, 4);
    glVertex3d(130, 140, 5);
    glEnd();

        //kaca lt 4 (6)
        glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(130, 125, 15);
    glVertex3d(130, 125, 14);
    glVertex3d(130, 140, 14);
    glVertex3d(130, 140, 15);
    glEnd();

        //kaca lt 4 (7)
        glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(130, 125, 25);
    glVertex3d(130, 125, 24);
    glVertex3d(130, 140, 24);
    glVertex3d(130, 140, 25);
    glEnd();

        //kaca lt 4 (8)
        glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(130, 125, 35);
    glVertex3d(130, 125, 34);
    glVertex3d(130, 140, 34);
    glVertex3d(130, 140, 35);
    glEnd();

        //kaca lt 4 (9)
        glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(130, 125, 45);
    glVertex3d(130, 125, 44);
    glVertex3d(130, 140, 44);
    glVertex3d(130, 140, 45);
    glEnd();

        //kaca lt 4 (10)
        glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(130, 125, 55);
    glVertex3d(130, 125, 54);
    glVertex3d(130, 140, 54);
    glVertex3d(130, 140, 55);
    glEnd();

        //kaca lt 4 (11)
        glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(130, 125, 65);
    glVertex3d(130, 125, 64);
    glVertex3d(130, 140, 64);
    glVertex3d(130, 140, 65);
    glEnd();

        //kaca lt 4 (12)
        glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(130, 125, 75);
    glVertex3d(130, 125, 74);
    glVertex3d(130, 140, 74);
    glVertex3d(130, 140, 75);
    glEnd();

        //kaca lt 4 (13)
        glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(130, 125, 85);
    glVertex3d(130, 125, 84);
    glVertex3d(130, 140, 84);
    glVertex3d(130, 140, 85);
    glEnd();

        //kaca lt 4 (14)
        glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(130, 125, 95);
    glVertex3d(130, 125, 94);
    glVertex3d(130, 140, 94);
    glVertex3d(130, 140, 95);
    glEnd();

        //kaca lt 4 (15)
        glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(130, 125, 105);
    glVertex3d(130, 125, 104);
    glVertex3d(130, 140, 104);
    glVertex3d(130, 140, 105);
    glEnd();

         //kaca lt 4 (16)
        glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(130, 125, 115);
    glVertex3d(130, 125, 114);
    glVertex3d(130, 140, 114);
    glVertex3d(130, 140, 115);
    glEnd();
            //kaca lt 4 (17)
        glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(130, 125, 125);
    glVertex3d(130, 125, 124);
    glVertex3d(130, 140, 124);
    glVertex3d(130, 140, 125);
    glEnd();
        //kaca lt 4 (18)
        glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(130, 125, 135);
    glVertex3d(130, 125, 134);
    glVertex3d(130, 140, 134);
    glVertex3d(130, 140, 135);
    glEnd();

         //kaca lt 4 (19)
        glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(130, 125, 145);
    glVertex3d(130, 125, 144);
    glVertex3d(130, 140, 144);
    glVertex3d(130, 140, 145);
    glEnd();
            //kaca lt 4 (20)
        glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(130, 125, 155);
    glVertex3d(130, 125, 154);
    glVertex3d(130, 140, 154);
    glVertex3d(130, 140, 155);
    glEnd();
              //kaca lt 4 (21)
        glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(130, 125, 165);
    glVertex3d(130, 125, 164);
    glVertex3d(130, 140, 164);
    glVertex3d(130, 140, 165);
    glEnd();
             //kaca lt 4 (22)
        glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(130, 125, 175);
    glVertex3d(130, 125, 174);
    glVertex3d(130, 140, 174);
    glVertex3d(130, 140, 175);
    glEnd();
             //kaca lt 4 (23)
        glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(130, 125, 185);
    glVertex3d(130, 125, 184);
    glVertex3d(130, 140, 184);
    glVertex3d(130, 140, 185);
    glEnd();
             //kaca lt 4 (24)
        glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(130, 125, 195);
    glVertex3d(130, 125, 194);
    glVertex3d(130, 140, 194);
    glVertex3d(130, 140, 195);
    glEnd();
             //kaca lt 4 (25)
        glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(130, 125, 205);
    glVertex3d(130, 125, 204);
    glVertex3d(130, 140, 204);
    glVertex3d(130, 140, 205);
    glEnd();
             //kaca lt 4 (26)
        glBegin(GL_POLYGON);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3d(130, 125, 215);
    glVertex3d(130, 125, 214);
    glVertex3d(130, 140, 214);
    glVertex3d(130, 140, 215);
    glEnd();

////-----------------DIULANG------------------------

    //bangunan lantai 4 (depan)
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.8, 0.8);
    glVertex3d(30, 125, 225);
    glVertex3d(125, 125, 225);
    glVertex3d(125, 320, 225);
    glVertex3d(30, 320, 225);
    glEnd();

    //bangunan lantai 4 (kanan)
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.8, 0.8);
    glVertex3d(125, 125, 225);
    glVertex3d(125, 125, -40);
    glVertex3d(125, 320, -40);
    glVertex3d(125, 320, 225);
    glEnd();

    //bangunan lantai 4 (kanan)
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.8, 0.8);
    glVertex3d(30, 125, -40);
    glVertex3d(30, 125, 225);
    glVertex3d(30, 320, 225);
    glVertex3d(30, 320, -40);
    glEnd();

    //bangunan lt4 (belakang)
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.8, 0.8);
    glVertex3d(125, 125, -40);
    glVertex3d(30, 125, -40);
    glVertex3d(30, 320, -40);
    glVertex3d(125, 320, -40);
    glEnd();


    //---------------------DIULANG--------------------------

    //jendela (1.1)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(53, 135, 226);
    glVertex3d(42, 135, 226);
    glVertex3d(42, 145, 226);
    glVertex3d(53, 145, 226);
    glEnd();

    //jendela (2.1)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(64, 135, 226);
    glVertex3d(66, 135, 226);
    glVertex3d(66, 145, 226);
    glVertex3d(64, 145, 226);
    glEnd();

    //jendela (3.1)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(80, 135, 226);
    glVertex3d(78, 135, 226);
    glVertex3d(78, 145, 226);
    glVertex3d(80, 145, 226);
    glEnd();

    //jendela (4.1)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(92, 135, 226);
    glVertex3d(90, 135, 226);
    glVertex3d(90, 145, 226);
    glVertex3d(92, 145, 226);
    glEnd();

     //jendela (5.1)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(113, 135, 226);
    glVertex3d(102, 135, 226);
    glVertex3d(102, 145, 226);
    glVertex3d(113, 145, 226);
    glEnd();

    //jendela (1.2)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(53, 155, 226);
    glVertex3d(42, 155, 226);
    glVertex3d(42, 165, 226);
    glVertex3d(53, 165, 226);
    glEnd();

    //jendela (2.2)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(64, 155, 226);
    glVertex3d(66, 155, 226);
    glVertex3d(66, 165, 226);
    glVertex3d(64, 165, 226);
    glEnd();

    //jendela (3.2)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(80, 155, 226);
    glVertex3d(78, 155, 226);
    glVertex3d(78, 165, 226);
    glVertex3d(80, 165, 226);
    glEnd();

    //jendela (4.2)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(92, 155, 226);
    glVertex3d(90, 155, 226);
    glVertex3d(90, 165, 226);
    glVertex3d(92, 165, 226);
    glEnd();

     //jendela (5.2)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(113, 155, 226);
    glVertex3d(102, 155, 226);
    glVertex3d(102, 165, 226);
    glVertex3d(113, 165, 226);
    glEnd();

        //jendela (1.3)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(53, 175, 226);
    glVertex3d(42, 175, 226);
    glVertex3d(42, 185, 226);
    glVertex3d(53, 185, 226);
    glEnd();

    //jendela (2.3)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(64, 175, 226);
    glVertex3d(66, 175, 226);
    glVertex3d(66, 185, 226);
    glVertex3d(64, 185, 226);
    glEnd();

    //jendela (3.3)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(80, 175, 226);
    glVertex3d(78, 175, 226);
    glVertex3d(78, 185, 226);
    glVertex3d(80, 185, 226);
    glEnd();

    //jendela (4.3)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(92, 175, 226);
    glVertex3d(90, 175, 226);
    glVertex3d(90, 185, 226);
    glVertex3d(92, 185, 226);
    glEnd();

     //jendela (5.3)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(113, 175, 226);
    glVertex3d(102, 175, 226);
    glVertex3d(102, 185, 226);
    glVertex3d(113, 185, 226);
    glEnd();

    //jendela (1.4)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(53, 195, 226);
    glVertex3d(42, 195, 226);
    glVertex3d(42, 205, 226);
    glVertex3d(53, 205, 226);
    glEnd();

    //jendela (2.4)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(64, 195, 226);
    glVertex3d(66, 195, 226);
    glVertex3d(66, 205, 226);
    glVertex3d(64, 205, 226);
    glEnd();

    //jendela (3.4)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(80, 195, 226);
    glVertex3d(78, 195, 226);
    glVertex3d(78, 205, 226);
    glVertex3d(80, 205, 226);
    glEnd();

    //jendela (4.4)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(92, 195, 226);
    glVertex3d(90, 195, 226);
    glVertex3d(90, 205, 226);
    glVertex3d(92, 205, 226);
    glEnd();

     //jendela (5.4)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(113, 195, 226);
    glVertex3d(102, 195, 226);
    glVertex3d(102, 205, 226);
    glVertex3d(113, 205, 226);
    glEnd();

    //jendela (1.5)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(53, 215, 226);
    glVertex3d(42, 215, 226);
    glVertex3d(42, 225, 226);
    glVertex3d(53, 225, 226);
    glEnd();

    //jendela (2.5)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(64, 215, 226);
    glVertex3d(66, 215, 226);
    glVertex3d(66, 225, 226);
    glVertex3d(64, 225, 226);
    glEnd();

    //jendela (3.5)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(80, 215, 226);
    glVertex3d(78, 215, 226);
    glVertex3d(78, 225, 226);
    glVertex3d(80, 225, 226);
    glEnd();

    //jendela (4.5)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(92, 215, 226);
    glVertex3d(90, 215, 226);
    glVertex3d(90, 225, 226);
    glVertex3d(92, 225, 226);
    glEnd();

     //jendela (5.5)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(113, 215, 226);
    glVertex3d(102, 215, 226);
    glVertex3d(102, 225, 226);
    glVertex3d(113, 225, 226);
    glEnd();

    //jendela (1.6)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(53, 235, 226);
    glVertex3d(42, 235, 226);
    glVertex3d(42, 245, 226);
    glVertex3d(53, 245, 226);
    glEnd();

    //jendela (2.6)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(64, 235, 226);
    glVertex3d(66, 235, 226);
    glVertex3d(66, 245, 226);
    glVertex3d(64, 245, 226);
    glEnd();

    //jendela (3.6)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(80, 235, 226);
    glVertex3d(78, 235, 226);
    glVertex3d(78, 245, 226);
    glVertex3d(80, 245, 226);
    glEnd();

    //jendela (4.6)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(92, 235, 226);
    glVertex3d(90, 235, 226);
    glVertex3d(90, 245, 226);
    glVertex3d(92, 245, 226);
    glEnd();

     //jendela (5.6)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(113, 235, 226);
    glVertex3d(102, 235, 226);
    glVertex3d(102, 245, 226);
    glVertex3d(113, 245, 226);
    glEnd();

    //jendela (1.7)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(53, 255, 226);
    glVertex3d(42, 255, 226);
    glVertex3d(42, 265, 226);
    glVertex3d(53, 265, 226);
    glEnd();

    //jendela (2.7)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(64, 255, 226);
    glVertex3d(66, 255, 226);
    glVertex3d(66, 265, 226);
    glVertex3d(64, 265, 226);
    glEnd();

    //jendela (3.7)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(80, 255, 226);
    glVertex3d(78, 255, 226);
    glVertex3d(78, 265, 226);
    glVertex3d(80, 265, 226);
    glEnd();

    //jendela (4.7)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(92, 255, 226);
    glVertex3d(90, 255, 226);
    glVertex3d(90, 265, 226);
    glVertex3d(92, 265, 226);
    glEnd();

     //jendela (5.7)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(113, 255, 226);
    glVertex3d(102, 255, 226);
    glVertex3d(102, 265, 226);
    glVertex3d(113, 265, 226);
    glEnd();

    //jendela (1.8)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(53, 275, 226);
    glVertex3d(42, 275, 226);
    glVertex3d(42, 285, 226);
    glVertex3d(53, 285, 226);
    glEnd();

    //jendela (2.8)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(64, 275, 226);
    glVertex3d(66, 275, 226);
    glVertex3d(66, 285, 226);
    glVertex3d(64, 285, 226);
    glEnd();

    //jendela (3.8)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(80, 275, 226);
    glVertex3d(78, 275, 226);
    glVertex3d(78, 285, 226);
    glVertex3d(80, 285, 226);
    glEnd();

    //jendela (4.8)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(92, 275, 226);
    glVertex3d(90, 275, 226);
    glVertex3d(90, 285, 226);
    glVertex3d(92, 285, 226);
    glEnd();

     //jendela (5.8)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(113, 275, 226);
    glVertex3d(102, 275, 226);
    glVertex3d(102, 285, 226);
    glVertex3d(113, 285, 226);
    glEnd();

    //jendela (1.9)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(53, 295, 226);
    glVertex3d(42, 295, 226);
    glVertex3d(42, 305, 226);
    glVertex3d(53, 305, 226);
    glEnd();

    //jendela (2.9)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(64, 295, 226);
    glVertex3d(66, 295, 226);
    glVertex3d(66, 305, 226);
    glVertex3d(64, 305, 226);
    glEnd();

    //jendela (3.9)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(80, 295, 226);
    glVertex3d(78, 295, 226);
    glVertex3d(78, 305, 226);
    glVertex3d(80, 305, 226);
    glEnd();

    //jendela (4.9)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(92, 295, 226);
    glVertex3d(90, 295, 226);
    glVertex3d(90, 305, 226);
    glVertex3d(92, 305, 226);
    glEnd();

     //jendela (5.9)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(113, 295, 226);
    glVertex3d(102, 295, 226);
    glVertex3d(102, 305, 226);
    glVertex3d(113, 305, 226);
    glEnd();


    //-------------------------------

    //ijoijobangunan (atasdepan)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.8, 0.0);
    glVertex3d(30, 310, 230);
    glVertex3d(125, 310, 230);
    glVertex3d(125, 320, 230);
    glVertex3d(30, 320, 230);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3d(40, 310, 230);
    glVertex3d(115, 310, 230);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3d(40, 310, 230);
    glVertex3d(40, 130, 230);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3d(30, 320, -40);
    glVertex3d(30, 130, -40);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3d(125, 320, -40);
    glVertex3d(125, 130, -40);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3d(30, 320, 230);
    glVertex3d(30, 130, 230);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3d(115, 310, 230);
    glVertex3d(115, 130, 230);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3d(125, 320, 230);
    glVertex3d(125, 130, 230);
    glEnd();
    //ijoijobangunan (atasatas)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.8, 0.0);
    glVertex3d(30, 320, 230);
    glVertex3d(125, 320, 230);
    glVertex3d(125, 320, 225);
    glVertex3d(30, 320, 225);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3d(30, 320, 230);
    glVertex3d(125, 320, 230);
    glVertex3d(125, 320, 225);
    glVertex3d(30, 320, 225);
    glEnd();

    //ijoijobangunan (atasbawah)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.8, 0.0);
    glVertex3d(30, 310, 230);
    glVertex3d(125, 310, 230);
    glVertex3d(125, 310, 225);
    glVertex3d(30, 310, 225);
    glEnd();

    //ijoijobangunan (depankiri)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.8, 0.0);
    glVertex3d(30, 125, 230);
    glVertex3d(40, 125, 230);
    glVertex3d(40, 320, 230);
    glVertex3d(30, 320, 230);
    glEnd();

        //ijoijobangunan lantai 4 bag kiri (kiri)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.8, 0.0);
    glVertex3d(30, 125, 230);
    glVertex3d(30, 125, 225);
    glVertex3d(30, 320, 225);
    glVertex3d(30, 320, 230);
    glEnd();

    //ijoijobangunan lantai 4 bag kanan (kiri)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.8, 0.0);
    glVertex3d(40, 125, 230);
    glVertex3d(40, 125, 225);
    glVertex3d(40, 320, 225);
    glVertex3d(40, 320, 230);
    glEnd();

     //ijoijobangunan (depankanan)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.8, 0.0);
    glVertex3d(125, 125, 230);
    glVertex3d(115, 125, 230);
    glVertex3d(115, 320, 230);
    glVertex3d(125, 320, 230);
    glEnd();

    //ijoijobangunan lantai 4 bag kanan (kanan)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.8, 0.0);
    glVertex3d(115, 125, 230);
    glVertex3d(115, 125, 225);
    glVertex3d(115, 320, 225);
    glVertex3d(115, 320, 230);
    glEnd();

    //ijoijobangunan lantai 4 bag kiri (kanan)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.8, 0.0);
    glVertex3d(125, 125, 230);
    glVertex3d(125, 125, 225);
    glVertex3d(125, 320, 225);
    glVertex3d(125, 320, 230);
    glEnd();


////====aksesoris kanan============================================

    //aksesoris tembok putih (kanandepan)
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3d(135, 130, 130);
    glVertex3d(135, 130, 120);
    glVertex3d(135, 320, 120);
    glVertex3d(135, 320, 130);
    glEnd();

    //aksesoris tembok sambung (kanan deoan)
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3d(135, 130, 130);
    glVertex3d(130, 130, 130);
    glVertex3d(130, 320, 130);
    glVertex3d(135, 320, 130);
    glEnd();

    //aksesoris tembok sambung (kanan belakang)
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3d(130, 130, 120);
    glVertex3d(135, 130, 120);
    glVertex3d(135, 320, 120);
    glVertex3d(130, 320, 120);
    glEnd();

    //aksesoris jendela (kanan1.1)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 135, 190);
    glVertex3d(126, 135, 175);
    glVertex3d(126, 145, 175);
    glVertex3d(126, 145, 190);
    glEnd();

        //aksesoris jendela (kanan1.1)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 135, 188);
    glVertex3d(127, 135, 187);
    glVertex3d(127, 145, 187);
    glVertex3d(127, 145, 188);
    glEnd();

     //aksesoris jendela (kanan1.1)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 135, 178);
    glVertex3d(127, 135, 177);
    glVertex3d(127, 145, 177);
    glVertex3d(127, 145, 178);
    glEnd();

    //aksesoris jendela (kanan2.1)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 135, 165);
    glVertex3d(126, 135, 163);
    glVertex3d(126, 145, 163);
    glVertex3d(126, 145, 165);
    glEnd();

    //aksesoris jendela (kanan3.1)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 135, 150);
    glVertex3d(126, 135, 135);
    glVertex3d(126, 145, 135);
    glVertex3d(126, 145, 150);
    glEnd();

    //aksesoris jendela (kanan3.1)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 135, 148);
    glVertex3d(127, 135, 147);
    glVertex3d(127, 145, 147);
    glVertex3d(127, 145, 148);
    glEnd();

    //aksesoris jendela (kanan3.1)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 135, 137);
    glVertex3d(127, 135, 138);
    glVertex3d(127, 145, 138);
    glVertex3d(127, 145, 137);
    glEnd();

      //---------------

    //aksesoris jendela (kanan1.2)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 155, 190);
    glVertex3d(126, 155, 175);
    glVertex3d(126, 165, 175);
    glVertex3d(126, 165, 190);
    glEnd();

        //aksesoris jendela (kanan1.2)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 155, 188);
    glVertex3d(127, 155, 187);
    glVertex3d(127, 165, 187);
    glVertex3d(127, 165, 188);
    glEnd();

     //aksesoris jendela (kanan1.2)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 155, 178);
    glVertex3d(127, 155, 177);
    glVertex3d(127, 165, 177);
    glVertex3d(127, 165, 178);
    glEnd();

    //aksesoris jendela (kanan2.2)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 155, 165);
    glVertex3d(126, 155, 163);
    glVertex3d(126, 165, 163);
    glVertex3d(126, 165, 165);
    glEnd();

    //aksesoris jendela (kanan3.2)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 155, 150);
    glVertex3d(126, 155, 135);
    glVertex3d(126, 165, 135);
    glVertex3d(126, 165, 150);
    glEnd();

    //aksesoris jendela (kanan3.2)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 155, 148);
    glVertex3d(127, 155, 147);
    glVertex3d(127, 165, 147);
    glVertex3d(127, 165, 148);
    glEnd();

    //aksesoris jendela (kanan3.2)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 155, 137);
    glVertex3d(127, 155, 138);
    glVertex3d(127, 165, 138);
    glVertex3d(127, 165, 137);
    glEnd();

    //-------------------

        //aksesoris jendela (kanan1.3)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 175, 190);
    glVertex3d(126, 175, 175);
    glVertex3d(126, 185, 175);
    glVertex3d(126, 185, 190);
    glEnd();

        //aksesoris jendela (kanan1.3)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 175, 188);
    glVertex3d(127, 175, 187);
    glVertex3d(127, 185, 187);
    glVertex3d(127, 185, 188);
    glEnd();

     //aksesoris jendela (kanan1.3)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 175, 178);
    glVertex3d(127, 175, 177);
    glVertex3d(127, 185, 177);
    glVertex3d(127, 185, 178);
    glEnd();

    //aksesoris jendela (kanan2.3)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 175, 165);
    glVertex3d(126, 175, 163);
    glVertex3d(126, 185, 163);
    glVertex3d(126, 185, 165);
    glEnd();

    //aksesoris jendela (kanan3.3)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 175, 150);
    glVertex3d(126, 175, 135);
    glVertex3d(126, 185, 135);
    glVertex3d(126, 185, 150);
    glEnd();

    //aksesoris jendela (kanan3.3)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 175, 148);
    glVertex3d(127, 175, 147);
    glVertex3d(127, 185, 147);
    glVertex3d(127, 185, 148);
    glEnd();

    //aksesoris jendela (kanan3.3)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 175, 137);
    glVertex3d(127, 175, 138);
    glVertex3d(127, 185, 138);
    glVertex3d(127, 185, 137);
    glEnd();

        //-------------------

        //aksesoris jendela (kanan1.4)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 195, 190);
    glVertex3d(126, 195, 175);
    glVertex3d(126, 205, 175);
    glVertex3d(126, 205, 190);
    glEnd();

        //aksesoris jendela (kanan1.4)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 195, 188);
    glVertex3d(127, 195, 187);
    glVertex3d(127, 205, 187);
    glVertex3d(127, 205, 188);
    glEnd();

     //aksesoris jendela (kanan1.4)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 195, 178);
    glVertex3d(127, 195, 177);
    glVertex3d(127, 205, 177);
    glVertex3d(127, 205, 178);
    glEnd();

    //aksesoris jendela (kanan2.4)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 195, 165);
    glVertex3d(126, 195, 163);
    glVertex3d(126, 205, 163);
    glVertex3d(126, 205, 165);
    glEnd();

    //aksesoris jendela (kanan3.4)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 195, 150);
    glVertex3d(126, 195, 135);
    glVertex3d(126, 205, 135);
    glVertex3d(126, 205, 150);
    glEnd();

    //aksesoris jendela (kanan3.4)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 195, 148);
    glVertex3d(127, 195, 147);
    glVertex3d(127, 205, 147);
    glVertex3d(127, 205, 148);
    glEnd();

    //aksesoris jendela (kanan3.4)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 195, 137);
    glVertex3d(127, 195, 138);
    glVertex3d(127, 205, 138);
    glVertex3d(127, 205, 137);
    glEnd();

            //-------------------

        //aksesoris jendela (kanan1.5)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 215, 190);
    glVertex3d(126, 215, 175);
    glVertex3d(126, 225, 175);
    glVertex3d(126, 225, 190);
    glEnd();

        //aksesoris jendela (kanan1.5)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 215, 188);
    glVertex3d(127, 215, 187);
    glVertex3d(127, 225, 187);
    glVertex3d(127, 225, 188);
    glEnd();

     //aksesoris jendela (kanan1.5)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 215, 178);
    glVertex3d(127, 215, 177);
    glVertex3d(127, 225, 177);
    glVertex3d(127, 225, 178);
    glEnd();

    //aksesoris jendela (kanan2.5)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 215, 165);
    glVertex3d(126, 215, 163);
    glVertex3d(126, 225, 163);
    glVertex3d(126, 225, 165);
    glEnd();

    //aksesoris jendela (kanan3.5)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 215, 150);
    glVertex3d(126, 215, 135);
    glVertex3d(126, 225, 135);
    glVertex3d(126, 225, 150);
    glEnd();

    //aksesoris jendela (kanan3.5)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 215, 148);
    glVertex3d(127, 215, 147);
    glVertex3d(127, 225, 147);
    glVertex3d(127, 225, 148);
    glEnd();

    //aksesoris jendela (kanan3.5)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 215, 137);
    glVertex3d(127, 215, 138);
    glVertex3d(127, 225, 138);
    glVertex3d(127, 225, 137);
    glEnd();

              //-------------------

        //aksesoris jendela (kanan1.6)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 235, 190);
    glVertex3d(126, 235, 175);
    glVertex3d(126, 245, 175);
    glVertex3d(126, 245, 190);
    glEnd();

        //aksesoris jendela (kanan1.6)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 235, 188);
    glVertex3d(127, 235, 187);
    glVertex3d(127, 245, 187);
    glVertex3d(127, 245, 188);
    glEnd();

     //aksesoris jendela (kanan1.6)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 235, 178);
    glVertex3d(127, 235, 177);
    glVertex3d(127, 245, 177);
    glVertex3d(127, 245, 178);
    glEnd();

    //aksesoris jendela (kanan2.6)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 235, 165);
    glVertex3d(126, 235, 163);
    glVertex3d(126, 245, 163);
    glVertex3d(126, 245, 165);
    glEnd();

    //aksesoris jendela (kanan3.6)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 235, 150);
    glVertex3d(126, 235, 135);
    glVertex3d(126, 245, 135);
    glVertex3d(126, 245, 150);
    glEnd();

    //aksesoris jendela (kanan3.6)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 235, 148);
    glVertex3d(127, 235, 147);
    glVertex3d(127, 245, 147);
    glVertex3d(127, 245, 148);
    glEnd();

    //aksesoris jendela (kanan3.6)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 235, 137);
    glVertex3d(127, 235, 138);
    glVertex3d(127, 245, 138);
    glVertex3d(127, 245, 137);
    glEnd();

                  //-------------------

        //aksesoris jendela (kanan1.7)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 255, 190);
    glVertex3d(126, 255, 175);
    glVertex3d(126, 265, 175);
    glVertex3d(126, 265, 190);
    glEnd();

        //aksesoris jendela (kanan1.7)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 255, 188);
    glVertex3d(127, 255, 187);
    glVertex3d(127, 265, 187);
    glVertex3d(127, 265, 188);
    glEnd();

     //aksesoris jendela (kanan1.7)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 255, 178);
    glVertex3d(127, 255, 177);
    glVertex3d(127, 265, 177);
    glVertex3d(127, 265, 178);
    glEnd();

    //aksesoris jendela (kanan2.7)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 255, 165);
    glVertex3d(126, 255, 163);
    glVertex3d(126, 265, 163);
    glVertex3d(126, 265, 165);
    glEnd();

    //aksesoris jendela (kanan3.7)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 255, 150);
    glVertex3d(126, 255, 135);
    glVertex3d(126, 265, 135);
    glVertex3d(126, 265, 150);
    glEnd();

    //aksesoris jendela (kanan3.7)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 255, 148);
    glVertex3d(127, 255, 147);
    glVertex3d(127, 265, 147);
    glVertex3d(127, 265, 148);
    glEnd();

    //aksesoris jendela (kanan3.7)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 255, 137);
    glVertex3d(127, 255, 138);
    glVertex3d(127, 265, 138);
    glVertex3d(127, 265, 137);
    glEnd();


                      //-------------------

        //aksesoris jendela (kanan1.8)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 275, 190);
    glVertex3d(126, 275, 175);
    glVertex3d(126, 285, 175);
    glVertex3d(126, 285, 190);
    glEnd();

        //aksesoris jendela (kanan1.8)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 275, 188);
    glVertex3d(127, 275, 187);
    glVertex3d(127, 285, 187);
    glVertex3d(127, 285, 188);
    glEnd();

     //aksesoris jendela (kanan1.8)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 275, 178);
    glVertex3d(127, 275, 177);
    glVertex3d(127, 285, 177);
    glVertex3d(127, 285, 178);
    glEnd();

    //aksesoris jendela (kanan2.8)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 275, 165);
    glVertex3d(126, 275, 163);
    glVertex3d(126, 285, 163);
    glVertex3d(126, 285, 165);
    glEnd();

    //aksesoris jendela (kanan3.8)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 275, 150);
    glVertex3d(126, 275, 135);
    glVertex3d(126, 285, 135);
    glVertex3d(126, 285, 150);
    glEnd();

    //aksesoris jendela (kanan3.8)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 275, 148);
    glVertex3d(127, 275, 147);
    glVertex3d(127, 285, 147);
    glVertex3d(127, 285, 148);
    glEnd();

    //aksesoris jendela (kanan3.8)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 275, 137);
    glVertex3d(127, 275, 138);
    glVertex3d(127, 285, 138);
    glVertex3d(127, 285, 137);
    glEnd();

                          //-------------------

        //aksesoris jendela (kanan1.9)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 295, 190);
    glVertex3d(126, 295, 175);
    glVertex3d(126, 305, 175);
    glVertex3d(126, 305, 190);
    glEnd();

        //aksesoris jendela (kanan1.9)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 295, 188);
    glVertex3d(127, 295, 187);
    glVertex3d(127, 305, 187);
    glVertex3d(127, 305, 188);
    glEnd();

     //aksesoris jendela (kanan1.9)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 295, 178);
    glVertex3d(127, 295, 177);
    glVertex3d(127, 305, 177);
    glVertex3d(127, 305, 178);
    glEnd();

    //aksesoris jendela (kanan2.9)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 295, 165);
    glVertex3d(126, 295, 163);
    glVertex3d(126, 305, 163);
    glVertex3d(126, 305, 165);
    glEnd();

    //aksesoris jendela (kanan3.9)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 295, 150);
    glVertex3d(126, 295, 135);
    glVertex3d(126, 305, 135);
    glVertex3d(126, 305, 150);
    glEnd();

    //aksesoris jendela (kanan3.9)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 295, 148);
    glVertex3d(127, 295, 147);
    glVertex3d(127, 305, 147);
    glVertex3d(127, 305, 148);
    glEnd();

    //aksesoris jendela (kanan3.9)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 295, 137);
    glVertex3d(127, 295, 138);
    glVertex3d(127, 305, 138);
    glVertex3d(127, 305, 137);
    glEnd();

 //----------kanan setlah putih putih-----------------------------

    //jendela setelah putih (kanan1.1)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 135, 117);
    glVertex3d(126, 135, 107);
    glVertex3d(126, 145, 107);
    glVertex3d(126, 145, 117);
    glEnd();

    //jendela setelah putih (kanan1.2)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 155, 117);
    glVertex3d(126, 155, 107);
    glVertex3d(126, 165, 107);
    glVertex3d(126, 165, 117);
    glEnd();

    //jendela setelah putih (kanan1.3)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 175, 117);
    glVertex3d(126, 175, 107);
    glVertex3d(126, 185, 107);
    glVertex3d(126, 185, 117);
    glEnd();

    //jendela setelah putih (kanan1.4)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 195, 117);
    glVertex3d(126, 195, 107);
    glVertex3d(126, 205, 107);
    glVertex3d(126, 205, 117);
    glEnd();

    //jendela setelah putih (kanan1.5)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 215, 117);
    glVertex3d(126, 215, 107);
    glVertex3d(126, 225, 107);
    glVertex3d(126, 225, 117);
    glEnd();

    //jendela setelah putih (kanan1.6)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 235, 117);
    glVertex3d(126, 235, 107);
    glVertex3d(126, 245, 107);
    glVertex3d(126, 245, 117);
    glEnd();

    //jendela setelah putih (kanan1.7)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 255, 117);
    glVertex3d(126, 255, 107);
    glVertex3d(126, 265, 107);
    glVertex3d(126, 265, 117);
    glEnd();

    //jendela setelah putih (kanan1.8)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 275, 117);
    glVertex3d(126, 275, 107);
    glVertex3d(126, 285, 107);
    glVertex3d(126, 285, 117);
    glEnd();

    //jendela setelah putih (kanan1.9)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 295, 117);
    glVertex3d(126, 295, 107);
    glVertex3d(126, 305, 107);
    glVertex3d(126, 305, 117);
    glEnd();


////-----------abu abu--------------------

  //aksesoris tembok putih (kanandepan1)
    glBegin(GL_QUADS);
    glColor3f(0.6, 0.6, 0.6);
    glVertex3d(128, 130, 100);
    glVertex3d(128, 130, 97);
    glVertex3d(128, 320, 97);
    glVertex3d(128, 320, 100);
    glEnd();

    //aksesoris tembok sambung (kanananan1)
    glBegin(GL_QUADS);
    glColor3f(0.6, 0.6, 0.6);
    glVertex3d(128, 130, 100);
    glVertex3d(125, 130, 100);
    glVertex3d(125, 320, 100);
    glVertex3d(128, 320, 100);
    glEnd();

        //aksesoris tembok sambung (kanankiri1)
    glBegin(GL_QUADS);
    glColor3f(0.6, 0.6, 0.6);
    glVertex3d(128, 130, 97);
    glVertex3d(125, 130, 97);
    glVertex3d(125, 320, 97);
    glVertex3d(128, 320, 97);
    glEnd();

      //aksesoris tembok putih (kananepan2)
    glBegin(GL_QUADS);
    glColor3f(0.6, 0.6, 0.6);
    glVertex3d(128, 130, 80);
    glVertex3d(128, 130, 78);
    glVertex3d(128, 320, 78);
    glVertex3d(128, 320, 80);
    glEnd();

        //aksesoris tembok sambung (kanananan2)
    glBegin(GL_QUADS);
    glColor3f(0.6, 0.6, 0.6);
    glVertex3d(128, 130, 78);
    glVertex3d(125, 130, 78);
    glVertex3d(125, 320, 78);
    glVertex3d(128, 320, 78);
    glEnd();

        //aksesoris tembok sambung (kanankiri2)
    glBegin(GL_QUADS);
    glColor3f(0.6, 0.6, 0.6);
    glVertex3d(128, 130, 80);
    glVertex3d(125, 130, 80);
    glVertex3d(125, 320, 80);
    glVertex3d(128, 320, 80);
    glEnd();


    //-------------------3 & 4----------------------

    //aksesoris tembok putih (kanandepan3)
    glBegin(GL_QUADS);
    glColor3f(0.6, 0.6, 0.6);
    glVertex3d(128, 130, 35);
    glVertex3d(128, 130, 33);
    glVertex3d(128, 320, 33);
    glVertex3d(128, 320, 35);
    glEnd();

    //aksesoris tembok sambung (kanananan3)
    glBegin(GL_QUADS);
    glColor3f(0.6, 0.6, 0.6);
    glVertex3d(128, 130, 35);
    glVertex3d(125, 130, 35);
    glVertex3d(125, 320, 35);
    glVertex3d(128, 320, 35);
    glEnd();

        //aksesoris tembok sambung (kanankiri3)
    glBegin(GL_QUADS);
    glColor3f(0.6, 0.6, 0.6);
    glVertex3d(128, 130, 33);
    glVertex3d(125, 130, 33);
    glVertex3d(125, 320, 33);
    glVertex3d(128, 320, 33);
    glEnd();

      //aksesoris tembok putih (kananepan4)
    glBegin(GL_QUADS);
    glColor3f(0.6, 0.6, 0.6);
    glVertex3d(128, 130, 25);
    glVertex3d(128, 130, 23);
    glVertex3d(128, 320, 23);
    glVertex3d(128, 320, 25);
    glEnd();

    //aksesoris tembok sambung (kanananan4)
    glBegin(GL_QUADS);
    glColor3f(0.6, 0.6, 0.6);
    glVertex3d(128, 130, 25);
    glVertex3d(125, 130, 25);
    glVertex3d(125, 320, 25);
    glVertex3d(128, 320, 25);
    glEnd();

        //aksesoris tembok sambung (kanankiri4)
    glBegin(GL_QUADS);
    glColor3f(0.6, 0.6, 0.6);
    glVertex3d(128, 130, 23);
    glVertex3d(125, 130, 23);
    glVertex3d(125, 320, 23);
    glVertex3d(128, 320, 23);
    glEnd();

    //-------------5 & 6-----------------------------

        //aksesoris tembok putih (kanandepan3)
    glBegin(GL_QUADS);
    glColor3f(0.6, 0.6, 0.6);
    glVertex3d(128, 130, -15);
    glVertex3d(128, 130, -13);
    glVertex3d(128, 320, -13);
    glVertex3d(128, 320, -15);
    glEnd();

    //aksesoris tembok sambung (kanananan3)
    glBegin(GL_QUADS);
    glColor3f(0.6, 0.6, 0.6);
    glVertex3d(128, 130, -15);
    glVertex3d(125, 130, -15);
    glVertex3d(125, 320, -15);
    glVertex3d(128, 320, -15);
    glEnd();

        //aksesoris tembok sambung (kanankiri3)
    glBegin(GL_QUADS);
    glColor3f(0.6, 0.6, 0.6);
    glVertex3d(128, 130, -13);
    glVertex3d(125, 130, -13);
    glVertex3d(125, 320, -13);
    glVertex3d(128, 320, -13);
    glEnd();

      //aksesoris tembok putih (kananepan4)
    glBegin(GL_QUADS);
    glColor3f(0.6, 0.6, 0.6);
    glVertex3d(128, 130, -5);
    glVertex3d(128, 130, -3);
    glVertex3d(128, 320, -3);
    glVertex3d(128, 320, -5);
    glEnd();

    //aksesoris tembok sambung (kanananan4)
    glBegin(GL_QUADS);
    glColor3f(0.6, 0.6, 0.6);
    glVertex3d(128, 130, -5);
    glVertex3d(125, 130, -5);
    glVertex3d(125, 320, -5);
    glVertex3d(128, 320, -5);
    glEnd();

        //aksesoris tembok sambung (kanankiri4)
    glBegin(GL_QUADS);
    glColor3f(0.6, 0.6, 0.6);
    glVertex3d(128, 130, -3);
    glVertex3d(125, 130, -3);
    glVertex3d(125, 320, -3);
    glVertex3d(128, 320, -3);
    glEnd();

    //-------------------------------------------------------------------------

     //aksesoris jendela (kanan1.1)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 135, 96);
    glVertex3d(126, 135, 82);
    glVertex3d(126, 145, 82);
    glVertex3d(126, 145, 96);
    glEnd();

     //aksesoris jendela (kanan1.2)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 135, 94);
    glVertex3d(127, 135, 93);
    glVertex3d(127, 145, 93);
    glVertex3d(127, 145, 94);
    glEnd();

   // aksesoris jendela (kanan1.3)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 135, 84);
    glVertex3d(127, 135, 85);
    glVertex3d(127, 145, 85);
    glVertex3d(127, 145, 84);
    glEnd();

    //aksesoris jendela (kanan2.1)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 155, 96);
    glVertex3d(126, 155, 82);
    glVertex3d(126, 165, 82);
    glVertex3d(126, 165, 96);
    glEnd();

     //aksesoris jendela (kanan2.2)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 155, 94);
    glVertex3d(127, 155, 93);
    glVertex3d(127, 165, 93);
    glVertex3d(127, 165, 94);
    glEnd();

    //aksesoris jendela (kanan2.3)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 155, 84);
    glVertex3d(127, 155, 85);
    glVertex3d(127, 165, 85);
    glVertex3d(127, 165, 84);
    glEnd();

    //aksesoris jendela (kanan3.1)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 175, 96);
    glVertex3d(126, 175, 82);
    glVertex3d(126, 185, 82);
    glVertex3d(126, 185, 96);
    glEnd();

     //aksesoris jendela (kanan3.2)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 175, 94);
    glVertex3d(127, 175, 93);
    glVertex3d(127, 185, 93);
    glVertex3d(127, 185, 94);
    glEnd();

    //aksesoris jendela (kanan3.3)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 175, 84);
    glVertex3d(127, 175, 85);
    glVertex3d(127, 185, 85);
    glVertex3d(127, 185, 84);
    glEnd();

        //aksesoris jendela (kanan4.1)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 195, 96);
    glVertex3d(126, 195, 82);
    glVertex3d(126, 205, 82);
    glVertex3d(126, 205, 96);
    glEnd();

     //aksesoris jendela (kanan4.2)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 195, 94);
    glVertex3d(127, 195, 93);
    glVertex3d(127, 205, 93);
    glVertex3d(127, 205, 94);
    glEnd();

    //aksesoris jendela (kanan4.3)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 195, 84);
    glVertex3d(127, 195, 85);
    glVertex3d(127, 205, 85);
    glVertex3d(127, 205, 84);
    glEnd();

    //aksesoris jendela (kanan5.1)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 215, 96);
    glVertex3d(126, 215, 82);
    glVertex3d(126, 225, 82);
    glVertex3d(126, 225, 96);
    glEnd();

     //aksesoris jendela (kanan5.2)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 215, 94);
    glVertex3d(127, 215, 93);
    glVertex3d(127, 225, 93);
    glVertex3d(127, 225, 94);
    glEnd();

    //aksesoris jendela (kanan5.3)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 215, 84);
    glVertex3d(127, 215, 85);
    glVertex3d(127, 225, 85);
    glVertex3d(127, 225, 84);
    glEnd();

    //aksesoris jendela (kanan6.1)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 235, 96);
    glVertex3d(126, 235, 82);
    glVertex3d(126, 245, 82);
    glVertex3d(126, 245, 96);
    glEnd();

     //aksesoris jendela (kanan6.2)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 235, 94);
    glVertex3d(127, 235, 93);
    glVertex3d(127, 245, 93);
    glVertex3d(127, 245, 94);
    glEnd();

    //aksesoris jendela (kanan6.3)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 235, 84);
    glVertex3d(127, 235, 85);
    glVertex3d(127, 245, 85);
    glVertex3d(127, 245, 84);
    glEnd();

    //aksesoris jendela (kanan7.1)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 255, 96);
    glVertex3d(126, 255, 82);
    glVertex3d(126, 265, 82);
    glVertex3d(126, 265, 96);
    glEnd();

     //aksesoris jendela (kanan7.2)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 255, 94);
    glVertex3d(127, 255, 93);
    glVertex3d(127, 265, 93);
    glVertex3d(127, 265, 94);
    glEnd();

    //aksesoris jendela (kanan7.3)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 255, 84);
    glVertex3d(127, 255, 85);
    glVertex3d(127, 265, 85);
    glVertex3d(127, 265, 84);
    glEnd();

    //aksesoris jendela (kanan8.1)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 275, 96);
    glVertex3d(126, 275, 82);
    glVertex3d(126, 285, 82);
    glVertex3d(126, 285, 96);
    glEnd();

     //aksesoris jendela (kanan8.2)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 275, 94);
    glVertex3d(127, 275, 93);
    glVertex3d(127, 285, 93);
    glVertex3d(127, 285, 94);
    glEnd();

    //aksesoris jendela (kanan8.3)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 275, 84);
    glVertex3d(127, 275, 85);
    glVertex3d(127, 285, 85);
    glVertex3d(127, 285, 84);
    glEnd();

        //aksesoris jendela (kanan9.1)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 295, 96);
    glVertex3d(126, 295, 82);
    glVertex3d(126, 305, 82);
    glVertex3d(126, 305, 96);
    glEnd();

     //aksesoris jendela (kanan9.2)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 295, 94);
    glVertex3d(127, 295, 93);
    glVertex3d(127, 305, 93);
    glVertex3d(127, 305, 94);
    glEnd();

    //aksesoris jendela (kanan9.3)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 295, 84);
    glVertex3d(127, 295, 85);
    glVertex3d(127, 305, 85);
    glVertex3d(127, 305, 84);
    glEnd();

//--------PANJANG PANJANG STLH ABUABU---------

    //aksesoris jendela (kanan1)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 135, 75);
    glVertex3d(126, 135, 73);
    glVertex3d(126, 145, 73);
    glVertex3d(126, 145, 75);
    glEnd();

        //aksesoris jendela (kanan2)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 155, 75);
    glVertex3d(126, 155, 73);
    glVertex3d(126, 165, 73);
    glVertex3d(126, 165, 75);
    glEnd();

        //aksesoris jendela (kanan3)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 175, 75);
    glVertex3d(126, 175, 73);
    glVertex3d(126, 185, 73);
    glVertex3d(126, 185, 75);
    glEnd();

        //aksesoris jendela (kanan4)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 195, 75);
    glVertex3d(126, 195, 73);
    glVertex3d(126, 205, 73);
    glVertex3d(126, 205, 75);
    glEnd();

        //aksesoris jendela (kanan5)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 215, 75);
    glVertex3d(126, 215, 73);
    glVertex3d(126, 225, 73);
    glVertex3d(126, 225, 75);
    glEnd();

        //aksesoris jendela (kanan6)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 235, 75);
    glVertex3d(126, 235, 73);
    glVertex3d(126, 245, 73);
    glVertex3d(126, 245, 75);
    glEnd();

        //aksesoris jendela (kanan7)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 255, 75);
    glVertex3d(126, 255, 73);
    glVertex3d(126, 265, 73);
    glVertex3d(126, 265, 75);
    glEnd();

        //aksesoris jendela (kanan8)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 275, 75);
    glVertex3d(126, 275, 73);
    glVertex3d(126, 285, 73);
    glVertex3d(126, 285, 75);
    glEnd();

        //aksesoris jendela (kanan9)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 295, 75);
    glVertex3d(126, 295, 73);
    glVertex3d(126, 305, 73);
    glVertex3d(126, 305, 75);
    glEnd();


    //-------------jndela 2 setalh panjang-----------------------

     //aksesoris jendela (kanan1.1)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 135, 67);
    glVertex3d(126, 135, 56);
    glVertex3d(126, 145, 56);
    glVertex3d(126, 145, 67);
    glEnd();

     //aksesoris jendela (kanan1.2)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 135, 65);
    glVertex3d(127, 135, 64);
    glVertex3d(127, 145, 64);
    glVertex3d(127, 145, 65);
    glEnd();

   // aksesoris jendela (kanan1.3)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 135, 58);
    glVertex3d(127, 135, 59);
    glVertex3d(127, 145, 59);
    glVertex3d(127, 145, 58);
    glEnd();

    //aksesoris jendela (kanan2.1)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 155, 67);
    glVertex3d(126, 155, 56);
    glVertex3d(126, 165, 56);
    glVertex3d(126, 165, 67);
    glEnd();

     //aksesoris jendela (kanan2.2)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 155, 65);
    glVertex3d(127, 155, 64);
    glVertex3d(127, 165, 64);
    glVertex3d(127, 165, 65);
    glEnd();

    //aksesoris jendela (kanan2.3)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 155, 58);
    glVertex3d(127, 155, 59);
    glVertex3d(127, 165, 59);
    glVertex3d(127, 165, 58);
    glEnd();

    //aksesoris jendela (kanan3.1)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 175, 67);
    glVertex3d(126, 175, 56);
    glVertex3d(126, 185, 56);
    glVertex3d(126, 185, 67);
    glEnd();

     //aksesoris jendela (kanan3.2)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 175, 65);
    glVertex3d(127, 175, 64);
    glVertex3d(127, 185, 64);
    glVertex3d(127, 185, 65);
    glEnd();

    //aksesoris jendela (kanan3.3)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 175, 58);
    glVertex3d(127, 175, 59);
    glVertex3d(127, 185, 59);
    glVertex3d(127, 185, 58);
    glEnd();

        //aksesoris jendela (kanan4.1)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 195, 67);
    glVertex3d(126, 195, 56);
    glVertex3d(126, 205, 56);
    glVertex3d(126, 205, 67);
    glEnd();

     //aksesoris jendela (kanan4.2)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 195, 65);
    glVertex3d(127, 195, 64);
    glVertex3d(127, 205, 64);
    glVertex3d(127, 205, 65);
    glEnd();

    //aksesoris jendela (kanan4.3)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 195, 58);
    glVertex3d(127, 195, 59);
    glVertex3d(127, 205, 59);
    glVertex3d(127, 205, 58);
    glEnd();

    //aksesoris jendela (kanan5.1)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 215, 67);
    glVertex3d(126, 215, 56);
    glVertex3d(126, 225, 56);
    glVertex3d(126, 225, 67);
    glEnd();

     //aksesoris jendela (kanan5.2)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 215, 65);
    glVertex3d(127, 215, 64);
    glVertex3d(127, 225, 64);
    glVertex3d(127, 225, 65);
    glEnd();

    //aksesoris jendela (kanan5.3)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 215, 58);
    glVertex3d(127, 215, 59);
    glVertex3d(127, 225, 59);
    glVertex3d(127, 225, 58);
    glEnd();

    //aksesoris jendela (kanan6.1)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 235, 67);
    glVertex3d(126, 235, 56);
    glVertex3d(126, 245, 56);
    glVertex3d(126, 245, 67);
    glEnd();

     //aksesoris jendela (kanan6.2)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 235, 65);
    glVertex3d(127, 235, 64);
    glVertex3d(127, 245, 64);
    glVertex3d(127, 245, 65);
    glEnd();

    //aksesoris jendela (kanan6.3)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 235, 58);
    glVertex3d(127, 235, 59);
    glVertex3d(127, 245, 59);
    glVertex3d(127, 245, 58);
    glEnd();

    //aksesoris jendela (kanan7.1)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 255, 67);
    glVertex3d(126, 255, 56);
    glVertex3d(126, 265, 56);
    glVertex3d(126, 265, 67);
    glEnd();

     //aksesoris jendela (kanan7.2)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 255, 65);
    glVertex3d(127, 255, 64);
    glVertex3d(127, 265, 64);
    glVertex3d(127, 265, 65);
    glEnd();

    //aksesoris jendela (kanan7.3)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 255, 58);
    glVertex3d(127, 255, 59);
    glVertex3d(127, 265, 59);
    glVertex3d(127, 265, 58);
    glEnd();

    //aksesoris jendela (kanan8.1)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 275, 67);
    glVertex3d(126, 275, 56);
    glVertex3d(126, 285, 56);
    glVertex3d(126, 285, 67);
    glEnd();

     //aksesoris jendela (kanan8.2)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 275, 65);
    glVertex3d(127, 275, 64);
    glVertex3d(127, 285, 64);
    glVertex3d(127, 285, 65);
    glEnd();

    //aksesoris jendela (kanan8.3)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 275, 58);
    glVertex3d(127, 275, 59);
    glVertex3d(127, 285, 59);
    glVertex3d(127, 285, 58);
    glEnd();

        //aksesoris jendela (kanan9.1)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 295, 67);
    glVertex3d(126, 295, 56);
    glVertex3d(126, 305, 56);
    glVertex3d(126, 305, 67);
    glEnd();

     //aksesoris jendela (kanan9.2)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 295, 65);
    glVertex3d(127, 295, 64);
    glVertex3d(127, 305, 64);
    glVertex3d(127, 305, 65);
    glEnd();

    //aksesoris jendela (kanan9.3)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 295, 58);
    glVertex3d(127, 295, 59);
    glVertex3d(127, 305, 59);
    glVertex3d(127, 305, 58);
    glEnd();

    //------------sbelahe-----------------------------------

    //aksesoris jendela (kanan1.1)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 135, 51);
    glVertex3d(126, 135, 38);
    glVertex3d(126, 145, 38);
    glVertex3d(126, 145, 51);
    glEnd();

     //aksesoris jendela (kanan1.2)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 135, 49);
    glVertex3d(127, 135, 48);
    glVertex3d(127, 145, 48);
    glVertex3d(127, 145, 49);
    glEnd();

   // aksesoris jendela (kanan1.3)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 135, 41);
    glVertex3d(127, 135, 40);
    glVertex3d(127, 145, 40);
    glVertex3d(127, 145, 41);
    glEnd();

    //aksesoris jendela (kanan2.1)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 155, 51);
    glVertex3d(126, 155, 38);
    glVertex3d(126, 165, 38);
    glVertex3d(126, 165, 51);
    glEnd();

     //aksesoris jendela (kanan2.2)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 155, 49);
    glVertex3d(127, 155, 48);
    glVertex3d(127, 165, 48);
    glVertex3d(127, 165, 49);
    glEnd();

    //aksesoris jendela (kanan2.3)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 155, 41);
    glVertex3d(127, 155, 40);
    glVertex3d(127, 165, 40);
    glVertex3d(127, 165, 41);
    glEnd();

    //aksesoris jendela (kanan3.1)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 175, 51);
    glVertex3d(126, 175, 38);
    glVertex3d(126, 185, 38);
    glVertex3d(126, 185, 51);
    glEnd();

     //aksesoris jendela (kanan3.2)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 175, 49);
    glVertex3d(127, 175, 48);
    glVertex3d(127, 185, 48);
    glVertex3d(127, 185, 49);
    glEnd();

    //aksesoris jendela (kanan3.3)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 175, 41);
    glVertex3d(127, 175, 40);
    glVertex3d(127, 185, 40);
    glVertex3d(127, 185, 41);
    glEnd();

        //aksesoris jendela (kanan4.1)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 195, 51);
    glVertex3d(126, 195, 38);
    glVertex3d(126, 205, 38);
    glVertex3d(126, 205, 51);
    glEnd();

     //aksesoris jendela (kanan4.2)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 195, 49);
    glVertex3d(127, 195, 48);
    glVertex3d(127, 205, 48);
    glVertex3d(127, 205, 49);
    glEnd();

    //aksesoris jendela (kanan4.3)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 195, 41);
    glVertex3d(127, 195, 40);
    glVertex3d(127, 205, 40);
    glVertex3d(127, 205, 41);
    glEnd();

    //aksesoris jendela (kanan5.1)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 215, 51);
    glVertex3d(126, 215, 38);
    glVertex3d(126, 225, 38);
    glVertex3d(126, 225, 51);
    glEnd();

     //aksesoris jendela (kanan5.2)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 215, 49);
    glVertex3d(127, 215, 48);
    glVertex3d(127, 225, 48);
    glVertex3d(127, 225, 49);
    glEnd();

    //aksesoris jendela (kanan5.3)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 215, 41);
    glVertex3d(127, 215, 40);
    glVertex3d(127, 225, 40);
    glVertex3d(127, 225, 41);
    glEnd();

    //aksesoris jendela (kanan6.1)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 235, 51);
    glVertex3d(126, 235, 38);
    glVertex3d(126, 245, 38);
    glVertex3d(126, 245, 51);
    glEnd();

     //aksesoris jendela (kanan6.2)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 235, 49);
    glVertex3d(127, 235, 48);
    glVertex3d(127, 245, 49);
    glVertex3d(127, 245, 48);
    glEnd();

    //aksesoris jendela (kanan6.3)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 235, 41);
    glVertex3d(127, 235, 40);
    glVertex3d(127, 245, 40);
    glVertex3d(127, 245, 41);
    glEnd();

    //aksesoris jendela (kanan7.1)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 255, 51);
    glVertex3d(126, 255, 38);
    glVertex3d(126, 265, 38);
    glVertex3d(126, 265, 51);
    glEnd();

     //aksesoris jendela (kanan7.2)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 255, 49);
    glVertex3d(127, 255, 48);
    glVertex3d(127, 265, 48);
    glVertex3d(127, 265, 49);
    glEnd();

    //aksesoris jendela (kanan7.3)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 255, 41);
    glVertex3d(127, 255, 40);
    glVertex3d(127, 265, 40);
    glVertex3d(127, 265, 41);
    glEnd();

    //aksesoris jendela (kanan8.1)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 275, 51);
    glVertex3d(126, 275, 38);
    glVertex3d(126, 285, 38);
    glVertex3d(126, 285, 51);
    glEnd();

     //aksesoris jendela (kanan8.2)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 275, 49);
    glVertex3d(127, 275, 48);
    glVertex3d(127, 285, 48);
    glVertex3d(127, 285, 49);
    glEnd();

    //aksesoris jendela (kanan8.3)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 275, 41);
    glVertex3d(127, 275, 40);
    glVertex3d(127, 285, 40);
    glVertex3d(127, 285, 41);
    glEnd();

        //aksesoris jendela (kanan9.1)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 295, 51);
    glVertex3d(126, 295, 38);
    glVertex3d(126, 305, 38);
    glVertex3d(126, 305, 51);
    glEnd();

     //aksesoris jendela (kanan9.2)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 295, 49);
    glVertex3d(127, 295, 48);
    glVertex3d(127, 305, 48);
    glVertex3d(127, 305, 49);
    glEnd();

    //aksesoris jendela (kanan9.3)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 295, 41);
    glVertex3d(127, 295, 40);
    glVertex3d(127, 305, 40);
    glVertex3d(127, 305, 41);
    glEnd();

//--------panjang panjnag abu abu lagi------------------------------

    //aksesoris jendela (kanan1)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 135, 30);
    glVertex3d(126, 135, 28);
    glVertex3d(126, 145, 28);
    glVertex3d(126, 145, 30);
    glEnd();

        //aksesoris jendela (kanan2)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 155, 30);
    glVertex3d(126, 155, 28);
    glVertex3d(126, 165, 28);
    glVertex3d(126, 165, 30);
    glEnd();

        //aksesoris jendela (kanan3)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 175, 30);
    glVertex3d(126, 175, 28);
    glVertex3d(126, 185, 28);
    glVertex3d(126, 185, 30);
    glEnd();

        //aksesoris jendela (kanan4)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 195, 30);
    glVertex3d(126, 195, 28);
    glVertex3d(126, 205, 28);
    glVertex3d(126, 205, 30);
    glEnd();

        //aksesoris jendela (kanan5)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 215, 30);
    glVertex3d(126, 215, 28);
    glVertex3d(126, 225, 28);
    glVertex3d(126, 225, 30);
    glEnd();

        //aksesoris jendela (kanan6)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 235, 30);
    glVertex3d(126, 235, 28);
    glVertex3d(126, 245, 28);
    glVertex3d(126, 245, 30);
    glEnd();

        //aksesoris jendela (kanan7)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 255, 30);
    glVertex3d(126, 255, 28);
    glVertex3d(126, 265, 28);
    glVertex3d(126, 265, 30);
    glEnd();

        //aksesoris jendela (kanan8)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 275, 30);
    glVertex3d(126, 275, 28);
    glVertex3d(126, 285, 28);
    glVertex3d(126, 285, 30);
    glEnd();

        //aksesoris jendela (kanan9)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 295, 30);
    glVertex3d(126, 295, 28);
    glVertex3d(126, 305, 28);
    glVertex3d(126, 305, 30);
    glEnd();


    //---------------------------------

        //aksesoris jendela (kanan1.1)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 135, 18);
    glVertex3d(126, 135, 3);
    glVertex3d(126, 145, 3);
    glVertex3d(126, 145, 18);
    glEnd();

     //aksesoris jendela (kanan1.2)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 135, 16);
    glVertex3d(127, 135, 15);
    glVertex3d(127, 145, 15);
    glVertex3d(127, 145, 16);
    glEnd();

   // aksesoris jendela (kanan1.3)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 135, 5);
    glVertex3d(127, 135, 6);
    glVertex3d(127, 145, 6);
    glVertex3d(127, 145, 5);
    glEnd();

    //aksesoris jendela (kanan2.1)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 155, 18);
    glVertex3d(126, 155, 3);
    glVertex3d(126, 165, 3);
    glVertex3d(126, 165, 18);
    glEnd();

     //aksesoris jendela (kanan2.2)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 155, 16);
    glVertex3d(127, 155, 15);
    glVertex3d(127, 165, 15);
    glVertex3d(127, 165, 16);
    glEnd();

    //aksesoris jendela (kanan2.3)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 155, 5);
    glVertex3d(127, 155, 6);
    glVertex3d(127, 165, 6);
    glVertex3d(127, 165, 5);
    glEnd();

    //aksesoris jendela (kanan3.1)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 175, 18);
    glVertex3d(126, 175, 3);
    glVertex3d(126, 185, 3);
    glVertex3d(126, 185, 18);
    glEnd();

     //aksesoris jendela (kanan3.2)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 175, 16);
    glVertex3d(127, 175, 15);
    glVertex3d(127, 185, 15);
    glVertex3d(127, 185, 16);
    glEnd();

    //aksesoris jendela (kanan3.3)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 175, 5);
    glVertex3d(127, 175, 6);
    glVertex3d(127, 185, 6);
    glVertex3d(127, 185, 5);
    glEnd();

    //aksesoris jendela (kanan4.1)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 195, 18);
    glVertex3d(126, 195, 3);
    glVertex3d(126, 205, 3);
    glVertex3d(126, 205, 18);
    glEnd();

     //aksesoris jendela (kanan4.2)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 195, 16);
    glVertex3d(127, 195, 15);
    glVertex3d(127, 205, 15);
    glVertex3d(127, 205, 16);
    glEnd();

    //aksesoris jendela (kanan4.3)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 195, 5);
    glVertex3d(127, 195, 6);
    glVertex3d(127, 205, 6);
    glVertex3d(127, 205, 5);
    glEnd();

    //aksesoris jendela (kanan5.1)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 215, 18);
    glVertex3d(126, 215, 3);
    glVertex3d(126, 225, 3);
    glVertex3d(126, 225, 18);
    glEnd();

     //aksesoris jendela (kanan5.2)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 215, 16);
    glVertex3d(127, 215, 15);
    glVertex3d(127, 225, 15);
    glVertex3d(127, 225, 16);
    glEnd();

    //aksesoris jendela (kanan5.3)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 215, 5);
    glVertex3d(127, 215, 6);
    glVertex3d(127, 225, 6);
    glVertex3d(127, 225, 5);
    glEnd();

    //aksesoris jendela (kanan6.1)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 235, 18);
    glVertex3d(126, 235, 3);
    glVertex3d(126, 245, 3);
    glVertex3d(126, 245, 18);
    glEnd();

     //aksesoris jendela (kanan6.2)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 235, 16);
    glVertex3d(127, 235, 15);
    glVertex3d(127, 245, 15);
    glVertex3d(127, 245, 16);
    glEnd();

    //aksesoris jendela (kanan6.3)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 235, 5);
    glVertex3d(127, 235, 6);
    glVertex3d(127, 245, 6);
    glVertex3d(127, 245, 5);
    glEnd();

    //aksesoris jendela (kanan7.1)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 255, 18);
    glVertex3d(126, 255, 3);
    glVertex3d(126, 265, 3);
    glVertex3d(126, 265, 18);
    glEnd();

     //aksesoris jendela (kanan7.2)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 255, 16);
    glVertex3d(127, 255, 15);
    glVertex3d(127, 265, 15);
    glVertex3d(127, 265, 16);
    glEnd();

    //aksesoris jendela (kanan7.3)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 255, 5);
    glVertex3d(127, 255, 6);
    glVertex3d(127, 265, 6);
    glVertex3d(127, 265, 5);
    glEnd();

    //aksesoris jendela (kanan8.1)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 275, 18);
    glVertex3d(126, 275, 3);
    glVertex3d(126, 285, 3);
    glVertex3d(126, 285, 18);
    glEnd();

     //aksesoris jendela (kanan8.2)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 275, 16);
    glVertex3d(127, 275, 15);
    glVertex3d(127, 285, 15);
    glVertex3d(127, 285, 16);
    glEnd();

    //aksesoris jendela (kanan8.3)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 275, 5);
    glVertex3d(127, 275, 6);
    glVertex3d(127, 285, 6);
    glVertex3d(127, 285, 5);
    glEnd();

    //aksesoris jendela (kanan9.1)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 295, 18);
    glVertex3d(126, 295, 3);
    glVertex3d(126, 305, 3);
    glVertex3d(126, 305, 18);
    glEnd();

     //aksesoris jendela (kanan9.2)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 295, 16);
    glVertex3d(127, 295, 15);
    glVertex3d(127, 305, 15);
    glVertex3d(127, 305, 16);
    glEnd();

    //aksesoris jendela (kanan9.3)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 295, 5);
    glVertex3d(127, 295, 6);
    glVertex3d(127, 305, 6);
    glVertex3d(127, 305, 5);
    glEnd();

    //---------------kotak panjang--------------------------------

 //aksesoris jendela (kanan1)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 135, -8);
    glVertex3d(126, 135, -10);
    glVertex3d(126, 145, -10);
    glVertex3d(126, 145, -8);
    glEnd();

        //aksesoris jendela (kanan2)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 155, -8);
    glVertex3d(126, 155, -10);
    glVertex3d(126, 165, -10);
    glVertex3d(126, 165, -8);
    glEnd();

        //aksesoris jendela (kanan3)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 175, -8);
    glVertex3d(126, 175, -10);
    glVertex3d(126, 185, -10);
    glVertex3d(126, 185, -8);
    glEnd();

        //aksesoris jendela (kanan4)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 195, -8);
    glVertex3d(126, 195, -10);
    glVertex3d(126, 205, -10);
    glVertex3d(126, 205, -8);
    glEnd();

        //aksesoris jendela (kanan5)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 215, -8);
    glVertex3d(126, 215, -10);
    glVertex3d(126, 225, -10);
    glVertex3d(126, 225, -8);
    glEnd();

        //aksesoris jendela (kanan6)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 235, -8);
    glVertex3d(126, 235, -10);
    glVertex3d(126, 245, -10);
    glVertex3d(126, 245, -8);
    glEnd();

        //aksesoris jendela (kanan7)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 255, -8);
    glVertex3d(126, 255, -10);
    glVertex3d(126, 265, -10);
    glVertex3d(126, 265, -8);
    glEnd();

        //aksesoris jendela (kanan8)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 275, -8);
    glVertex3d(126, 275, -10);
    glVertex3d(126, 285, -10);
    glVertex3d(126, 285, -8);
    glEnd();

        //aksesoris jendela (kanan9)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 295, -8);
    glVertex3d(126, 295, -10);
    glVertex3d(126, 305, -10);
    glVertex3d(126, 305, -8);
    glEnd();


//-----------------sisipojokkananpol---------------------------


        //aksesoris jendela (kanan1.1)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 135, -35);
    glVertex3d(126, 135, -20);
    glVertex3d(126, 145, -20);
    glVertex3d(126, 145, -35);
    glEnd();

     //aksesoris jendela (kanan1.2)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 135, -22);
    glVertex3d(127, 135, -23);
    glVertex3d(127, 145, -23);
    glVertex3d(127, 145, -22);
    glEnd();

   // aksesoris jendela (kanan1.3)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 135, -33);
    glVertex3d(127, 135, -32);
    glVertex3d(127, 145, -32);
    glVertex3d(127, 145, -33);
    glEnd();

    //aksesoris jendela (kanan2.1)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 155, -35);
    glVertex3d(126, 155, -20);
    glVertex3d(126, 165, -20);
    glVertex3d(126, 165, -35);
    glEnd();

     //aksesoris jendela (kanan2.2)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 155, -22);
    glVertex3d(127, 155, -23);
    glVertex3d(127, 165, -23);
    glVertex3d(127, 165, -22);
    glEnd();

    //aksesoris jendela (kanan2.3)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 155, -33);
    glVertex3d(127, 155, -32);
    glVertex3d(127, 165, -32);
    glVertex3d(127, 165, -33);
    glEnd();

    //aksesoris jendela (kanan3.1)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 175, -35);
    glVertex3d(126, 175, -20);
    glVertex3d(126, 185, -20);
    glVertex3d(126, 185, -35);
    glEnd();

     //aksesoris jendela (kanan3.2)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 175, -22);
    glVertex3d(127, 175, -23);
    glVertex3d(127, 185, -23);
    glVertex3d(127, 185, -22);
    glEnd();

    //aksesoris jendela (kanan3.3)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 175, -33);
    glVertex3d(127, 175, -32);
    glVertex3d(127, 185, -32);
    glVertex3d(127, 185, -33);
    glEnd();

    //aksesoris jendela (kanan4.1)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 195, -35);
    glVertex3d(126, 195, -20);
    glVertex3d(126, 205, -20);
    glVertex3d(126, 205, -35);
    glEnd();

     //aksesoris jendela (kanan4.2)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 195, -22);
    glVertex3d(127, 195, -23);
    glVertex3d(127, 205, -23);
    glVertex3d(127, 205, -22);
    glEnd();

    //aksesoris jendela (kanan4.3)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 195, -33);
    glVertex3d(127, 195, -32);
    glVertex3d(127, 205, -32);
    glVertex3d(127, 205, -33);
    glEnd();

    //aksesoris jendela (kanan5.1)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 215, -35);
    glVertex3d(126, 215, -20);
    glVertex3d(126, 225, -20);
    glVertex3d(126, 225, -35);
    glEnd();

     //aksesoris jendela (kanan5.2)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 215, -22);
    glVertex3d(127, 215, -23);
    glVertex3d(127, 225, -23);
    glVertex3d(127, 225, -22);
    glEnd();

    //aksesoris jendela (kanan5.3)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 215, -33);
    glVertex3d(127, 215, -32);
    glVertex3d(127, 225, -32);
    glVertex3d(127, 225, -33);
    glEnd();

    //aksesoris jendela (kanan6.1)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 235, -35);
    glVertex3d(126, 235, -20);
    glVertex3d(126, 245, -20);
    glVertex3d(126, 245, -35);
    glEnd();

     //aksesoris jendela (kanan6.2)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 235, -22);
    glVertex3d(127, 235, -23);
    glVertex3d(127, 245, -23);
    glVertex3d(127, 245, -22);
    glEnd();

    //aksesoris jendela (kanan6.3)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 235, -33);
    glVertex3d(127, 235, -32);
    glVertex3d(127, 245, -32);
    glVertex3d(127, 245, -33);
    glEnd();

    //aksesoris jendela (kanan7.1)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 255, -35);
    glVertex3d(126, 255, -20);
    glVertex3d(126, 265, -20);
    glVertex3d(126, 265, -35);
    glEnd();

     //aksesoris jendela (kanan7.2)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 255, -22);
    glVertex3d(127, 255, -23);
    glVertex3d(127, 265, -23);
    glVertex3d(127, 265, -22);
    glEnd();

    //aksesoris jendela (kanan7.3)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 255, -33);
    glVertex3d(127, 255, -32);
    glVertex3d(127, 265, -32);
    glVertex3d(127, 265, -33);
    glEnd();

    //aksesoris jendela (kanan8.1)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 275, -35);
    glVertex3d(126, 275, -20);
    glVertex3d(126, 285, -20);
    glVertex3d(126, 285, -35);
    glEnd();

     //aksesoris jendela (kanan8.2)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 275, -22);
    glVertex3d(127, 275, -23);
    glVertex3d(127, 285, -23);
    glVertex3d(127, 285, -22);
    glEnd();

    //aksesoris jendela (kanan8.3)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 275, -33);
    glVertex3d(127, 275, -32);
    glVertex3d(127, 285, -32);
    glVertex3d(127, 285, -33);
    glEnd();

    //aksesoris jendela (kanan9.1)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(126, 295, -35);
    glVertex3d(126, 295, -20);
    glVertex3d(126, 305, -20);
    glVertex3d(126, 305, -35);
    glEnd();

     //aksesoris jendela (kanan9.2)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 295, -22);
    glVertex3d(127, 295, -23);
    glVertex3d(127, 305, -23);
    glVertex3d(127, 305, -22);
    glEnd();

    //aksesoris jendela (kanan9.3)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(127, 295, -33);
    glVertex3d(127, 295, -32);
    glVertex3d(127, 305, -32);
    glVertex3d(127, 305, -33);
    glEnd();

    //---------jendela belakang--------

        //aksesoris jendela (kanan1.1)
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,1.0);
    glVertex3d(90, 135, -41);
    glVertex3d(60, 135, -41);
    glVertex3d(60, 145, -41);
    glVertex3d(90, 145, -41);
    glEnd();

     //aksesoris jendela (kanan1.2)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(83, 135, -42);
    glVertex3d(82, 135, -42);
    glVertex3d(82, 145, -42);
    glVertex3d(83, 145, -42);
    glEnd();

   // aksesoris jendela (kanan1.3)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(75, 135, -42);
    glVertex3d(74, 135, -42);
    glVertex3d(74, 145, -42);
    glVertex3d(75, 145, -42);
    glEnd();

    // aksesoris jendela (kanan1.4)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(67, 135, -42);
    glVertex3d(66, 135, -42);
    glVertex3d(66, 145, -42);
    glVertex3d(67, 145, -42);
    glEnd();

    //aksesoris jendela (kanan2.1)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(90, 155, -41);
    glVertex3d(60, 155, -41);
    glVertex3d(60, 165, -41);
    glVertex3d(90, 165, -41);
    glEnd();

     //aksesoris jendela (kanan2.2)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(83, 155, -42);
    glVertex3d(82, 155, -42);
    glVertex3d(82, 165, -42);
    glVertex3d(83, 165, -42);
    glEnd();

    //aksesoris jendela (kanan2.3)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(75, 155, -42);
    glVertex3d(74, 155, -42);
    glVertex3d(74, 165, -42);
    glVertex3d(75, 165, -42);
    glEnd();

     //aksesoris jendela (kanan2.4)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(67, 155, -42);
    glVertex3d(66, 155, -42);
    glVertex3d(66, 165, -42);
    glVertex3d(67, 165, -42);
    glEnd();

    //aksesoris jendela (kanan3.1)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(90, 175, -41);
    glVertex3d(60, 175, -41);
    glVertex3d(60, 185, -41);
    glVertex3d(90, 185, -41);
    glEnd();

     //aksesoris jendela (kanan3.2)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(83, 175, -42);
    glVertex3d(82, 175, -42);
    glVertex3d(82, 185, -42);
    glVertex3d(83, 185, -42);
    glEnd();

    //aksesoris jendela (kanan3.3)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(75, 175, -42);
    glVertex3d(74, 175, -42);
    glVertex3d(74, 185, -42);
    glVertex3d(75, 185, -43);
    glEnd();

    //aksesoris jendela (kanan3.4)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(67, 175, -42);
    glVertex3d(66, 175, -42);
    glVertex3d(66, 185, -42);
    glVertex3d(67, 185, -43);
    glEnd();

    //aksesoris jendela (kanan4.1)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(90, 195, -41);
    glVertex3d(60, 195, -41);
    glVertex3d(60, 205, -41);
    glVertex3d(90, 205, -41);
    glEnd();

    //aksesoris jendela (kanan4.4)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(83, 195, -42);
    glVertex3d(82, 195, -42);
    glVertex3d(82, 205, -42);
    glVertex3d(83, 205, -42);
    glEnd();

     //aksesoris jendela (kanan4.2)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(75, 195, -42);
    glVertex3d(74, 195, -42);
    glVertex3d(74, 205, -42);
    glVertex3d(75, 205, -42);
    glEnd();

    //aksesoris jendela (kanan4.3)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(67, 195, -42);
    glVertex3d(66, 195, -42);
    glVertex3d(66, 205, -42);
    glVertex3d(67, 205, -42);
    glEnd();

    //aksesoris jendela (kanan5.1)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(90, 215, -41);
    glVertex3d(60, 215, -41);
    glVertex3d(60, 225, -41);
    glVertex3d(90, 225, -41);
    glEnd();

     //aksesoris jendela (kanan5.2)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(83, 215, -42);
    glVertex3d(82, 215, -42);
    glVertex3d(82, 225, -42);
    glVertex3d(83, 225, -42);
    glEnd();

    //aksesoris jendela (kanan5.3)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(75, 215, -42);
    glVertex3d(74, 215, -42);
    glVertex3d(74, 225, -42);
    glVertex3d(75, 225, -42);
    glEnd();

      //aksesoris jendela (kanan5.4)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(67, 215, -42);
    glVertex3d(66, 215, -42);
    glVertex3d(66, 225, -42);
    glVertex3d(67, 225, -42);
    glEnd();

    //aksesoris jendela (kanan6.1)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(90, 235, -41);
    glVertex3d(60, 235, -41);
    glVertex3d(60, 245, -41);
    glVertex3d(90, 245, -41);
    glEnd();

     //aksesoris jendela (kanan6.2)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(83, 235, -42);
    glVertex3d(82, 235, -42);
    glVertex3d(82, 245, -42);
    glVertex3d(83, 245, -42);
    glEnd();

    //aksesoris jendela (kanan6.3)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(75, 235, -42);
    glVertex3d(74, 235, -42);
    glVertex3d(74, 245, -42);
    glVertex3d(75, 245, -42);
    glEnd();

        //aksesoris jendela (kanan6.4)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(67, 235, -42);
    glVertex3d(66, 235, -42);
    glVertex3d(66, 245, -42);
    glVertex3d(67, 245, -42);
    glEnd();

    //aksesoris jendela (kanan7.1)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(90, 255, -41);
    glVertex3d(60, 255, -41);
    glVertex3d(60, 265, -41);
    glVertex3d(90, 265, -41);
    glEnd();

     //aksesoris jendela (kanan7.2)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(83, 255, -42);
    glVertex3d(82, 255, -42);
    glVertex3d(82, 265, -42);
    glVertex3d(83, 265, -42);
    glEnd();

    //aksesoris jendela (kanan7.3)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(75, 255, -42);
    glVertex3d(74, 255, -42);
    glVertex3d(74, 265, -42);
    glVertex3d(75, 265, -42);
    glEnd();

    //aksesoris jendela (kanan7.4)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(67, 255, -42);
    glVertex3d(66, 255, -42);
    glVertex3d(66, 265, -42);
    glVertex3d(67, 265, -42);
    glEnd();

    //aksesoris jendela (kanan8.1)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(90, 275, -41);
    glVertex3d(60, 275, -41);
    glVertex3d(60, 285, -41);
    glVertex3d(90, 285, -41);
    glEnd();

     //aksesoris jendela (kanan8.2)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(83, 275, -42);
    glVertex3d(82, 275, -42);
    glVertex3d(82, 285, -42);
    glVertex3d(83, 285, -42);
    glEnd();

    //aksesoris jendela (kanan8.3)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(75, 275, -42);
    glVertex3d(74, 275, -42);
    glVertex3d(74, 285, -42);
    glVertex3d(75, 285, -42);
    glEnd();

    //aksesoris jendela (kanan8.4)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(67, 275, -42);
    glVertex3d(66, 275, -42);
    glVertex3d(66, 285, -42);
    glVertex3d(67, 285, -42);
    glEnd();

    //aksesoris jendela (kanan9.1)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3d(90, 295, -41);
    glVertex3d(60, 295, -41);
    glVertex3d(60, 305, -41);
    glVertex3d(90, 305, -41);
    glEnd();

     //aksesoris jendela (kanan9.2)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(83, 295, -42);
    glVertex3d(82, 295, -42);
    glVertex3d(82, 305, -42);
    glVertex3d(83, 305, -42);
    glEnd();

    //aksesoris jendela (kanan9.3)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(75, 295, -42);
    glVertex3d(74, 295, -42);
    glVertex3d(74, 305, -42);
    glVertex3d(75, 305, -42);
    glEnd();

        //aksesoris jendela (kanan9.3)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(67, 295, -42);
    glVertex3d(66, 295, -42);
    glVertex3d(66, 305, -42);
    glVertex3d(67, 305, -42);
    glEnd();

   //----tembok atas-----

       //atap hotel
    glBegin(GL_QUADS);
    glColor3f(0.75, 0.75, 0.75);
    glVertex3d(30, 320.0, -40);
    glVertex3d(125, 320.0, -40);
    glVertex3d(125, 320.0, 225);
    glVertex3d(30, 320.0, 225);
    glEnd();


//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
  //////// Adit ////////
  ////////adittt////////
   //////// Adit ////////
  ////////adittt////////
   //////// Adit ////////
  ////////adittt////////
   //////// Adit ////////
  ////////adittt////////
 

     //alas hotel
    glBegin(GL_QUADS);
    glColor3ub(42.0, 42.0, 42.0);
    glVertex3d(-40, -25, -90);
    glVertex3d(-40, -25, 370);
    glVertex3d(180, -25, 370);
    glVertex3d(180, -25, -90);
    glEnd();
    // tembok batas daerah hotel kiri

    glBegin(GL_QUADS);
    glColor3ub(126, 143, 140);
    glVertex3d(-39, -25, 345);
    glVertex3d(-39, 30, 345);
    glVertex3d(-39, 30, -90);
    glVertex3d(-39, -25, -90);
    glEnd();

     glBegin(GL_QUADS); // line kuning
    glColor3f(245, 224, 0.0);
    glVertex3d(-39, -24, -65);
    glVertex3d(-39, -24, 370);
    glVertex3d(-36, -24, 370);
    glVertex3d(-36, -24, -65);
    glEnd();
     // tembok belakang
    glBegin(GL_QUADS);
    glColor3ub(177, 188, 186);
    glVertex3d(-40, -25, -90);
    glVertex3d(-40, 30, -90);
    glVertex3d(180, 30, -90);
    glVertex3d(180, -25, -90);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(126, 143, 140);
    glVertex3d(20, -20, 130);
    glVertex3d(20, 30, 130);
    glVertex3d(25, 30, 130);
    glVertex3d(25, -20, 130);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex3d(20, 30, 230);
    glVertex3d(20, 30, 130);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex3d(20, 30, 130);
    glVertex3d(20, -20, 130);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex3d(20, 30, 130);
    glVertex3d(25, 30, 130);
    glEnd();

    // kotak depan hotel
    glBegin(GL_QUADS);
    glColor3ub(177, 188, 186);
    glVertex3d(30, -25, 345);
    glVertex3d(30, -10, 345);
    glVertex3d(112, -10, 345);
    glVertex3d(112, -25, 345);
    glEnd();
     glBegin(GL_QUADS);
    glColor3ub(177, 188, 186);
    glVertex3d(30, -25, 340);
    glVertex3d(30, -10, 340);
    glVertex3d(112, -10, 340);
    glVertex3d(112, -25, 340);
    glEnd();
     glBegin(GL_QUADS);
    glColor3ub(177, 188, 186);
    glVertex3d(30, -25, 345);
    glVertex3d(30, -10, 345);
    glVertex3d(30, -10, 340);
    glVertex3d(30, -25, 340);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(177, 188, 186);
    glVertex3d(112, -25, 345);
    glVertex3d(112, -10, 345);
    glVertex3d(112, -10, 340);
    glVertex3d(112, -25, 340);
    glEnd();
     glBegin(GL_QUADS);
    glColor3ub(126, 143, 140);
    glVertex3d(30, -10, 340);
    glVertex3d(30, -10, 345);
    glVertex3d(112, -10, 345);
    glVertex3d(112, -10, 340);
    glEnd();
    // garis parkir
    glBegin(GL_QUADS);// 1
    glColor3f(245, 224, 0.0);
    glVertex3d(25, -24, 305);
    glVertex3d(30, -24, 340);
    glVertex3d(32, -24, 340);
    glVertex3d(27, -24, 305);
    glEnd();
     glBegin(GL_QUADS);// 2
    glColor3f(245, 224, 0.0);
    glVertex3d(45, -24, 305);
    glVertex3d(50, -24, 340);
    glVertex3d(52, -24, 340);
    glVertex3d(47, -24, 305);
    glEnd();

    glBegin(GL_QUADS);// 3
    glColor3f(245, 224, 0.0);
    glVertex3d(65, -24, 305);
    glVertex3d(70, -24, 340);
    glVertex3d(72, -24, 340);
    glVertex3d(67, -24, 305);
    glEnd();
    glBegin(GL_QUADS);// 4
    glColor3f(245, 224, 0.0);
    glVertex3d(85, -24, 305);
    glVertex3d(90, -24, 340);
    glVertex3d(92, -24, 340);
    glVertex3d(87, -24, 305);
    glEnd();
    glBegin(GL_QUADS);// 5
    glColor3f(245, 224, 0.0);
    glVertex3d(105, -24, 305);
    glVertex3d(110, -24, 340);
    glVertex3d(112, -24, 340);
    glVertex3d(107, -24, 305);
    glEnd();
     glBegin(GL_QUADS); // line kuning
    glColor3f(245, 224, 0.0);
    glVertex3d(29, -24, 345);
    glVertex3d(29, -24, 370);
    glVertex3d(30, -24, 370);
    glVertex3d(30, -24, 345);
    glEnd();
    glBegin(GL_QUADS); // line kuning
    glColor3f(245, 224, 0.0);
    glVertex3d(112, -24, 345);
    glVertex3d(112, -24, 370);
    glVertex3d(113, -24, 370);
    glVertex3d(113, -24, 345);
    glEnd();
    // atap lantai 1
     glBegin(GL_QUADS);
    glColor3f(0.75, 0.75, 0.75);
    glVertex3d(25, 30, -45);
    glVertex3d(130, 30, -45);
    glVertex3d(130, 30, 230);
    glVertex3d(25, 30, 230);
    glEnd();
    ////// update adit ////
    // kotak atas hotel 1
    glBegin(GL_QUADS);// depan
   glColor3ub(126, 143, 140);
    glVertex3d(70, 320, 225);
    glVertex3d(70, 330, 225);
    glVertex3d(112, 330, 225);
    glVertex3d(112, 320, 225);
    glEnd();
     glBegin(GL_QUADS);// belakang
   glColor3ub(126, 143, 140);
    glVertex3d(70, 320, 200);//rendah
    glVertex3d(70, 330, 200);// tinggi
    glVertex3d(112, 330, 200);//tinggi
    glVertex3d(112, 320, 200);//rendah
    glEnd();
     glBegin(GL_QUADS);//kiri
    glColor3ub(126, 143, 140);
    glVertex3d(70, 320, 225);//rendah
    glVertex3d(70, 330, 225);
    glVertex3d(70, 330, 200);
    glVertex3d(70, 320, 200);//rendah
    glEnd();
    glBegin(GL_QUADS);// kanan
   glColor3ub(126, 143, 140);
    glVertex3d(112, 320, 225);
    glVertex3d(112, 330, 225);
    glVertex3d(112, 330, 200);
    glVertex3d(112, 320, 200);
    glEnd();
     glBegin(GL_QUADS);
    glColor3ub(126, 143, 140);
    glVertex3d(70, 330, 200);
    glVertex3d(70, 330, 225);
    glVertex3d(112, 330, 225);
    glVertex3d(112, 330, 200);
    glEnd();
      // kotak atas hotel 2
    glBegin(GL_QUADS);// depan
   glColor3ub(126, 143, 140);
    glVertex3d(70, 320, 150);
    glVertex3d(70, 330, 150);
    glVertex3d(112, 330, 150);
    glVertex3d(112, 320, 150);
    glEnd();
     glBegin(GL_QUADS);// belakang
   glColor3ub(126, 143, 140);
    glVertex3d(70, 320, 100);//rendah
    glVertex3d(70, 330, 100);// tinggi
    glVertex3d(112, 330, 100);//tinggi
    glVertex3d(112, 320, 100);//rendah
    glEnd();
     glBegin(GL_QUADS);//kiri
    glColor3ub(126, 143, 140);
    glVertex3d(70, 320, 150);//rendah
    glVertex3d(70, 330, 150);
    glVertex3d(70, 330, 100);
    glVertex3d(70, 320, 100);//rendah
    glEnd();
    glBegin(GL_QUADS);// kanan
   glColor3ub(126, 143, 140);
    glVertex3d(112, 320, 150);
    glVertex3d(112, 330, 150);
    glVertex3d(112, 330, 100);
    glVertex3d(112, 320, 100);
    glEnd();
     glBegin(GL_QUADS);
    glColor3ub(126, 143, 140);
    glVertex3d(70, 330, 100);
    glVertex3d(70, 330, 150);
    glVertex3d(112, 330, 150);
    glVertex3d(112, 330, 100);
    glEnd();

    // isi dalam hotel

      // tv lobby
        glBegin(GL_QUADS);
    glColor3ub(181, 177, 177);
    glVertex3d(125, 0, 120);
    glVertex3d(125, 20, 120);
    glVertex3d(125, 20, 90);
    glVertex3d(125, 0, 90);
    glEnd();
       glBegin(GL_QUADS);
     glColor3ub(255, 250, 250);
    glVertex3d(125, 20, 90);
    glVertex3d(125, 20, 120);
    glVertex3d(130, 20, 120);
    glVertex3d(130, 20, 90);
    glEnd();
           glBegin(GL_QUADS);
     glColor3ub(255, 250, 250);
    glVertex3d(125, 0, 90);
    glVertex3d(125, 0, 120);
    glVertex3d(130, 0, 120);
    glVertex3d(130, 0, 90);
    glEnd();
     glBegin(GL_QUADS);// depan
   glColor3ub(255, 250, 250);
    glVertex3d(125, 0, 120);
    glVertex3d(125, 20, 120);
    glVertex3d(130, 20, 120);
    glVertex3d(130, 0, 120);
    glEnd();
     glBegin(GL_QUADS);// belakang
   glColor3ub(255, 250, 250);
    glVertex3d(125, 0, 90);
    glVertex3d(125, 20, 90);
    glVertex3d(130, 20, 90);
    glVertex3d(130, 0, 90);
    glEnd();


     glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex3d(125, 0, 120);
    glVertex3d(125, 20, 120);
    glVertex3d(125, 20, 90);
    glVertex3d(125, 0, 90);
    glEnd();
      glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex3d(125, 20, 90);
    glVertex3d(125, 20, 120);
    glVertex3d(129, 20, 120);
    glVertex3d(129, 20, 90);
    glEnd();
          glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex3d(125, 0, 90);
    glVertex3d(125, 0, 120);
    glVertex3d(129, 0, 120);
    glVertex3d(129, 0, 90);
    glEnd();
     glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex3d(125, 0, 120);
    glVertex3d(125, 20, 120);
    glVertex3d(129, 20, 120);
    glVertex3d(129, 0, 120);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex3d(125, 0, 90);
    glVertex3d(125, 20, 90);
    glVertex3d(129, 20, 90);
    glVertex3d(129, 0, 90);
    glEnd();
       //atap hotel

    glBegin(GL_QUADS);
    glColor3f(0.75, 0.75, 0.75);
    glVertex3d(25, 30, -45);
    glVertex3d(130, 30, -45);
    glVertex3d(130, 30, 230);
    glVertex3d(25, 30, 230);
    glEnd();

    // meja 1
        glBegin(GL_QUADS);
    glColor3ub(92, 55, 20);
    glVertex3d(70, -10, 90);
    glVertex3d(70, -10, 120);
    glVertex3d(90, -10, 120);
    glVertex3d(90, -10, 90);
    glEnd();
     glBegin(GL_QUADS);// depan
   glColor3ub(117, 113, 109);
    glVertex3d(78, -20, 107);
    glVertex3d(78, -10, 107);
    glVertex3d(82, -10, 107);
    glVertex3d(82, -20, 107);
    glEnd();
     glBegin(GL_QUADS);// belakang
   glColor3ub(117, 113, 109);
    glVertex3d(78, -20, 103);
    glVertex3d(78, -10, 103);
    glVertex3d(82, -10, 103);
    glVertex3d(82,-20, 103);
    glEnd();
    // meja 2
        glBegin(GL_QUADS);
    glColor3ub(92, 55, 20);
    glVertex3d(70, -10, 170);
    glVertex3d(70, -10, 200);
    glVertex3d(90, -10, 200);
    glVertex3d(90, -10, 170);
    glEnd();
     glBegin(GL_QUADS);// depan
   glColor3ub(117, 113, 109);
    glVertex3d(78, -20, 187);
    glVertex3d(78, -10, 187);
    glVertex3d(82, -10, 187);
    glVertex3d(82, -20, 187);
    glEnd();
     glBegin(GL_QUADS);// belakang
   glColor3ub(117, 113, 109);
    glVertex3d(78, -20, 183);
    glVertex3d(78, -10, 183);
    glVertex3d(82, -10, 183);
    glVertex3d(82, -20, 183);
    glEnd();


    // batang lampu atas 1
    glBegin(GL_QUADS);// depan
   glColor3ub(117, 113, 109);
    glVertex3d(78, 20, 107);
    glVertex3d(78, 30, 107);
    glVertex3d(79, 30, 107);
    glVertex3d(79, 20, 107);
    glEnd();
     glBegin(GL_QUADS);// belakang
   glColor3ub(117, 113, 109);
    glVertex3d(78, 20, 106);
    glVertex3d(78, 30, 106);
    glVertex3d(79, 30, 106);
    glVertex3d(79, 20, 106);
    glEnd();
      glBegin(GL_QUADS);// kiri
    glColor3ub(117, 113, 109);
    glVertex3d(78, 20, 107);
    glVertex3d(78, 30, 107);
    glVertex3d(78, 30, 106);
    glVertex3d(78,20, 106);
    glEnd();
    glBegin(GL_QUADS);// kiri
    glColor3ub(117, 113, 109);
    glVertex3d(79, 20, 107);
    glVertex3d(79, 30, 107);
    glVertex3d(79, 30, 106);
    glVertex3d(79,20, 106);
    glEnd();
    //lampu
     glBegin(GL_QUADS);// depan
   glColor3ub(204, 200, 196);
    glVertex3d(77, 18, 108);
    glVertex3d(77, 20, 108);
    glVertex3d(80, 20, 108);
    glVertex3d(80, 18, 108);
    glEnd();
     glBegin(GL_QUADS);// belakang
   glColor3ub(204, 200, 196);
    glVertex3d(77, 18, 105);
    glVertex3d(77, 20, 105);
    glVertex3d(80, 20, 105);
    glVertex3d(80, 18, 105);
    glEnd();
      glBegin(GL_QUADS);// kiri
    glColor3ub(204, 200, 196);
    glVertex3d(77, 18, 108);
    glVertex3d(77, 20, 108);
    glVertex3d(77, 20, 105);
    glVertex3d(77,18, 105);
    glEnd();
    glBegin(GL_QUADS);// kiri
    glColor3ub(204, 200, 196);
    glVertex3d(80, 18, 108);
    glVertex3d(80, 20, 108);
    glVertex3d(80, 20, 105);
    glVertex3d(80,18, 105);
    glEnd();
      // batang lampu atas 2
    glBegin(GL_QUADS);// depan
   glColor3ub(117, 113, 109);
    glVertex3d(78, 20, 185);
    glVertex3d(78, 30, 185);
    glVertex3d(79, 30, 185);
    glVertex3d(79, 20, 185);
    glEnd();
     glBegin(GL_QUADS);// belakang
   glColor3ub(117, 113, 109);
    glVertex3d(78, 20, 186);
    glVertex3d(78, 30, 186);
    glVertex3d(79, 30, 186);
    glVertex3d(79, 20, 186);
    glEnd();
      glBegin(GL_QUADS);// kiri
    glColor3ub(117, 113, 109);
    glVertex3d(78, 20, 185);
    glVertex3d(78, 30, 185);
    glVertex3d(78, 30, 186);
    glVertex3d(78,20, 186);
    glEnd();
    glBegin(GL_QUADS);// kiri
    glColor3ub(117, 113, 109);
    glVertex3d(79, 20, 185);
    glVertex3d(79, 30, 185);
    glVertex3d(79, 30, 186);
    glVertex3d(79,20, 186);
    glEnd();
    //lampu
     glBegin(GL_QUADS);// depan
   glColor3ub(204, 200, 196);
    glVertex3d(77, 18, 188);
    glVertex3d(77, 20, 188);
    glVertex3d(80, 20, 188);
    glVertex3d(80, 18, 188);
    glEnd();
     glBegin(GL_QUADS);// belakang
   glColor3ub(204, 200, 196);
    glVertex3d(77, 18, 185);
    glVertex3d(77, 20, 185);
    glVertex3d(80, 20, 185);
    glVertex3d(80, 18, 185);
    glEnd();
      glBegin(GL_QUADS);// kiri
    glColor3ub(204, 200, 196);
    glVertex3d(77, 18, 188);
    glVertex3d(77, 20, 188);
    glVertex3d(77, 20, 185);
    glVertex3d(77,18, 185);
    glEnd();
    glBegin(GL_QUADS);// kiri
    glColor3ub(204, 200, 196);
    glVertex3d(80, 18, 188);
    glVertex3d(80, 20, 188);
    glVertex3d(80, 20, 185);
    glVertex3d(80,18, 185);
    glEnd();
    ///// Daniel ////////// Daniel ////////// Daniel ////////// Daniel ////////// Daniel ////////// Daniel ////////// Daniel /////
    ///// Daniel ////////// Daniel ////////// Daniel ////////// Daniel ////////// Daniel ////////// Daniel ////////// Daniel /////
    ///// Daniel ////////// Daniel ////////// Daniel ////////// Daniel ////////// Daniel ////////// Daniel ////////// Daniel /////
    ///// Daniel ////////// Daniel ////////// Daniel ////////// Daniel ////////// Daniel ////////// Daniel ////////// Daniel /////
    ///// Daniel ////////// Daniel ////////// Daniel ////////// Daniel ////////// Daniel ////////// Daniel ////////// Daniel /////
    ///// Daniel ////////// Daniel ////////// Daniel ////////// Daniel ////////// Daniel ////////// Daniel ////////// Daniel /////
    ///// Daniel ////////// Daniel ////////// Daniel ////////// Daniel ////////// Daniel ////////// Daniel ////////// Daniel /////


    // tembok depan
    glBegin(GL_QUADS);
    glColor3ub(126, 143, 140);
    glVertex3d(20, -20, 230);
    glVertex3d(20, 30, 230);
    glVertex3d(125, 30, 230);
    glVertex3d(125, -20, 230);
    glEnd();
    //frame tembok depan
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(20.1, -20.1, 230.1);
    glVertex3f(20.1, 30.1, 230.1);
    glVertex3f(125.1, 30.1, 230.1);
    glVertex3f(125.1, -20.1, 230.1);
    glEnd();
    //ornamen bagian depan //ornamen bagian depan //ornamen bagian depan
    glBegin(GL_QUADS);
    glColor3ub(240, 254, 255);
    glVertex3d(20, -20, 235);
    glVertex3d(20, 35, 235);
    glVertex3d(25, 35, 235);
    glVertex3d(25, -20, 235);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(240, 254, 255);
    glVertex3d(25, 30, 235);
    glVertex3d(25, 35, 235);
    glVertex3d(125, 35, 235);
    glVertex3d(125, 30, 235);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(240, 254, 255);
    glVertex3d(20, 35, 235);
    glVertex3d(20, 35, 230);
    glVertex3d(125, 35, 230);
    glVertex3d(125, 35, 235);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(240, 254, 255);
    glVertex3d(20, 30, 235);
    glVertex3d(20, 30, 230);
    glVertex3d(125, 30, 230);
    glVertex3d(125, 30, 235);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(240, 254, 255);
    glVertex3d(20, -20, 235);
    glVertex3d(20, -20, 230);
    glVertex3d(20, 35, 230);
    glVertex3d(20, 35, 235);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(240, 254, 255);
    glVertex3d(125, 30, 235);
    glVertex3d(125, 30, 230);
    glVertex3d(125, 35, 230);
    glVertex3d(125, 35, 235);
    glEnd();
    //frame ornamen
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex3d(20, 35, 235);
    glVertex3d(20, -20, 235);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex3d(25, 30, 235);
    glVertex3d(25, -20, 235);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex3d(20, 35, 235);
    glVertex3d(125, 35, 235);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex3d(25, 30, 235);
    glVertex3d(125, 30, 235);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex3d(125, 30, 235);
    glVertex3d(125, 30, 230);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex3d(125, 35, 235);
    glVertex3d(125, 35, 230);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex3d(125, 35, 235);
    glVertex3d(125, 30, 235);
    glEnd();
    //atap kaca depan gedung
    glBegin(GL_QUADS);
    glColor3ub(166, 175, 191);
    glVertex3d(80, 28, 250);
    glVertex3d(80, 28, 230);
    glVertex3d(145, 28, 230);
    glVertex3d(145, 28, 250);
    glEnd();
    glBegin(GL_QUADS);
    glVertex3d(80, 25, 250);
    glVertex3d(80, 25, 230);
    glVertex3d(145, 25, 230);
    glVertex3d(145, 25, 250);
    glEnd();
    glBegin(GL_QUADS);
    glVertex3f(125.1, 25, 230);
    glVertex3f(125.1, 25, 130);
    glVertex3d(145, 25, 130);
    glVertex3d(145, 25, 230);
    glEnd();
    glBegin(GL_QUADS);
    glVertex3f(125.1, 28, 230);
    glVertex3f(125.1, 28, 130);
    glVertex3d(145, 28, 130);
    glVertex3d(145, 28, 230);
    glEnd();
    //segmen 2
    glBegin(GL_QUADS);
    glVertex3d(130, 28, 65);
    glVertex3d(130, 28, 130);
    glVertex3d(145, 28, 130);
    glVertex3d(145, 28, 65);
    glEnd();
    //tutup samping
    glBegin(GL_QUADS);
    glVertex3d(130, 25, 65);
    glVertex3d(130, 25, 130);
    glVertex3d(145, 25, 130);
    glVertex3d(145, 25, 65);
    glEnd();
    glBegin(GL_QUADS);
    glVertex3d(145, 25, 65);
    glVertex3d(145, 25, 250);
    glVertex3d(145, 28, 250);
    glVertex3d(145, 28, 65);
    glEnd();
    glBegin(GL_QUADS);
    glVertex3d(80, 25, 250);
    glVertex3d(80, 28, 250);
    glVertex3d(145, 28, 250);
    glVertex3d(145, 25, 250);
    glEnd();
    glBegin(GL_QUADS);
    glVertex3d(80, 25, 230);
    glVertex3d(80, 28, 230);
    glVertex3d(80, 28, 250);
    glVertex3d(80, 25, 250);
    glEnd();
    //frame ornamen atap kaca
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex3d(80, 28, 250);
    glVertex3d(145, 28, 250);
    glEnd();
    glBegin(GL_LINES);
    glVertex3d(80, 25, 250);
    glVertex3d(145, 25, 250);
    glEnd();
    glBegin(GL_LINES);
    glVertex3d(80, 25, 250);
    glVertex3d(80, 28, 250);
    glEnd();
    glBegin(GL_LINES);
    glVertex3d(80, 25, 230);
    glVertex3d(80, 25, 250);
    glEnd();
    glBegin(GL_LINES);
    glVertex3d(80, 28, 230);
    glVertex3d(80, 28, 250);
    glEnd();
    glBegin(GL_LINES);
    glVertex3d(145, 28, 65);
    glVertex3d(145, 28, 250);
    glEnd();
    glBegin(GL_LINES);
    glVertex3d(145, 25, 65);
    glVertex3d(145, 25, 250);
    glEnd();
    //tiang atap kaca samping

    for(j=250; j>= 65; j=j-20)
    {
        glBegin(GL_QUADS);
        glColor3ub(90, 99, 115);
        glVertex3d(140, 25, j);
        glVertex3d(140, -20, j);
        glVertex3d(142, -20, j);
        glVertex3d(142, 25, j);
        glEnd();
        glBegin(GL_QUADS);
        glVertex3d(140, 25, j-2);
        glVertex3d(140, -20, j-2);
        glVertex3d(140, -20, j);
        glVertex3d(140, 25, j);
        glEnd();
        glBegin(GL_QUADS);
        glVertex3d(142, 25, j-2);
        glVertex3d(142, -20, j-2);
        glVertex3d(142, -20, j);
        glVertex3d(142, 25, j);
        glEnd();
        glBegin(GL_QUADS);
        glVertex3d(142, 25, j-2);
        glVertex3d(142, -20, j-2);
        glVertex3d(142, -20, j-2);
        glVertex3d(142, 25, j-2);
        glBegin(GL_LINES);
        glColor3ub(0,0,0);
        glVertex3d(142, 25, j);
        glVertex3d(142, -20, j);
        glEnd();
        glBegin(GL_LINES);
        glVertex3d(140, 25, j);
        glVertex3d(140, -20, j);
        glEnd();
        glBegin(GL_LINES);
        glColor3ub(0,0,0);
        glVertex3d(142, 25, j-2);
        glVertex3d(142, -20, j-2);
        glEnd();
        glBegin(GL_LINES);
        glVertex3d(140, 25, j-2);
        glVertex3d(140, -20, j-2);
        glEnd();
    glEnd();
    }



    //tembok samping
    glBegin(GL_LINES);
    glColor3ub(126, 143, 140);
    glVertex3d(125, -20, 230);
    glVertex3d(125, 30, 230);
    glVertex3d(125, 30, 130);
    glVertex3d(125, -20, 130);
    glEnd();

    //frame tembok samping
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3d(125.1, -20.1, 230.1);
    glVertex3d(125.1, 30.1, 230.1);
    glVertex3d(125.1, 30.1, 130.1);
    glVertex3d(125.1, -20.1, 130.1);
    glEnd();


    //tembok samping kanan section 1
    glBegin(GL_QUADS);
    glColor3ub(126, 143, 140);
    glVertex3d(125, -20, 130);
    glVertex3d(125, 30, 130);
    glVertex3d(130, 30, 130);
    glVertex3d(130, -20, 130);
    glEnd();

    //frame tembok samping kanan section 1
    glBegin(GL_LINE_LOOP);
    glColor3ub(0, 0, 0);
    glVertex3d(125.1, -20.1, 130.1);
    glVertex3d(125.1, 30.1, 130.1);
    glVertex3d(130.1, 30.1, 130.1);
    glVertex3d(130.1, -20.1, 130.1);
    glEnd();

    //tembok samping kanan section 2
    glBegin(GL_QUADS);
    glColor3ub(126, 143, 140);
    glVertex3d(130, -20, 130);
    glVertex3d(130, 30, 130);
    glVertex3d(130, 30, 75);
    glVertex3d(130, -20, 75);
    glEnd();
    //tembok samping kanan section 3
    glBegin(GL_QUADS);
    glColor3ub(126, 143, 140);
    glVertex3d(130, 25, 130);
    glVertex3d(130, 30, 130);
    glVertex3d(130, 30, -45);
    glVertex3d(130, 25, -45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(126, 143, 140);
    glVertex3d(130, 25, -45);
    glVertex3d(115, 25, -45);
    glVertex3d(115, 30, -45);
    glVertex3d(130, 30, -45);
    glEnd();

     //frametembok samping kanan section 2
    glBegin(GL_LINE_LOOP);
    glColor3ub(0,0,0);
    glVertex3d(130.1, 30.1, 130.1);
    glVertex3d(130.1, -20.1, 130.1);
    glVertex3d(130.1, -20.1, 75.1);
    glVertex3d(130.1, 25.1, 75.1);
    glVertex3d(130.1, 25.1, -44.9);
    glVertex3d(130.1, 30.1, -44.9);
    glEnd();
    glBegin(GL_LINES);

    //ruang basement belakang

    glBegin(GL_QUADS);
    glColor3ub(240, 254, 255);
    glVertex3d(25, -20, -45);
    glVertex3d(25, 30, -45);
    glVertex3d(115, 30, -45);
    glVertex3d(115, -20, -45);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(240, 254, 255);
    glVertex3d(25, -20, -45);
    glVertex3d(25, 30, -45);
    glVertex3d(115, 30, -45);
    glVertex3d(115, -20, -45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(240, 254, 255);
    glVertex3d(25, -20, -45);
    glVertex3d(25, 30, -45);
    glVertex3d(25, 30, -15);
    glVertex3d(25, -20, -15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(240, 254, 255);
    glVertex3d(115, -20, -45);
    glVertex3d(115, 30, -45);
    glVertex3d(115, 30, -15);
    glVertex3d(115, -20, -15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(240, 254, 255);
    glVertex3d(25, -20, -15);
    glVertex3d(25, 30, -15);
    glVertex3d(115, 30, -15);
    glVertex3d(115, -20, -15);
    glEnd();

    //frame bangunan belakang
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex3d(25.1, -19.9, -14.9);
    glVertex3d(25.1, 25.1, -14.9);
    glEnd();
    glBegin(GL_LINES);
    glVertex3d(115.1, 30.1, -14.9);
    glVertex3d(115.1, -19.9, -14.9);
    glEnd();
    glBegin(GL_LINES);
    glVertex3d(25.1, 30.1, -14.9);
    glVertex3d(115.1, 30.1, -14.9);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3ub(0, 0, 0);
    glVertex3d(25.1, -19.9, -44.9);
    glVertex3d(25.1, 30.1, -44.9);
    glVertex3d(115.1, 30.1, -44.9);
    glVertex3d(115.1, -19.9, -44.9);
    glEnd();
    glBegin(GL_LINES);
    glVertex3f(25.1, 30.1, -14.9);
    glVertex3f(25.1, 30.1, -44.9);
    glEnd();
    glBegin(GL_LINES);
    glVertex3f(115.1, 30.1, -14.9);
    glVertex3f(115.1, 30.1, -44.9);
    glEnd();

    //tembok lt 1 samping kiri
    glBegin(GL_QUADS);
    glColor3ub(126, 143, 140);
    glVertex3d(20, -20, 230);
    glVertex3d(20, 30, 230);
    glVertex3d(20, 30, 130);
    glVertex3d(20, -20, 130);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(126, 143, 140);
    glVertex3d(20, -20, 130);
    glVertex3d(20, 30, 130);
    glVertex3d(25, 30, 130);
    glVertex3d(25, -20, 130);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex3d(20, 30, 230);
    glVertex3d(20, 30, 130);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex3d(20, 30, 130);
    glVertex3d(20, -20, 130);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex3d(20, 30, 130);
    glVertex3d(25, 30, 130);
    glEnd();
    //tembok lt 1 samping kiri section 2
    glBegin(GL_QUADS);
    glColor3ub(240, 254, 255);
    glVertex3d(25, -20, 130);
    glVertex3d(25, 30, 130);
    glVertex3d(25, 30, 75);
    glVertex3d(25, -20, 75);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(240, 254, 255);
    glVertex3d(25, 25, -45);
    glVertex3d(25, 30, -45);
    glVertex3d(25, 30, 130);
    glVertex3d(25, 25, 130);
    glEnd();
    //frame tembok lt 1 samping kiri section 2
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex3d(25, 30, -45);
    glVertex3d(25, 30, 130);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex3d(25, 25, -15);
    glVertex3d(25, 25, 75);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex3d(25, 25, 75);
    glVertex3d(25, -20, 75);
    glEnd();
    //tembok sekat basement - lobby
    glBegin(GL_QUADS);
    glColor3ub(240, 254, 255);
    glVertex3d(25, -20, 75);
    glVertex3d(25, 30, 75);
    glVertex3d(130, 30, 75);
    glVertex3d(130, -20, 75);
    glEnd();
    //frame
    //tembok sekat basement - lobby
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex3d(25, 30, 75);
    glVertex3d(130, 30, 75);
    glEnd();

    //kaca lantai 1 (x+3, z+3)
    glBegin(GL_QUADS);
    glColor3ub(42, 47, 54);
    glVertex3d(50, -20, 233);
    glVertex3d(50, 20, 233);
    glVertex3d(128, 20, 233);
    glVertex3d(128, -20, 233);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(42, 47, 54);
    glVertex3d(50, -20, 233);
    glVertex3d(50, 20, 233);
    glVertex3d(50, 20, 230);
    glVertex3d(50, -20, 230);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(42, 47, 54);
    glVertex3d(128, -20, 233);
    glVertex3d(128, 20, 233);
    glVertex3d(128, 20, 130);
    glVertex3d(128, -20, 130);
    glEnd();

    //slab kaca lantai1
    // kanan
    glBegin(GL_QUADS);
    glColor3ub(230, 250, 255);
    glVertex3d(129, 20, 233);
    glVertex3d(125, 20, 233);
    glVertex3d(125, 20, 130);
    glVertex3d(129, 20, 130);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(230, 250, 255);
    glVertex3d(129, 20, 234);
    glVertex3d(129, 22, 234);
    glVertex3d(129, 22, 130);
    glVertex3d(129, 20, 130);
    glEnd();
    //frame code diatas
    glBegin(GL_LINE_LOOP);
    glColor3ub(0, 0, 0);
    glVertex3d(129, 20, 234);
    glVertex3d(129, 22, 234);
    glVertex3d(129, 22, 130);
    glVertex3d(129, 20, 130);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(230, 250, 255);
    glVertex3d(129, 22, 233);
    glVertex3d(125, 22, 233);
    glVertex3d(125, 22, 130);
    glVertex3d(129, 22, 130);
    glEnd();
    //segmen kaca samping
    for (i=130; i<230; i=i+12.5)
    {
        glBegin(GL_LINES);
        glColor3ub(255, 255, 255);
        glVertex3d(129, 20, i);
        glVertex3d(129, -20, i);
        glEnd();
    }
    //depan
    glBegin(GL_QUADS);
    glColor3ub(230, 250, 255);
    glVertex3d(50, 20, 230);
    glVertex3d(50, 20, 234);
    glVertex3d(129, 20, 234);
    glVertex3d(129, 20, 230);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(230, 250, 255);
    glVertex3d(50, 20, 234);
    glVertex3d(50, 22, 234);
    glVertex3d(129, 22, 234);
    glVertex3d(129, 20, 234);
    glEnd();
    //frame code diatas
    glBegin(GL_LINE_LOOP);
    glColor3ub(0, 0, 0);
    glVertex3d(50, 20, 234);
    glVertex3d(50, 22, 234);
    glVertex3d(129, 22, 234);
    glVertex3d(129, 20, 234);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(230, 250, 255);
    glVertex3d(50, 22, 230);
    glVertex3d(50, 22, 234);
    glVertex3d(129, 22, 234);
    glVertex3d(129, 22, 230);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(230, 250, 255);
    glVertex3d(50, 22, 230);
    glVertex3d(50, 20, 230);
    glVertex3d(50, 20, 234);
    glVertex3d(50, 22, 234);
    glEnd();
    //frame code diatas
    glBegin(GL_LINE_LOOP);
    glColor3ub(0, 0, 0);
    glVertex3d(50, 22, 230);
    glVertex3d(50, 20, 230);
    glVertex3d(50, 20, 234);
    glVertex3d(50, 22, 234);
    glEnd();
    for (i=50; i<= 128; i=i+12.5)
    {
        if(i==125)
            i=i+3;
        glBegin(GL_LINES);
        glColor3ub(255,255,255);
        glVertex3f(i, 20, 234);
        glVertex3f(i, -20, 234);
        glEnd();

    }
    //pager tembok basement kanan
    //panjang
    glBegin(GL_QUADS);
    glColor3ub(230, 250, 255);
    glVertex3d(130, -20, -45);
    glVertex3d(130, -10, -45);
    glVertex3d(130, -10, 40);
    glVertex3d(130, -20, 40);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(230, 250, 255);
    glVertex3d(127, -20, -42);
    glVertex3d(127, -10, -42);
    glVertex3d(127, -10, 40);
    glVertex3d(127, -20, 40);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(230, 250, 255);
    glVertex3d(127, -10, -42);
    glVertex3d(127, -10, 40);
    glVertex3d(130, -10, 40);
    glVertex3d(130, -10, -42);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(230, 250, 255);
    glVertex3d(127, -10, 40);
    glVertex3d(127, -20, 40);
    glVertex3d(130, -20, 40);
    glVertex3d(130, -10, 40);
    glEnd();

    //frame
    glBegin(GL_LINE_LOOP);
    glColor3ub(0, 0, 0);
    glVertex3d(127, -10, 40);
    glVertex3d(127, -20, 40);
    glVertex3d(130, -20, 40);
    glVertex3d(130, -10, 40);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex3d(130, -10, 40);
    glVertex3d(130, -10, -45);
    glEnd();
    glBegin(GL_LINES);
    glVertex3d(127, -10, 40);
    glVertex3d(127, -10, -42);
    glEnd();
    glBegin(GL_LINES);
    glVertex3d(127, -10, -42);
    glVertex3d(115, -10, -42);
    glEnd();
    glBegin(GL_LINES);
    glVertex3d(130, -10, -45);
    glVertex3d(115, -10, -45);
    glEnd();
    glBegin(GL_LINES);
    glVertex3d(130, -10, -45);
    glVertex3d(130, -20, -45);
    glEnd();
    //pendek
    glBegin(GL_QUADS);
    glColor3ub(230, 250, 255);
    glVertex3d(130, -20, -45);
    glVertex3d(130, -10, -45);
    glVertex3d(115, -10, -45);
    glVertex3d(115, -20, -45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(230, 250, 255);
    glVertex3d(127, -20, -42);
    glVertex3d(127, -10, -42);
    glVertex3d(115, -10, -42);
    glVertex3d(115, -20, -42);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(230, 250, 255);
    glVertex3d(130, -10, -45);
    glVertex3d(130, -10, -42);
    glVertex3d(115, -10, -42);
    glVertex3d(115, -10, -45);
    glEnd();

    //pillar bagian basement 1//dari kanan

    for (i=120, j= 115; j>15 && i>10; i=i-20,j=j-20)
    {
        if(j==75.0 && i==80.0)
        {
            i=i-20.0;j=j-20.0;
        }
        glBegin(GL_QUADS);
        glColor3ub(230, 250, 255);
        glVertex3d(j, -20, 25);
        glVertex3d(j, -20, 30);
        glVertex3d(j, 30, 30);
        glVertex3d(j, 30, 25);
        glEnd();
        glBegin(GL_QUADS);
        glColor3ub(230, 250, 255);
        glVertex3d(j, -20, 30);
        glVertex3d(i, -20, 30);
        glVertex3d(i, 30, 30);
        glVertex3d(j, 30, 30);
        glEnd();
        glBegin(GL_QUADS);
        glColor3ub(230, 250, 255);
        glVertex3d(j, -20, 25);
        glVertex3d(i, -20, 25);
        glVertex3d(i, 30, 25);
        glVertex3d(j, 30, 25);
        glEnd();
        glBegin(GL_QUADS);
        glColor3ub(230, 250, 255);
        glVertex3d(i, -20, 25);
        glVertex3d(i, -20, 30);
        glVertex3d(i, 30, 30);
        glVertex3d(i, 30, 25);
        glEnd();
        //frame
        glBegin(GL_LINES);
        glColor3ub(0, 0, 0);
        glVertex3d(j, -20, 30);
        glVertex3d(j, 30, 30);
        glEnd();
        glBegin(GL_LINES);
        glColor3ub(0, 0, 0);
        glVertex3d(j, -20, 25);
        glVertex3d(j, 30, 25);
        glEnd();
        glColor3ub(0, 0, 0);
        glVertex3d(i, -20, 30);
        glVertex3d(i, 30, 30);
        glEnd();
        glBegin(GL_LINES);
        glColor3ub(0, 0, 0);
        glVertex3d(i, -20, 25);
        glVertex3d(i, 30, 25);
        glEnd();
        printf("pillar %f\n",j);


    }
    //pondasi hotel//depan
    glBegin(GL_QUADS);
    glColor3ub(200, 218, 227);
    glVertex3d(20, -20, 250);
    glVertex3d(20, -20, 230);
    glVertex3d(145, -20, 230);
    glVertex3d(145, -20, 250);
    glEnd();
    //depan1
    glBegin(GL_QUADS);
    glVertex3d(20, -20, 250);
    glVertex3d(20, -25, 250);
    glVertex3d(145, -25, 250);
    glVertex3d(145, -20, 250);
    glEnd();
    glBegin(GL_QUADS);
    glVertex3d(20, -20, 230);
    glVertex3d(20, -25, 230);
    glVertex3d(20, -25, 250);
    glVertex3d(20, -20, 250);
    glEnd();
    //frame depan
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex3d(20, -20, 250);
    glVertex3d(145, -20, 250);
    glEnd();
    glBegin(GL_LINES);
    glVertex3d(20, -20, 250);
    glVertex3d(20, -20, 230);
    glEnd();
    glBegin(GL_LINES);
    glVertex3d(20, -20, 250);
    glVertex3d(20, -25, 250);
    glEnd();
    glBegin(GL_LINES);
    glVertex3d(145, -20, 250);
    glVertex3d(145, -25, 250);
    glEnd();
    //samping

    glBegin(GL_QUADS);
    glColor3ub(200, 218, 227);
    glVertex3d(125, -20, 250);
    glVertex3d(125, -20, 130);
    glVertex3d(145, -20, 130);
    glVertex3d(145, -20, 250);
    glEnd();
    glBegin(GL_QUADS);
    glVertex3d(130, -20, 130);
    glVertex3d(130, -20, 68);
    glVertex3d(145, -20, 68);
    glVertex3d(145, -20, 130);
    glEnd();
    glBegin(GL_QUADS);
    glVertex3d(145, -25, 250);
    glVertex3d(145, -25, 68);
    glVertex3d(145, -20, 68);
    glVertex3d(145, -20, 250);
    glEnd();
    glBegin(GL_QUADS);
    glVertex3d(130, -20, 75);
    glVertex3d(130, -20, 68);
    glVertex3d(25, -20, 68);
    glVertex3d(25, -20, 75);
    glEnd();
    glBegin(GL_TRIANGLES);
    glVertex3f(130, -20, 68);
    glVertex3f(145, -20, 68);
    glVertex3f(145, -25, 68);
    glEnd();
    //frame
    glBegin(GL_LINES);
    glColor3b(0,0,0);
    glVertex3d(145, -20, 68);
    glVertex3d(145, -20, 250);
    glEnd();
    glBegin(GL_LINES);
    glVertex3d(145, -20, 68);
    glVertex3d(145, -25, 68);
    glEnd();
    glBegin(GL_LINES);
    glVertex3d(130, -20, 68);
    glVertex3d(145, -20, 68);
    glEnd();
    glBegin(GL_LINES);
    glVertex3d(130, -19.9, 68);
    glVertex3d(145, -24.9, 68);
    glEnd();
    //pondasi hotel samping
    glBegin(GL_QUADS);
    glColor3ub(200, 218, 227);
    glVertex3f(130, -20, 68);
    glVertex3f(130, -20, 40);
    glVertex3f(145, -25, 40);
    glVertex3f(145, -25, 68);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex3f(130, -20, 40);
    glVertex3f(145, -20, 40);
    glVertex3f(145, -25, 40);
    glEnd();
    glBegin(GL_TRIANGLES);
    glVertex3f(130, -20, 42);
    glVertex3f(145, -20, 42);
    glVertex3f(145, -25, 42);

    glEnd();
    glBegin(GL_QUADS);
    glVertex3f(145, -20, 40);
    glVertex3f(145, -20, -45);
    glVertex3f(145, -25, -45);
    glVertex3f(145, -25, 40);
    glEnd();


    glEnd();
    glBegin(GL_QUADS);
    glVertex3f(143, -20, 38);
    glVertex3f(143, -20, -45);
    glVertex3f(143, -25, -45);
    glVertex3f(143, -25, 38);
    glEnd();
    glBegin(GL_QUADS);
    glVertex3f(143, -20, 38);
    glVertex3f(143, -20, -45);
    glVertex3f(145, -20, -45);
    glVertex3f(145, -20, 38);
    glEnd();
    glEnd();
    glBegin(GL_QUADS);
    glVertex3f(143, -20, 38);
    glVertex3f(130, -20, 38);
    glVertex3f(130, -25, 38);
    glVertex3f(143, -25, 38);
    glEnd();
    glBegin(GL_QUADS);
    glVertex3f(145, -20, 38);
    glVertex3f(130, -20, 38);
    glVertex3f(130, -20, 40);
    glVertex3f(145, -20, 40);
    glEnd();
    //hijau
    glBegin(GL_QUADS);
    glColor3ub(48, 122, 58);
    glVertex3f(145, -20, 38);
    glVertex3f(130, -20, 38);
    glVertex3f(130, -20, -45);
    glVertex3f(145, -20, -45);
    glEnd();
    //frame
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex3f(145, -20, 40);
    glVertex3f(130, -20, 40);
    glEnd();
    glBegin(GL_LINES);
    glVertex3f(145, -20, -45);
    glVertex3f(145, -20, 40);
    glEnd();
    glBegin(GL_LINES);
    glVertex3f(130, -19.7, 40);
    glVertex3f(145, -24.7, 40);
    glEnd();
    //pondasi gedung belakang
    glBegin(GL_QUADS);
    glColor3ub(200, 218, 227);
    glVertex3f(145, -25, -45);
    glVertex3f(25, -25, -45);
    glVertex3f(25, -20, -45);
    glVertex3f(145, -20, -45);
    glEnd();
    //pondasi gedung samping
    glBegin(GL_QUADS);
    glColor3ub(200, 218, 227);
    glVertex3f(25, -25, -45);
    glVertex3f(25, -25, 130);
    glVertex3f(25, -20, 130);
    glVertex3f(25, -20, -45);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(200, 218, 227);
    glVertex3f(25, -25, 130);
    glVertex3f(20, -25, 130);
    glVertex3f(20, -20, 130);
    glVertex3f(25, -20, 130);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(200, 218, 227);
    glVertex3f(20, -25, 130);
    glVertex3f(20, -25, 230);
    glVertex3f(20, -20, 230);
    glVertex3f(20, -20, 130);
    glEnd();
    //lantai basement
    glBegin(GL_QUADS);
    glColor3ub(200, 218, 227);
    glVertex3f(25, -20, -45);
    glVertex3f(25, -20, 70);
    glVertex3f(130, -20, 70);
    glVertex3f(130, -20, -45);
    glEnd();
    //lantai lobby
    glBegin(GL_POLYGON);
    glColor3ub(213, 235, 232);
    glVertex3f(20, -20, 230);
    glVertex3f(125, -20, 230);
    glVertex3f(125, -20, 130);
    glVertex3f(130, -20, 130);
    glVertex3f(130, -20, 75);
    glVertex3f(25, -20, 75);
    glVertex3f(20, -20, 75);
    glEnd();
    //pintu kanan
    glBegin(GL_QUADS);
    glColor3ub(97, 117, 115);
    glVertex3f(130.1, 0, 125);
    glVertex3f(130.1, 0, 115);
    glVertex3f(130.1, -20, 115);
    glVertex3f(130.1, -20, 125);
    glEnd();
    //frame pintu
    glBegin(GL_LINE_LOOP);
    glColor3ub(255,255,255);
    glVertex3f(130.1, 0, 125);
    glVertex3f(130.1, 0, 115);
    glVertex3f(130.1, -20, 115);
    glVertex3f(130.1, -20, 125);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(97, 117, 115);
    glVertex3f(130.1, 0, 105);
    glVertex3f(130.1, 0, 95);
    glVertex3f(130.1, -20, 95);
    glVertex3f(130.1, -20, 105);
    glEnd();
    //frame pintu
    glBegin(GL_LINE_LOOP);
    glColor3ub(255,255,255);
    glVertex3f(130.1, 0, 105);
    glVertex3f(130.1, 0, 95);
    glVertex3f(130.1, -20, 95);
    glVertex3f(130.1, -20, 105);
    glEnd();

    //jendela kanan

    glBegin(GL_QUADS);
    glColor3ub(36, 41, 40);
    glVertex3f(130.1, 0, 90);
    glVertex3f(130.1, 0, 85);
    glVertex3f(130.1, -5, 85);
    glVertex3f(130.1, -5, 90);
    glEnd();
    //frame jendela1
    glBegin(GL_LINE_LOOP);
    glColor3ub(255,255,255);
    glVertex3f(130.1, 0, 90);
    glVertex3f(130.1, 0, 85);
    glVertex3f(130.1, -5, 85);
    glVertex3f(130.1, -5, 90);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(36, 41, 40);
    glVertex3f(130.1, 0, 85);
    glVertex3f(130.1, 0, 80);
    glVertex3f(130.1, -5, 80);
    glVertex3f(130.1, -5, 85);
    glEnd();
    //frame jendela1
    glBegin(GL_LINE_LOOP);
    glColor3ub(255,255,255);
    glVertex3f(130.1, 0, 85);
    glVertex3f(130.1, 0, 80);
    glVertex3f(130.1, -5, 80);
    glVertex3f(130.1, -5, 85);
    glEnd();

        //* 2ND FLOOR *//
        //heykel////heykel////heykel////heykel////heykel////heykel////heykel////heykel////heykel////heykel////heykel//
        //heykel////heykel////heykel////heykel////heykel////heykel////heykel////heykel////heykel////heykel////heykel//
        //heykel////heykel////heykel////heykel////heykel////heykel////heykel////heykel////heykel////heykel////heykel//
        //heykel////heykel////heykel////heykel////heykel////heykel////heykel////heykel////heykel////heykel////heykel//
        //heykel////heykel////heykel////heykel////heykel////heykel////heykel////heykel////heykel////heykel////heykel//
        //heykel////heykel////heykel////heykel////heykel////heykel////heykel////heykel////heykel////heykel////heykel//
        //heykel////heykel////heykel////heykel////heykel////heykel////heykel////heykel////heykel////heykel////heykel//

    //Frame Sisi Depan
    glBegin(GL_QUADS);
    glColor3ub(126, 143, 140);
    glVertex3d(125, 30, 230);//Sisi Kanan
    glVertex3d(125, 80, 230);
    glVertex3d(20, 80, 230);//Sisi kiri
    glVertex3d(20, 30, 230);
    glEnd();

    //Canopy
    //Glass
    glBegin(GL_QUADS);
    glColor3ub(199, 227, 225);
    glVertex3d(50, 45, 230);
    glVertex3d(50, 45, 280);
    glVertex3d(100, 45, 280);
    glVertex3d(100, 45, 230);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(199, 227, 225);
    glVertex3d(50, 46, 230);
    glVertex3d(50, 46, 280);
    glVertex3d(100, 46, 280);
    glVertex3d(100, 46, 230);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(199, 227, 225);
    glVertex3d(50, 45, 230);
    glVertex3d(50, 46, 230);
    glVertex3d(100, 46, 230);
    glVertex3d(100, 45, 230);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(199, 227, 225);
    glVertex3d(50, 45, 280);
    glVertex3d(50, 46, 280);
    glVertex3d(100, 46, 280);
    glVertex3d(100, 45, 280);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(199, 227, 225);
    glVertex3d(50, 45, 230);
    glVertex3d(50, 46, 280);
    glVertex3d(50, 46, 280);
    glVertex3d(50, 45, 230);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(199, 227, 225);
    glVertex3d(100, 45, 230);
    glVertex3d(100, 46, 280);
    glVertex3d(100, 46, 280);
    glVertex3d(100, 45, 230);
    glEnd();
    //Slab1
    glBegin(GL_QUADS);
    glColor3ub(186, 186, 186);
    glVertex3d(45, 45, 230.1);
    glVertex3d(45, 40, 230.1);
    glVertex3d(105, 40, 230.1);
    glVertex3d(105, 45, 230.1);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(186, 186, 186);
    glVertex3d(105, 40, 230.1);
    glVertex3d(105, 45, 230.1);
    glVertex3d(105, 45, 235);
    glVertex3d(105, 40, 235);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(186, 186, 186);
    glVertex3d(45, 45, 230.1);
    glVertex3d(45, 40, 230.1);
    glVertex3d(45, 40, 235);
    glVertex3d(45, 45, 235);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(186, 186, 186);
    glVertex3d(45, 45, 235);
    glVertex3d(45, 40, 235);
    glVertex3d(105, 40, 235);
    glVertex3d(105, 45, 235);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(186, 186, 186);
    glVertex3d(45, 45, 235);
    glVertex3d(45, 45, 230);
    glVertex3d(105, 45, 230);
    glVertex3d(105, 45, 235);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(186, 186, 186);
    glVertex3d(45, 40, 235);
    glVertex3d(45, 40, 230);
    glVertex3d(105, 40, 230);
    glVertex3d(105, 40, 235);
    glEnd();
    //Slab2
    glBegin(GL_QUADS);
    glColor3ub(186, 186, 186);
    glVertex3d(55, 45, 273);
    glVertex3d(55, 40, 273);
    glVertex3d(95, 40, 273);
    glVertex3d(95, 45, 273);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(186, 186, 186);
    glVertex3d(95, 45, 268);
    glVertex3d(95, 40, 268);
    glVertex3d(55, 40, 268);
    glVertex3d(55, 45, 268);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(186, 186, 186);
    glVertex3d(95, 45, 268);
    glVertex3d(95, 40, 268);
    glVertex3d(95, 40, 273);
    glVertex3d(95, 45, 273);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(186, 186, 186);
    glVertex3d(55, 40, 268);
    glVertex3d(55, 45, 268);
    glVertex3d(55, 45, 273);
    glVertex3d(55, 40, 273);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(186, 186, 186);
    glVertex3d(95, 40, 273);
    glVertex3d(95, 40, 268);
    glVertex3d(55, 40, 268);
    glVertex3d(55, 40, 273);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(186, 186, 186);
    glVertex3d(95, 45, 273);
    glVertex3d(95, 45, 268);
    glVertex3d(55, 45, 268);
    glVertex3d(55, 45, 273);
    glEnd();
    //Slab3
    glBegin(GL_QUADS);
    glColor3ub(186, 186, 186);
    glVertex3d(55, 45, 235);
    glVertex3d(55, 40, 235);
    glVertex3d(55, 40, 268);
    glVertex3d(55, 45, 268);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(186, 186, 186);
    glVertex3d(60, 45, 235);
    glVertex3d(60, 40, 235);
    glVertex3d(60, 40, 268);
    glVertex3d(60, 45, 268);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(186, 186, 186);
    glVertex3d(60, 45, 235);
    glVertex3d(60, 40, 235);
    glVertex3d(60, 40, 268);
    glVertex3d(60, 45, 268);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(186, 186, 186);
    glVertex3d(60, 40, 235);
    glVertex3d(55, 40, 235);
    glVertex3d(55, 40, 268);
    glVertex3d(60, 40, 268);
    glEnd();
    //Slab4
    glBegin(GL_QUADS);
    glColor3ub(186, 186, 186);
    glVertex3d(90, 45, 235);
    glVertex3d(90, 40, 235);
    glVertex3d(90, 40, 268);
    glVertex3d(90, 45, 268);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(186, 186, 186);
    glVertex3d(95, 45, 235);
    glVertex3d(95, 40, 235);
    glVertex3d(95, 40, 268);
    glVertex3d(95, 45, 268);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(186, 186, 186);
    glVertex3d(90, 40, 268);
    glVertex3d(90, 40, 235);
    glVertex3d(95, 40, 235);
    glVertex3d(95, 40, 268);
    glEnd();

    //Mini Balcony kanan
    glBegin(GL_QUADS);
    glColor3ub(240, 254, 255);
    glVertex3d(90, 80, -45);
    glVertex3d(90, 30, -45);
    glVertex3d(90, 30, -10);
    glVertex3d(90, 80, -10);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(240, 254, 255);
    glVertex3d(130, 80, -10);
    glVertex3d(130, 30, -10);
    glVertex3d(90, 30, -10);
    glVertex3d(90, 80, -10);
    glEnd();
    //Kaca Bawah Belakang
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex3d(130.1, 37, -45);
    glVertex3d(130.1, 50, -45);
    glVertex3d(130.1, 50, -10);
    glVertex3d(130.1, 37, -10);
    glEnd();
    //Frame Untuk Kaca Bawah Belakang
    glBegin(GL_QUADS);
    glColor3ub(240, 254, 255);
    glVertex3d(130, 30, -45);
    glVertex3d(130, 50, -45);
    glVertex3d(130, 50, -10);
    glVertex3d(130, 30, -10);
    glEnd();
    //Frame Kaca Atas Kanan
    glBegin(GL_QUADS);
    glColor3ub(240, 254, 255);
    glVertex3d(130, 70, -45);
    glVertex3d(130, 80, -45);
    glVertex3d(120, 80, -45);
    glVertex3d(120, 70, -45);
    glEnd();
    //Kaca Atas Kanan
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex3d(130, 70, -45.1);
    glVertex3d(130, 78, -45.1);
    glVertex3d(120, 78, -45.1);
    glVertex3d(120, 70, -45.1);
    glEnd();
    //Frame Kaca Atas Belakang
    glBegin(GL_QUADS);
    glColor3ub(240, 254, 255);
    glVertex3d(130, 70, -10);
    glVertex3d(130, 80, -10);
    glVertex3d(130, 80, -45);
    glVertex3d(130, 70, -45);
    glEnd();
    //Kaca Atas Belakang
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex3d(130.1, 70, -10);
    glVertex3d(130.1, 78, -10);
    glVertex3d(130.1, 78, -45);
    glVertex3d(130.1, 70, -45);
    glEnd();
    //Kaca Bawah Kanan
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex3d(130, 50, -45.1);
    glVertex3d(130, 37, -45.1);
    glVertex3d(120, 37, -45.1);
    glVertex3d(120, 50, -45.1);
    glEnd();
    //Frame Kaca Bawah Kanan
    glBegin(GL_QUADS);
    glColor3ub(240, 254, 255);
    glVertex3d(130, 50, -45);
    glVertex3d(130, 30, -45);
    glVertex3d(120, 30, -45);
    glVertex3d(120, 50, -45);
    glEnd();

    //Frame Sisi Kanan
    glBegin(GL_QUADS);
    glColor3ub(126, 143, 140);
    glVertex3d(125, 30, 230);
    glVertex3d(125, 80, 230);
    glVertex3d(125, 80, 130);
    glVertex3d(125, 30, 130);
    glEnd();
    //L1 (Lekukan)
    glBegin(GL_QUADS);
    glColor3ub(126, 143, 140);
    glVertex3d(125, 30, 130);
    glVertex3d(125, 80, 130);
    glVertex3d(130, 80, 130);
    glVertex3d(130, 30, 130);
    glEnd();
    //L2
    glBegin(GL_QUADS);
    glColor3ub(126, 143, 140);
    glVertex3d(130, 30, 130);
    glVertex3d(130, 80, 130);
    glVertex3d(130, 80, -10);
    glVertex3d(130, 30, -10);
    glEnd();

    //Kaca W1 Kanan
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex3d(125.1, 75, 130);
    glVertex3d(125.1, 40, 130);
    glVertex3d(125.1, 40, 170);
    glVertex3d(125.1, 75, 170);
    glEnd();
    //Quads Slab Atas & Bawah
    glBegin(GL_QUADS);
    glColor3ub(230, 250, 255);
    glVertex3d(125.2, 40, 130);
    glVertex3d(125.2, 41, 130);
    glVertex3d(125.2, 41, 170);
    glVertex3d(125.2, 40, 170);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(230, 250, 255);
    glVertex3d(125.2, 75, 130);
    glVertex3d(125.2, 74, 130);
    glVertex3d(125.2, 74, 170);
    glVertex3d(125.2, 75, 170);
    glEnd();

    //Kaca W2 Kanan
    //Base Color For Window
    glBegin(GL_QUADS);
    glColor3ub(240, 254, 255);
    glVertex3d(130.1, 30.1, 110);
    glVertex3d(130.1, 80, 110);
    glVertex3d(130.1, 80, -10);
    glVertex3d(130.1, 30.1, -10);
    glEnd();
    //Kaca Kecil
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex3d(130.2, 70, 105);
    glVertex3d(130.2, 78, 105);
    glVertex3d(130.2, 78, 83);
    glVertex3d(130.2, 70, 83);
    glEnd();
    //Kaca Besar
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex3d(130.2, 37, 80);
    glVertex3d(130.2, 78, 80);
    glVertex3d(130.2, 78, -10);
    glVertex3d(130.2, 37, -10);
    glEnd();
    //Slab Bawah
    glBegin(GL_QUADS);
    glColor3ub(186, 186, 186);
    glVertex3d(130.3, 35, 115);
    glVertex3d(130.3, 30, 115);
    glVertex3d(130.3, 30, -50);
    glVertex3d(130.3, 35, -50);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(186, 186, 186);
    glVertex3d(135, 35, 115);
    glVertex3d(135, 30, 115);
    glVertex3d(135, 30, -50);
    glVertex3d(135, 35, -50);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex3d(135, 30, 115);
    glVertex3d(135, 30, -50);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex3d(135, 35, 110);
    glVertex3d(135, 35, -50);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex3d(135, 35, 110);
    glVertex3d(135, 80, 110);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex3d(135, 35, 115);
    glVertex3d(135, 80, 115);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex3d(130, 35, 115);
    glVertex3d(130, 80, 115);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex3d(135, 80, 110);
    glVertex3d(135, 80, -50);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex3d(135, 85, 115);
    glVertex3d(135, 85, -50);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex3d(135, 85, -50);
    glVertex3d(115, 85, -50);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex3d(135, 80, -50);
    glVertex3d(120, 80, -50);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex3d(135, 35, -50);
    glVertex3d(120, 35, -50);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex3d(120, 35, -50);
    glVertex3d(120, 80, -50);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex3d(135, 30, -50);
    glVertex3d(115, 30, -50);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex3d(135, 30, -50);
    glVertex3d(115, 30, -50);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex3d(115, 30, -50);
    glVertex3d(115, 80, -50);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(186, 186, 186);
    glVertex3d(130, 35, 115);
    glVertex3d(130, 30, 115);
    glVertex3d(135, 30, 115);
    glVertex3d(135, 35, 115);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(186, 186, 186);
    glVertex3d(130, 35, -50);
    glVertex3d(130, 30, -50);
    glVertex3d(135, 30, -50);
    glVertex3d(135, 35, -50);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(186, 186, 186);
    glVertex3d(130.3, 30, 115);
    glVertex3d(130.3, 30, -50);
    glVertex3d(135, 30, -50);
    glVertex3d(135, 30, 115);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(186, 186, 186);
    glVertex3d(130.3, 35, 115);
    glVertex3d(130.3, 35, -50);
    glVertex3d(135, 35, -50);
    glVertex3d(135, 35, 115);
    glEnd();
    //Slab Bawah Belakang
    glBegin(GL_QUADS);
    glColor3ub(186, 186, 186);
    glVertex3d(130, 35, -45.1);
    glVertex3d(130, 30, -45.1);
    glVertex3d(120, 30, -45.1);
    glVertex3d(120, 35, -45.1);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(186, 186, 186);
    glVertex3d(130, 35, -50);
    glVertex3d(130, 30, -50);
    glVertex3d(120, 30, -50);
    glVertex3d(120, 35, -50);
    glEnd();
    glBegin(GL_QUADS);
    glVertex3d(130, 35, -45.1);
    glVertex3d(130, 30, -45.1);
    glVertex3d(130, 30, -50);
    glVertex3d(130, 35, -50);
    glEnd();
    glBegin(GL_QUADS);
    glVertex3d(120, 35, -45.1);
    glVertex3d(120, 30, -45.1);
    glVertex3d(120, 30, -50);
    glVertex3d(120, 35, -50);
    glEnd();
    glBegin(GL_QUADS);
    glVertex3d(130, 30, -45.1);
    glVertex3d(120, 30, -45.1);
    glVertex3d(120, 30, -50);
    glVertex3d(130, 30, -50);
    glEnd();
    glBegin(GL_QUADS);
    glVertex3d(130, 35, -45.1);
    glVertex3d(120, 35, -45.1);
    glVertex3d(120, 35, -50);
    glVertex3d(130, 35, -45.1);
    glEnd();
    //Slab Kiri
    glBegin(GL_QUADS);
    glColor3ub(186, 186, 186);
    glVertex3d(130.3, 35, 110);
    glVertex3d(130.3, 85, 110);
    glVertex3d(130.3, 85, 115);
    glVertex3d(130.3, 35, 115);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(186, 186, 186);
    glVertex3d(135, 35, 110);
    glVertex3d(135, 85, 110);
    glVertex3d(135, 85, 115);
    glVertex3d(135, 35, 115);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(186, 186, 186);
    glVertex3d(135, 35, 115);
    glVertex3d(135, 85, 115);
    glVertex3d(130.3, 85, 115);
    glVertex3d(130.3, 35, 115);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(186, 186, 186);
    glVertex3d(135, 35, 110);
    glVertex3d(135, 85, 110);
    glVertex3d(130.3, 85, 110);
    glVertex3d(130.3, 35, 110);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(186, 186, 186);
    glVertex3d(135, 35, 110);
    glVertex3d(130.3, 35, 115);
    glVertex3d(130.3, 35, 110);
    glVertex3d(135, 35, 115);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(186, 186, 186);
    glVertex3d(135, 85, 110);
    glVertex3d(130.3, 85, 115);
    glVertex3d(130.3, 85, 110);
    glVertex3d(135, 85, 115);
    glEnd();
    //Slab Atas
    glBegin(GL_QUADS);
    glColor3ub(186, 186, 186);
    glVertex3d(130.3, 80, 110);
    glVertex3d(130.3, 85, 110);
    glVertex3d(130.3, 85, -50);
    glVertex3d(130.3, 80, -50);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(186, 186, 186);
    glVertex3d(135, 80, 110);
    glVertex3d(135, 85, 110);
    glVertex3d(135, 85, -50);
    glVertex3d(135, 80, -50);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(186, 186, 186);
    glVertex3d(135, 80, 110);
    glVertex3d(135, 85, 110);
    glVertex3d(130.3, 85, 110);
    glVertex3d(130.3, 80, 110);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(186, 186, 186);
    glVertex3d(135, 85, -50);
    glVertex3d(135, 80, -50);
    glVertex3d(130.3, 80, -50);
    glVertex3d(130.3, 85, -50);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(186, 186, 186);
    glVertex3d(130.3, 80, 110);
    glVertex3d(130.3, 80, -50);
    glVertex3d(135, 80, -50);
    glVertex3d(135, 80, 110);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(186, 186, 186);
    glVertex3d(130.3, 85, 110);
    glVertex3d(130.3, 85, -50);
    glVertex3d(135, 85, -50);
    glVertex3d(135, 85, 110);
    glEnd();
    //Slab Atas Belakang
    glBegin(GL_QUADS);
    glColor3ub(186, 186, 186);
    glVertex3d(130, 80, -45.1);
    glVertex3d(130, 85, -45.1);
    glVertex3d(120, 85, -45.1);
    glVertex3d(120, 80, -45.1);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(186, 186, 186);
    glVertex3d(130, 80, -50);
    glVertex3d(130, 85, -50);
    glVertex3d(120, 85, -50);
    glVertex3d(120, 80, -50);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(186, 186, 186);
    glVertex3d(130, 80, -45.1);
    glVertex3d(130, 85, -45.1);
    glVertex3d(130, 85, -50);
    glVertex3d(130, 80, -50);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(186, 186, 186);
    glVertex3d(120, 80, -45.1);
    glVertex3d(120, 85, -45.1);
    glVertex3d(120, 85, -50);
    glVertex3d(120, 80, -50);
    glEnd();
    glBegin(GL_QUADS);
    glVertex3d(130, 80, -45.1);
    glVertex3d(120, 80, -45.1);
    glVertex3d(120, 80, -50);
    glVertex3d(130, 80, -50);
    glEnd();
    glBegin(GL_QUADS);
    glVertex3d(130, 85, -45.1);
    glVertex3d(120, 85, -45.1);
    glVertex3d(120, 85, -50);
    glVertex3d(130, 85, -50);
    glEnd();
    //Slab Belakang Vertical
    glBegin(GL_QUADS);
    glColor3ub(186, 186, 186);
    glVertex3d(120, 30, -45.1);
    glVertex3d(120, 85, -45.1);
    glVertex3d(115, 85, -45.1);
    glVertex3d(115, 30, -45.1);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(186, 186, 186);
    glVertex3d(120, 30, -50);
    glVertex3d(120, 85, -50);
    glVertex3d(115, 85, -50);
    glVertex3d(115, 30, -50);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(186, 186, 186);
    glVertex3d(120, 85, -50);
    glVertex3d(120, 30, -50);
    glVertex3d(120, 30, -45.1);
    glVertex3d(120, 85, -45.1);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(186, 186, 186);
    glVertex3d(115, 30, -45.1);
    glVertex3d(115, 85, -45.1);
    glVertex3d(115, 85, -50);
    glVertex3d(115, 30, -50);
    glEnd();
    glBegin(GL_QUADS);
    glVertex3d(120, 30, -50);
    glVertex3d(115, 30, -50);
    glVertex3d(115, 30, -45.1);
    glVertex3d(120, 30, -45.1);
    glEnd();
    glBegin(GL_QUADS);
    glVertex3d(120, 85, -45.1);
    glVertex3d(115, 85, -45.1);
    glVertex3d(115, 85, -50);
    glVertex3d(120, 85, -50);
    glEnd();

    //Frame Sisi Kiri
    glBegin(GL_QUADS);
    glColor3ub(126, 143, 140);
    glVertex3d(20, 30, 230);
    glVertex3d(20, 80, 230);
    glVertex3d(20, 80, 130);
    glVertex3d(20, 30, 130);
    glEnd();
    //L1 (Lekukan)
    glBegin(GL_QUADS);
    glColor3ub(126, 143, 140);
    glVertex3d(20, 30, 130);
    glVertex3d(20, 80, 130);
    glVertex3d(25, 80, 130);
    glVertex3d(25, 30, 130);
    glEnd();
    //L2
    glBegin(GL_QUADS);
    glColor3ub(126, 143, 140);
    glVertex3d(25, 30, 130);
    glVertex3d(25, 80, 130);
    glVertex3d(25, 80, -45);
    glVertex3d(25, 30, -45);
    glEnd();

    //Frame Sisi Belakang
    glBegin(GL_QUADS);
    glColor3ub(126, 143, 140);
    glVertex3d(25, 30, -45);
    glVertex3d(25, 80, -45);
    glVertex3d(120, 80, -45);
    glVertex3d(120, 30, -45);
    glEnd();

    // * END OF 2ND FLOOR *//


    //////// Lantai 3 /////////

    //alas hotel
    glBegin(GL_QUADS);
    glColor3f(0.75, 0.75, 0.75);
    glVertex3d(25, 80.1, -45);
    glVertex3d(130, 80.1, -45);
    glVertex3d(130, 80.1, 230);
    glVertex3d(25, 80.1, 230);
    glEnd();

    //atap hotel
    glBegin(GL_QUADS);
    glColor3f(0.75, 0.75, 0.75);
    glVertex3d(25, 130.0, -45);
    glVertex3d(130, 130.0, -45);
    glVertex3d(130, 130.0, 230);
    glVertex3d(25, 130.0, 230);
    glEnd();

    // tembok depan
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.8, 0.8);
    glVertex3d(25, 80.1, -45);
    glVertex3d(130, 80.1, -45);
    glVertex3d(130, 130.0, -45);
    glVertex3d(25, 130.0, -45);
    glEnd();

    // tembok belakang
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.8, 0.8);
    glVertex3d(25, 80.1, 230);
    glVertex3d(130, 80.1, 230);
    glVertex3d(130, 130.0, 230);
    glVertex3d(25, 130.0, 230);
    glEnd();

    // tembok kiri
    glBegin(GL_QUADS);
    glColor3f(0.6, 0.6, 0.6);
    glVertex3d(25, 80.1, -45);
    glVertex3d(25, 80.1, 230);
    glVertex3d(25, 130.0, 230);
    glVertex3d(25, 130.0, -45);
    glEnd();

    //tembok kanan
    glBegin(GL_QUADS);
    glColor3f(0.6, 0.6, 0.6);
    glVertex3d(130, 80.1, -45);
    glVertex3d(130, 80.1, 230);
    glVertex3d(130, 130.0, 230);
    glVertex3d(130, 130.0, -45);
    glEnd();

    //luarbawah1
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(75, 125.0, 230.1);
    glVertex3d(135, 125.0, 230.1);
    glVertex3d(135, 125.0, 235);
    glVertex3d(75, 125.0, 235);
    glEnd();

    //luaratas1
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(75, 130.0, 230.1);
    glVertex3d(135, 130.0, 230.1);
    glVertex3d(135, 130.0, 235);
    glVertex3d(75, 130.0, 235);
    glEnd();

    //luarkiri1
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(75, 125.0, 230.1);
    glVertex3d(75, 125.0, 235);
    glVertex3d(75, 130.0, 235);
    glVertex3d(75, 130.0, 230.1);
    glEnd();

    //luarkanan1
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(135, 125.0, 230.1);
    glVertex3d(135, 125.0, 235);
    glVertex3d(135, 130.0, 235);
    glVertex3d(135, 130.0, 230.1);
    glEnd();

    //luardepan1
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(75, 125.0, 235);
    glVertex3d(135, 125.0, 235);
    glVertex3d(135, 130.0, 235);
    glVertex3d(75, 130.0, 235);
    glEnd();

    //luardepangaris1
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3d(25, 125.0, 235);
    glVertex3d(135, 125.0, 235);
    glVertex3d(135, 130.0, 235);
    glVertex3d(25, 130.0, 235);
    glEnd();

    //luarkiri2
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(75, 85.0, 230.1);
    glVertex3d(75, 85.0, 235);
    glVertex3d(75, 125.0, 235);
    glVertex3d(75, 125.0, 230.1);
    glEnd();

    //luarkanan2
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(80, 85.0, 230.1);
    glVertex3d(80, 85.0, 235);
    glVertex3d(80, 125.0, 235);
    glVertex3d(80, 125.0, 230.1);
    glEnd();

    //luardepan2
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(75, 85.0, 235);
    glVertex3d(80, 85.0, 235);
    glVertex3d(80, 125.0, 235);
    glVertex3d(75, 125.0, 235);
    glEnd();

    //luardepangaris2
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3d(75, 85.0, 235);
    glVertex3d(80, 85.0, 235);
    glVertex3d(80, 125.0, 235);
    glVertex3d(75, 125.0, 235);
    glEnd();

    //luarbawah3
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(75, 80.1, 230.1);
    glVertex3d(135, 80.1, 230.1);
    glVertex3d(135, 80.1, 235);
    glVertex3d(75, 80.1, 235);
    glEnd();

    //luaratas3
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(75, 85.0, 230.1);
    glVertex3d(135, 85.0, 230.1);
    glVertex3d(135, 85.0, 235);
    glVertex3d(75, 85.0, 235);
    glEnd();

    //luarkiri3
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(75, 80.1, 230.1);
    glVertex3d(75, 80.1, 235);
    glVertex3d(75, 85.0, 235);
    glVertex3d(75, 85.0, 230.1);
    glEnd();

    //luarkanan3
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(135, 80.1, 230.1);
    glVertex3d(135, 80.1, 235);
    glVertex3d(135, 85.0, 235);
    glVertex3d(135, 85.0, 230.1);
    glEnd();

    //luardepan3
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(75, 80.1, 235);
    glVertex3d(135, 80.1, 235);
    glVertex3d(135, 85.0, 235);
    glVertex3d(75, 85.0, 235);
    glEnd();

    //luardepangaris3
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3d(75, 80.1, 235);
    glVertex3d(135, 80.1, 235);
    glVertex3d(135, 85.0, 235);
    glVertex3d(75, 85.0, 235);
    glEnd();

    //luarbawah4
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(130, 125.0, 230.1);
    glVertex3d(135, 125.0, 230.1);
    glVertex3d(135, 125.0, 130);
    glVertex3d(130, 125.0, 130);
    glEnd();

    //luaratap4
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(130, 130.0, 230.1);
    glVertex3d(135, 130.0, 230.1);
    glVertex3d(135, 130.0, 130);
    glVertex3d(130, 130.0, 130);
    glEnd();

    //luarkanan4
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(135, 125.0, 230.1);
    glVertex3d(135, 125.0, 130);
    glVertex3d(135, 130.0, 130);
    glVertex3d(135, 130.0, 230.1);
    glEnd();

    //luarkanangaris4
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3d(135, 125.0, 235);
    glVertex3d(135, 125.0, 130);
    glVertex3d(135, 130.0, 130);
    glVertex3d(135, 130.0, 235);
    glEnd();

    //luarbelakang4
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(130, 125.0, 130);
    glVertex3d(135, 125.0, 130);
    glVertex3d(135, 130.0, 130);
    glVertex3d(130, 130.0, 130);
    glEnd();

    //luarbawah5
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(130, 80.1, 230.1);
    glVertex3d(135, 80.1, 230.1);
    glVertex3d(135, 80.1, 130);
    glVertex3d(130, 80.1, 130);
    glEnd();

    //luaratap5
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(130, 85.0, 230.1);
    glVertex3d(135, 85.0, 230.1);
    glVertex3d(135, 85.0, 130);
    glVertex3d(130, 85.0, 130);
    glEnd();

    //luarkanan5
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(135, 80.1, 230.1);
    glVertex3d(135, 80.1, 130);
    glVertex3d(135, 85.0, 130);
    glVertex3d(135, 85.0, 230.1);
    glEnd();

    //luarkanangaris5
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3d(135, 80.1, 235);
    glVertex3d(135, 80.1, 130);
    glVertex3d(135, 85.0, 130);
    glVertex3d(135, 85.0, 235);
    glEnd();

    //luarbelakang5
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(130, 80.1, 130);
    glVertex3d(135, 80.1, 130);
    glVertex3d(135, 85.0, 130);
    glVertex3d(130, 85.0, 130);
    glEnd();

    //luardepan6
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(130, 85.0, 135);
    glVertex3d(135, 85.0, 135);
    glVertex3d(135, 125.0, 135);
    glVertex3d(130, 125.0, 135);
    glEnd();

    //luarbelakang6
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(130, 85.0, 130);
    glVertex3d(135, 85.0, 130);
    glVertex3d(135, 125.0, 130);
    glVertex3d(130, 125.0, 130);
    glEnd();

    //luarkanan6
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(135, 85.0, 135);
    glVertex3d(135, 85.0, 130);
    glVertex3d(135, 125.0, 130);
    glVertex3d(135, 125.0, 135);
    glEnd();

    //luarkanangaris6
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3d(135, 85.0, 135);
    glVertex3d(135, 85.0, 130);
    glVertex3d(135, 125.0, 130);
    glVertex3d(135, 125.0, 135);
    glEnd();

    //kacabesar1
    glBegin(GL_QUADS);
    glColor3ub(104, 105, 104);
    glVertex3d(80.1, 90.0, 230.1);
    glVertex3d(130, 90.0, 230.1);
    glVertex3d(130, 120.0, 230.1);
    glVertex3d(80.1, 120.0, 230.1);
    glEnd();

    //kacabesar2
    glBegin(GL_QUADS);
    glColor3ub(104, 105, 104);
    glVertex3d(130.1, 90.0, 135.0);
    glVertex3d(130.1, 90.0, 230.1);
    glVertex3d(130.1, 120.0, 230.1);
    glVertex3d(130.1, 120.0, 135.0);
    glEnd();

    //kacabesargaris1
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3d(80.1, 90.0, 230.2);
    glVertex3d(130, 90.0, 230.2);
    glVertex3d(130, 120.0, 230.2);
    glVertex3d(80.1, 120.0, 230.2);
    glEnd();

    //kacabesargaris2
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3d(130.2, 90.0, 135.0);
    glVertex3d(130.2, 90.0, 230.1);
    glVertex3d(130.2, 120.0, 230.1);
    glVertex3d(130.2, 120.0, 135.0);
    glEnd();

    //kacalubang
    glBegin(GL_QUADS);
    glColor3ub(212, 214, 213);
    glVertex3d(130.2, 95.0, 150.0);
    glVertex3d(130.2, 95.0, 230.1);
    glVertex3d(130.2, 115.0, 230.1);
    glVertex3d(130.2, 115.0, 150.0);
    glEnd();

    //kacalubanggaris1
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3d(130.2, 95.0, 150.0);
    glVertex3d(130.2, 95.0, 230.1);
    glVertex3d(130.2, 115.0, 230.1);
    glVertex3d(130.2, 115.0, 150.0);
    glEnd();

    //kacalubanggaris2
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3d(130.2, 95.0, 210.0);
    glVertex3d(130.2, 115.0, 210.0);
    glEnd();

    //kacalubanggaris3
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3d(130.2, 95.0, 170.0);
    glVertex3d(130.2, 115.0, 170.0);
    glEnd();

    //luarbawah7
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(25, 125.0, 230.1);
    glVertex3d(75, 125.0, 230.1);
    glVertex3d(75, 125.0, 235);
    glVertex3d(25, 125.0, 235);
    glEnd();

    //luaratas7
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(25, 130.0, 230.1);
    glVertex3d(75, 130.0, 230.1);
    glVertex3d(75, 130.0, 235);
    glVertex3d(25, 130.0, 235);
    glEnd();

    //luarkiri7
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(25, 125.0, 230.1);
    glVertex3d(25, 125.0, 235);
    glVertex3d(25, 130.0, 235);
    glVertex3d(25, 130.0, 230.1);
    glEnd();

    //luardepan7
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(25, 125.0, 235);
    glVertex3d(75, 125.0, 235);
    glVertex3d(75, 130.0, 235);
    glVertex3d(25, 130.0, 235);
    glEnd();

    //luargaris1
    glBegin(GL_LINE_LOOP);
    glColor3ub(196, 196, 196);
    glVertex3d(35, 80.0, 230.1);
    glVertex3d(35, 125.0, 230.1);
    glEnd();

    //luargaris2
    glBegin(GL_LINE_LOOP);
    glColor3ub(196, 196, 196);
    glVertex3d(50, 80.0, 230.1);
    glVertex3d(50, 125.0, 230.1);
    glEnd();

    //luargaris3
    glBegin(GL_LINE_LOOP);
    glColor3ub(196, 196, 196);
    glVertex3d(65, 80.0, 230.1);
    glVertex3d(65, 125.0, 230.1);
    glEnd();

    //luargaris4
    glBegin(GL_LINE_LOOP);
    glColor3ub(196, 196, 196);
    glVertex3d(25, 95.0, 230.1);
    glVertex3d(75, 95.0, 230.1);
    glEnd();

     //luargaris5
    glBegin(GL_LINE_LOOP);
    glColor3ub(196, 196, 196);
    glVertex3d(25, 110.0, 230.1);
    glVertex3d(75, 110.0, 230.1);
    glEnd();

    //luarbawah8
    glBegin(GL_QUADS);
    glColor3f(0.7, 0.7, 0.7);
    glVertex3d(130, 80.1, 130.1);
    glVertex3d(133, 80.1, 130.1);
    glVertex3d(133, 80.1, -45);
    glVertex3d(130, 80.1, -45);
    glEnd();

    //luaratap8
    glBegin(GL_QUADS);
    glColor3f(0.7, 0.7, 0.7);
    glVertex3d(130, 130.0, 130.1);
    glVertex3d(133, 130.0, 130.1);
    glVertex3d(133, 130.0, -45);
    glVertex3d(130, 130.0, -45);
    glEnd();

    //luarkanan8
    glBegin(GL_QUADS);
    glColor3f(0.7, 0.7, 0.7);
    glVertex3d(133, 80.1, 130.1);
    glVertex3d(133, 80.1, -45);
    glVertex3d(133, 130.0, -45);
    glVertex3d(133, 130.0, 130.1);
    glEnd();

    //luarbelakang8
    glBegin(GL_QUADS);
    glColor3f(0.7, 0.7, 0.7);
    glVertex3d(130, 80.1, -45);
    glVertex3d(133, 80.1, -45);
    glVertex3d(133, 130.0, -45);
    glVertex3d(130, 130.0, -45);
    glEnd();

    //luarkanan9
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(133.1, 125.0, 120);
    glVertex3d(133.1, 125.0, -50);
    glVertex3d(133.1, 130.0, -50);
    glVertex3d(133.1, 130.0, 120);
    glEnd();

    //luarkanangaris9
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3d(133.1, 125.0, 120);
    glVertex3d(133.1, 125.0, -50);
    glVertex3d(133.1, 130.0, -50);
    glVertex3d(133.1, 130.0, 120);
    glEnd();

    //jendelakanan1
    glBegin(GL_QUADS);
    glColor3ub(212, 214, 213);
    glVertex3d(133.1, 95.0, 115);
    glVertex3d(133.1, 95.0, 105);
    glVertex3d(133.1, 115.0, 105);
    glVertex3d(133.1, 115.0, 115);
    glEnd();

    //jendelakanangaris1
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3d(133.2, 95.0, 115);
    glVertex3d(133.2, 95.0, 105);
    glVertex3d(133.2, 115.0, 105);
    glVertex3d(133.2, 115.0, 115);
    glEnd();

    //jendelakanan2
    glBegin(GL_QUADS);
    glColor3ub(212, 214, 213);
    glVertex3d(133.1, 95.0, 95);
    glVertex3d(133.1, 95.0, 85);
    glVertex3d(133.1, 115.0, 85);
    glVertex3d(133.1, 115.0, 95);
    glEnd();

    //jendelakanangaris2
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3d(133.2, 95.0, 95);
    glVertex3d(133.2, 95.0, 85);
    glVertex3d(133.2, 115.0, 85);
    glVertex3d(133.2, 115.0, 95);
    glEnd();

    //jendelakanan3
    glBegin(GL_QUADS);
    glColor3ub(212, 214, 213);
    glVertex3d(133.1, 95.0, 75);
    glVertex3d(133.1, 95.0, 65);
    glVertex3d(133.1, 115.0, 65);
    glVertex3d(133.1, 115.0, 75);
    glEnd();

    //jendelakanangaris3
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3d(133.2, 95.0, 75);
    glVertex3d(133.2, 95.0, 65);
    glVertex3d(133.2, 115.0, 65);
    glVertex3d(133.2, 115.0, 75);
    glEnd();

    //jendelakanan4
    glBegin(GL_QUADS);
    glColor3ub(212, 214, 213);
    glVertex3d(133.1, 95.0, 55);
    glVertex3d(133.1, 95.0, 45);
    glVertex3d(133.1, 115.0, 45);
    glVertex3d(133.1, 115.0, 55);
    glEnd();

    //jendelakanangaris4
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3d(133.2, 95.0, 55);
    glVertex3d(133.2, 95.0, 45);
    glVertex3d(133.2, 115.0, 45);
    glVertex3d(133.2, 115.0, 55);
    glEnd();

    //jendelakanan5
    glBegin(GL_QUADS);
    glColor3ub(212, 214, 213);
    glVertex3d(133.1, 95.0, 35);
    glVertex3d(133.1, 95.0, 25);
    glVertex3d(133.1, 115.0, 25);
    glVertex3d(133.1, 115.0, 35);
    glEnd();

    //jendelakanangaris5
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3d(133.2, 95.0, 35);
    glVertex3d(133.2, 95.0, 25);
    glVertex3d(133.2, 115.0, 25);
    glVertex3d(133.2, 115.0, 35);
    glEnd();

    //jendelakanan6
    glBegin(GL_QUADS);
    glColor3ub(212, 214, 213);
    glVertex3d(133.1, 95.0, 15);
    glVertex3d(133.1, 95.0, 5);
    glVertex3d(133.1, 115.0, 5);
    glVertex3d(133.1, 115.0, 15);
    glEnd();

    //jendelakanangaris6
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3d(133.2, 95.0, 15);
    glVertex3d(133.2, 95.0, 5);
    glVertex3d(133.2, 115.0, 5);
    glVertex3d(133.2, 115.0, 15);
    glEnd();

    //jendelakanan7
    glBegin(GL_QUADS);
    glColor3ub(212, 214, 213);
    glVertex3d(133.1, 95.0, -5);
    glVertex3d(133.1, 95.0, -15);
    glVertex3d(133.1, 115.0, -15);
    glVertex3d(133.1, 115.0, -5);
    glEnd();

    //jendelakanangaris7
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3d(133.2, 95.0, -5);
    glVertex3d(133.2, 95.0, -15);
    glVertex3d(133.2, 115.0, -15);
    glVertex3d(133.2, 115.0, -5);
    glEnd();

    //luarbawah10
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(20, 125.0, -45.1);
    glVertex3d(133.1, 125.0, -45.1);
    glVertex3d(133.1, 125.0, -50);
    glVertex3d(20, 125.0, -50);
    glEnd();

    //luaratas10
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(20, 130.0, -45.1);
    glVertex3d(133.1, 130.0, -45.1);
    glVertex3d(133.1, 130.0, -50);
    glVertex3d(20, 130.0, -50);
    glEnd();

    //luarkiri10
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(20, 125.0, -45.1);
    glVertex3d(20, 125.0, -50);
    glVertex3d(20, 130.0, -50);
    glVertex3d(20, 130.0, -45.1);
    glEnd();

    //luarbelakang10
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(20, 125.0, -50);
    glVertex3d(133.1, 125.0, -50);
    glVertex3d(133.1, 130.0, -50);
    glVertex3d(20, 130.0, -50);
    glEnd();

    //luarbelakanggaris10
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3d(20, 125.0, -50);
    glVertex3d(133.1, 125.0, -50);
    glVertex3d(133.1, 130.0, -50);
    glVertex3d(20, 130.0, -50);
    glEnd();

    //luardepan10
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(20, 125.0, -45.1);
    glVertex3d(133.1, 125.0, -45.1);
    glVertex3d(133.1, 130.0, -45.1);
    glVertex3d(20, 130.0, -45.1);
    glEnd();

    //luarbawah11
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(20, 125.0, -45.1);
    glVertex3d(25, 125.0, -45.1);
    glVertex3d(25, 125.0, 150);
    glVertex3d(20, 125.0, 150);
    glEnd();

   //luaratas11
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(20, 130.0, -45.1);
    glVertex3d(25, 130.0, -45.1);
    glVertex3d(25, 130.0, 150);
    glVertex3d(20, 130.0, 150);
    glEnd();

    //luarkiri11
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(20, 125.0, -45.1);
    glVertex3d(20, 125.0, 150);
    glVertex3d(20, 130.0, 150);
    glVertex3d(20, 130.0, -45.1);
    glEnd();

    //luarkirigaris11
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3d(20, 125.0, -50);
    glVertex3d(20, 125.0, 150);
    glVertex3d(20, 130.0, 150);
    glVertex3d(20, 130.0, -50);
    glEnd();

    //luardepan11
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(20, 125.0, 150);
    glVertex3d(25, 125.0, 150);
    glVertex3d(25, 130.0, 150);
    glVertex3d(20, 130.0, 150);
    glEnd();

    //luardepangaris11
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3d(20, 125.0, 150);
    glVertex3d(25, 125.0, 150);
    glVertex3d(25, 130.0, 150);
    glVertex3d(20, 130.0, 150);
    glEnd();

    //luarkiri11(tembok)
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3d(24.9, 80.0, -45.1);
    glVertex3d(24.9, 80.0, 150);
    glVertex3d(24.9, 125.0, 150);
    glVertex3d(24.9, 125.0, -45.1);
    glEnd();

    //luarkiri12
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3d(24.9, 125.0, 150.1);
    glVertex3d(24.9, 125.0, 235);
    glVertex3d(24.9, 130.0, 235);
    glVertex3d(24.9, 130.0, 150.1);
    glEnd();

    //luarkirigaris12
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3d(24.9, 125.0, 150.1);
    glVertex3d(24.9, 125.0, 235);
    glVertex3d(24.9, 130.0, 235);
    glVertex3d(24.9, 130.0, 150.1);
    glEnd();

    //jendelabelakang1
    glBegin(GL_QUADS);
    glColor3ub(128, 128, 128);
    glVertex3d(75, 95.0, -45.1);
    glVertex3d(85, 95.0, -45.1);
    glVertex3d(85, 115.0, -45.1);
    glVertex3d(75, 115.0, -45.1);
    glEnd();

    //jendelabelakanggaris1
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3d(75, 95.0, -45.2);
    glVertex3d(85, 95.0, -45.2);
    glVertex3d(85, 115.0, -45.2);
    glVertex3d(75, 115.0, -45.2);
    glEnd();

    //jendelakiri1
    glBegin(GL_QUADS);
    glColor3ub(212, 214, 213);
    glVertex3d(24.9, 95.0, 170);
    glVertex3d(24.9, 95.0, 180);
    glVertex3d(24.9, 115.0, 180);
    glVertex3d(24.9, 115.0, 170);
    glEnd();

    //jendelakirigaris1
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3d(24.8, 95.0, 170);
    glVertex3d(24.8, 95.0, 180);
    glVertex3d(24.8, 115.0, 180);
    glVertex3d(24.8, 115.0, 170);
    glEnd();

    //jendelakiri2
    glBegin(GL_QUADS);
    glColor3ub(212, 214, 213);
    glVertex3d(24.9, 95.0, 190);
    glVertex3d(24.9, 95.0, 200);
    glVertex3d(24.9, 115.0, 200);
    glVertex3d(24.9, 115.0, 190);
    glEnd();

    //jendelakirigaris2
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3d(24.8, 95.0, 190);
    glVertex3d(24.8, 95.0, 200);
    glVertex3d(24.8, 115.0, 200);
    glVertex3d(24.8, 115.0, 190);
    glEnd();

    //jendelakiri3
    glBegin(GL_QUADS);
    glColor3ub(212, 214, 213);
    glVertex3d(24.8, 95.0, -10);
    glVertex3d(24.8, 95.0, 0);
    glVertex3d(24.8, 115.0, 0);
    glVertex3d(24.8, 115.0, -10);
    glEnd();

    //jendelakirigaris3
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3d(24.7, 95.0, -10);
    glVertex3d(24.7, 95.0, 0);
    glVertex3d(24.7, 115.0, 0);
    glVertex3d(24.7, 115.0, -10);
    glEnd();

    //jendelakiri4
    glBegin(GL_QUADS);
    glColor3ub(212, 214, 213);
    glVertex3d(24.8, 95.0, 20);
    glVertex3d(24.8, 95.0, 30);
    glVertex3d(24.8, 115.0, 30);
    glVertex3d(24.8, 115.0, 20);
    glEnd();

    //jendelakirigaris4
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3d(24.7, 95.0, 20);
    glVertex3d(24.7, 95.0, 30);
    glVertex3d(24.7, 115.0, 30);
    glVertex3d(24.7, 115.0, 20);
    glEnd();

    //jendelakiri5
    glBegin(GL_QUADS);
    glColor3ub(212, 214, 213);
    glVertex3d(24.8, 110.0, 80);
    glVertex3d(24.8, 110.0, 100);
    glVertex3d(24.8, 115.0, 100);
    glVertex3d(24.8, 115.0, 80);
    glEnd();

    //jendelakirigaris5
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3d(24.8, 110.0, 80);
    glVertex3d(24.8, 110.0, 100);
    glVertex3d(24.8, 115.0, 100);
    glVertex3d(24.8, 115.0, 80);
    glEnd();


        //jendela lantai 4-sterusnya sebelah kiri
    for (i=135; i<310; i=i+20)
    {
        //aksesoris jendela (kanan0.0)
        glBegin(GL_QUADS);
        glColor3f(0.0, 0.0, 1.0);
        glVertex3d(29, i, 200);
        glVertex3d(29, i, 215);
        glVertex3d(29, i+10, 215);
        glVertex3d(29, i+10, 200);
        glEnd();
        //aksesoris jendela (kanan0.0)
        glBegin(GL_QUADS);
        glColor3f(1.0, 1.0, 1.0);
        glVertex3d(29, i, 213);
        glVertex3d(29, i, 212);
        glVertex3d(29, i+10, 212);
        glVertex3d(29, i+10, 213);
        glEnd();
         //aksesoris jendela (kanan0.0)
        glBegin(GL_QUADS);
        glColor3f(1.0, 1.0, 1.0);
        glVertex3d(29, i, 202);
        glVertex3d(29, i, 203);
        glVertex3d(29, i+10, 203);
        glVertex3d(29, i+10, 202);
        glEnd();
        //aksesoris jendela (kanan1.1)
        glBegin(GL_QUADS);
        glColor3f(0.0, 0.0, 1.0);
        glVertex3d(29, i, 190);
        glVertex3d(29, i, 175);
        glVertex3d(29, i+10, 175);
        glVertex3d(29, i+10, 190);
        glEnd();
        //aksesoris jendela (kanan1.1)
        glBegin(GL_QUADS);
        glColor3f(1.0, 1.0, 1.0);
        glVertex3d(29, i, 188);
        glVertex3d(29, i, 187);
        glVertex3d(29, i+10, 187);
        glVertex3d(29, i+10, 188);
        glEnd();
         //aksesoris jendela (kanan1.1)
        glBegin(GL_QUADS);
        glColor3f(1.0, 1.0, 1.0);
        glVertex3d(29, i, 178);
        glVertex3d(29, i, 177);
        glVertex3d(29, i+10, 177);
        glVertex3d(29, i+10, 178);
        glEnd();

        //aksesoris jendela (kanan2.1)
        glBegin(GL_QUADS);
        glColor3f(0.0, 0.0, 1.0);
        glVertex3d(29, i, 165);
        glVertex3d(29, i, 163);
        glVertex3d(29, i+10, 163);
        glVertex3d(29, i+10, 165);
        glEnd();
        //aksesoris jendela (kanan3.1)
        glBegin(GL_QUADS);
        glColor3f(0.0, 0.0, 1.0);
        glVertex3d(29, i, 150);
        glVertex3d(29, i, 135);
        glVertex3d(29, i+10, 135);
        glVertex3d(29, i+10, 150);
        glEnd();

        //aksesoris jendela (kanan3.1)
        glBegin(GL_QUADS);
        glColor3f(1.0, 1.0, 1.0);
        glVertex3d(29, i, 148);
        glVertex3d(29, i, 147);
        glVertex3d(29, i+10, 147);
        glVertex3d(29, i+10, 148);
        glEnd();

        //aksesoris jendela (kanan3.1)
        glBegin(GL_QUADS);
        glColor3f(1.0, 1.0, 1.0);
        glVertex3d(29, i   , 137);
        glVertex3d(29, i   , 138);
        glVertex3d(29, i+10, 138);
        glVertex3d(29, i+10, 137);
        glEnd();


    }

    //gedung dekok kiri
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.8, 0.8);
    glVertex3d(20, 130, 130);
    glVertex3d(20, 130, 75);
    glVertex3d(20, 320, 75);
    glVertex3d(20, 320, 130);
    glEnd();

    glBegin(GL_QUADS);
    glVertex3d(30, 130, 75);
    glVertex3d(20, 130, 75);
    glVertex3d(20, 320, 75);
    glVertex3d(30, 320, 75);
    glEnd();

    glBegin(GL_QUADS);
    glVertex3d(30, 130, 130);
    glVertex3d(20, 130, 130);
    glVertex3d(20, 320, 130);
    glVertex3d(30, 320, 130);
    glEnd();

    glBegin(GL_LINES);
    glColor3b(0,0,0);
    glVertex3d(20, 130, 130);
    glVertex3d(20, 320, 130);
    glBegin(GL_LINES);
    glColor3b(0,0,0);
    glVertex3d(29.8, 130, 130);
    glVertex3d(29.8, 320, 130);

    glBegin(GL_LINES);
    glColor3b(0,0,0);
    glVertex3d(20, 130, 75);
    glVertex3d(20, 320, 75);
    glBegin(GL_LINES);
    glColor3b(0,0,0);
    glVertex3d(29.8, 130, 75);
    glVertex3d(29.8, 320, 75);

    glEnd();

    for (i=135; i<310; i=i+20)
    {
        //aksesoris jendela (kanan0.0)
        glBegin(GL_QUADS);
        glColor3f(0.0, 0.0, 1.0);
        glVertex3d(19, i, 110);
        glVertex3d(19, i, 95);
        glVertex3d(19, i+5, 95);
        glVertex3d(19, i+5, 110);
        glEnd();
        glBegin(GL_LINE_LOOP);
        glColor3f(1.0, 1.0, 1.0);
        glVertex3d(19, i, 110);
        glVertex3d(19, i, 95);
        glVertex3d(19, i+5, 95);
        glVertex3d(19, i+5, 110);
        glEnd();
    }

    for (i=135; i<310; i=i+20)
    {
        //aksesoris jendela (kanan0.0)
        //aksesoris jendela (kanan0.0)
        glBegin(GL_QUADS);
        glColor3f(0.0, 0.0, 1.0);
        glVertex3d(29, i, 65);
        glVertex3d(29, i, 50);
        glVertex3d(29, i+10, 50);
        glVertex3d(29, i+10, 65);
        glEnd();
        //aksesoris jendela (kanan0.0)
        glBegin(GL_QUADS);
        glColor3f(1.0, 1.0, 1.0);
        glVertex3d(29, i, 58);
        glVertex3d(29, i, 57);
        glVertex3d(29, i+10, 57);
        glVertex3d(29, i+10, 58);
        glEnd();
         //aksesoris jendela (kanan0.0)
        glBegin(GL_QUADS);
        glColor3f(1.0, 1.0, 1.0);
        glVertex3d(29, i, 63);
        glVertex3d(29, i, 62);
        glVertex3d(29, i+10, 62);
        glVertex3d(29, i+10, 63);
        glEnd();

        //aksesoris jendela (kanan0.0)
        glBegin(GL_QUADS);
        glColor3f(0.0, 0.0, 1.0);
        glVertex3d(29, i, 40);
        glVertex3d(29, i, 25);
        glVertex3d(29, i+10, 25);
        glVertex3d(29, i+10, 40);
        glEnd();
        //aksesoris jendela (kanan0.0)
        glBegin(GL_QUADS);
        glColor3f(1.0, 1.0, 1.0);
        glVertex3d(29, i, 38);
        glVertex3d(29, i, 37);
        glVertex3d(29, i+10, 37);
        glVertex3d(29, i+10, 38);
        glEnd();
         //aksesoris jendela (kanan0.0)
        glBegin(GL_QUADS);
        glColor3f(1.0, 1.0, 1.0);
        glVertex3d(29, i, 27);
        glVertex3d(29, i, 28);
        glVertex3d(29, i+10, 28);
        glVertex3d(29, i+10, 27);
        glEnd();
    }
    for(i =15; i>-45; i=i-15)
    {
        glBegin(GL_QUADS);
        glColor3f(0.4, 0.4, 0.4);
        glVertex3d(25, 130, i-5);
        glVertex3d(25, 130, i);
        glVertex3d(25, 320, i);
        glVertex3d(25, 320, i-5);
        glEnd();
        glBegin(GL_QUADS);
        glColor3f(0.4, 0.4, 0.4);
        glVertex3d(25, 130, i-5);
        glVertex3d(30, 130, i-5);
        glVertex3d(30, 320, i-5);
        glVertex3d(25, 320, i-5);
        glEnd();
        glBegin(GL_QUADS);
        glColor3f(0.4, 0.4, 0.4);
        glVertex3d(25, 130, i);
        glVertex3d(30, 130, i);
        glVertex3d(30, 320, i);
        glVertex3d(25, 320, i);
        glEnd();
        glBegin(GL_QUADS);
        glColor3f(0.4, 0.4, 0.4);
        glVertex3d(25, 320, i-5);
        glVertex3d(25, 320, i);
        glVertex3d(30, 320, i);
        glVertex3d(30, 320, i-5);
        glEnd();
        glBegin(GL_LINES);
        glColor3f(0, 0, 0);
        glVertex3d(30, 130, i);
        glVertex3d(30, 320, i);
        glEnd();
        glBegin(GL_LINES);
        glColor3f(0, 0, 0);
        glVertex3d(24.9, 130, i-5);
        glVertex3d(24.9, 320, i-5);
        glEnd();
    }

    //tambal2 lur
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.8, 0.8);
    glVertex3d(15, 80, 230);
    glVertex3d(25, 80, 230);
    glVertex3d(25, 80, 130);
    glVertex3d(15, 80, 130);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.8, 0.8);
    glVertex3d(15, 85, 230);
    glVertex3d(25, 85, 230);
    glVertex3d(25, 85, 130);
    glVertex3d(15, 85, 130);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.8, 0.8);
    glVertex3d(15, 85, 230);
    glVertex3d(15, 80, 230);
    glVertex3d(15, 80, 130);
    glVertex3d(15, 85, 130);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3d(15, 85, 230);
    glVertex3d(15, 80, 230);
    glVertex3d(15, 80, 130);
    glVertex3d(15, 85, 130);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3d(15, 85, 230);
    glVertex3d(25, 85, 230);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3d(15, 80, 230);
    glVertex3d(20, 80, 230);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.8, 0.8);
    glVertex3d(15, 85, 230);
    glVertex3d(15, 80, 230);
    glVertex3d(25, 80, 230);
    glVertex3d(25, 85, 230);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.8, 0.8);
    glVertex3d(15, 85, 130);
    glVertex3d(15, 80, 130);
    glVertex3d(25, 80, 130);
    glVertex3d(25, 85, 130);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3d(15, 85, 130);
    glVertex3d(25, 85, 130);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3d(15, 80, 130);
    glVertex3d(25, 80, 130);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3d(20, 80, 230);
    glVertex3d(20, 30, 230);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3d(125, 80, 230);
    glVertex3d(125, 30, 230);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3d(25, 130, -45);
    glVertex3d(25, -20, -45);
    glEnd();






    glPopMatrix();
    glutSwapBuffers();
    glFlush();
}

void keyboard(unsigned char key, int x, int y) {

    switch (key){
        case 'w' :
        case 'W' :
        glTranslatef(0.0, 0.0, 3.0);
        break;
        case 'a' :
        case 'A' :
        glTranslatef(3.0, 0.0, 00);
        break;
        case 's' :
        case 'S' :
        glTranslatef(0.0, 0.0, -3.0);
        break;
        case 'd' :
        case 'D' :
        glTranslatef(-3.0, 0.0, 0.0);
        break;
        case 'q' :
        case 'Q' :
        glTranslatef(0.0, 3.0, 0.0);
        break;
        case 'e' :
        case 'E' :
        glTranslatef(0.0, -3.0, 0.0);
        break;
        case 'k' :
        glRotatef(2.0, 1.0, 0.0, 0.0);
        break;
        case 'i' :
        glRotatef(-2.0, 1.0, 0.0, 0.0);
        break;
        case 'l' :
        glRotatef(2.0, 0.0, 1.0, 0.0);
        break;
        case 'j' :
        glRotatef(-2.0, 0.0, 1.0, 0.0);
        break;
        case 'u' :
        glRotatef(2.0, 0.0, 0.0, 1.0);
        break;
        case 'o' :
        glRotatef(-2.0, 1.0, 0.0, 1.0);
        break;
    }
    tampil();
}
void mouse(int button, int state, int x, int y) {
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
        mouseDown = true;
        xdiff = x - yrot;
        ydiff = -y + xrot;
    } else {
        mouseDown = false;
    }
}

void mouseMotion(int x, int y) {
    if (mouseDown) {
        yrot = x - xdiff;
        xrot = y + ydiff;
        glutPostRedisplay();
    }
}

void ukuran(int lebar, int tinggi){

    if(tinggi == 0) tinggi = 1;
    glMatrixMode(GL_PROJECTION);
    gluPerspective(90.0, lebar / tinggi, 9.0, 900.0);
    glTranslatef(0.0, -5.0, -400.0);
    glMatrixMode(GL_MODELVIEW);

}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800,600);
    glutInitWindowPosition(250,80);
    glutCreateWindow("3D");
    init();
    glutDisplayFunc(tampil);
    glutReshapeFunc(ukuran);
    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouse);
    glutMotionFunc(mouseMotion);
    glutMainLoop();
    return 0;
}
