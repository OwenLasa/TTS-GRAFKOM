#include <GL/glut.h>
#include <iostream>
#include <math.h>


void home()
{
    //Roof
    glClearColor(0.0, 0.0, 0.5, 1);
    glClear(GL_COLOR_BUFFER_BIT);     // Clear display window
    glPointSize(3.0);
    // Set line segment color as glColor3f(R,G,B)
    glColor3f(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2i(400, 500);//1
    glVertex2i(450, 525);//2
    glVertex2i(475 , 525); //3
    glVertex2i(495, 530); //ATAS SETELAH POINTS 3
    glVertex2i(513, 530);//4
    glVertex2i(535, 530);//5 //ATAS
    glVertex2i(420, 480);// DI BAWAH POINT 1
    glVertex2i(450, 475);//6 //BAWAH
    glVertex2i(485, 455);//7
    glVertex2i(505, 465);//8
    glVertex2i(525, 455);//9
    glVertex2i(550, 465);//10
    glVertex2i(565, 475);//11
    glVertex2i(590, 475);//12
    glVertex2i(610, 485);//13
    glVertex2i(630, 500);//14
    glVertex2i(610, 515);//15
    glVertex2i(595, 525);//16
    glVertex2i(585, 525);//17
    glVertex2i(575, 535);//18
    glVertex2i(555, 540);//19
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(1, 1, 1);
    glVertex2i(450, 465);//1
    glVertex2i(470, 455);//2
    glVertex2i(480, 450);//3
    glVertex2i(495, 450);//4
    glVertex2i(505, 455);//5
    glVertex2i(515, 449);//6
    glVertex2i(525, 447);//7
    glVertex2i(535, 450);//8
    glVertex2i(570, 465);//9
    glVertex2i(590, 465);//10
    glVertex2i(640, 500);//11
    glVertex2i(610, 525);//12
    glVertex2i(585, 535);//13
    glVertex2i(560, 545);//14
    glVertex2i(450, 530);//15
    glVertex2i(390, 500);//16
    glVertex2i(420, 470);//17
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2i(100, 150);//1
    glVertex2i(150, 175);//2
    glVertex2i(170, 178);//3
    glVertex2i(190, 185);//4
    glVertex2i(210, 185);//5
    glVertex2i(225, 185);//6
    glVertex2i(260, 188);//7
    glVertex2i(280, 185);//8
    glVertex2i(310, 165);//9
    glVertex2i(330, 145);//10
    glVertex2i(310, 125);//11
    glVertex2i(290, 105);//12
    glVertex2i(270, 95);//13
    glVertex2i(240, 95);//14
    glVertex2i(220, 95);//15
    glVertex2i(190, 95);//16
    glVertex2i(170, 100);//17
    glVertex2i(160, 100);//18
    glVertex2i(140, 110);//19
    glVertex2i(115, 120);//20
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(1, 1, 1);
    glVertex2i(210, 195);//1
    glVertex2i(275, 195);//2
    glVertex2i(340, 145);//3
    glVertex2i(270, 80);//4
    glVertex2i(200, 80);//5
    glVertex2i(110, 110);//6
    glVertex2i(90, 145);//7
    glVertex2i(150, 185);//8
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2i(310, 168);//9
    glVertex2i(300, 175);//10
    glVertex2i(490, 450);//11
    glVertex2i(500, 448);//12
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0, 0, 1);
    glVertex2i(320, 160);//13
    glVertex2i(510, 448);//14
    glVertex2i(500, 448);//15
    glVertex2i(310, 167);//16
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1);
    glVertex2i(320, 160);//17
    glVertex2i(330, 153);//18
    glVertex2i(510, 448);//19
    glVertex2i(520, 445);//20
    glVertex2i(445, 335);//21
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2i(500, 150);//1
    glVertex2i(550, 180);//2
    glVertex2i(700, 190);//3
    glVertex2i(550, 120);//4
    glVertex2i(700, 120);//5
    glVertex2i(750, 150);//6
    glVertex2i(730, 180);//7
    glVertex2i(715, 190);
    glVertex2i(708, 190);
    glVertex2i(680, 110);//8
    glVertex2i(660, 110);//9
    glVertex2i(640, 120);//10
    glVertex2i(620, 110);//11
    glVertex2i(600, 120);//12
    glVertex2i(515, 135);//13
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(1, 1, 1);
    glVertex2i(490, 150);
    glVertex2i(550, 190);
    glVertex2i(720, 195);
    glVertex2i(760, 150);
    glVertex2i(700, 105);
    glVertex2i(630, 105);
    glVertex2i(590, 110);
    glVertex2i(550, 110);
    glVertex2i(520, 120);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0 );
    glVertex2i(100, 400);//1
    glVertex2i(150, 430);//2
    glVertex2i(190, 440);//3
    glVertex2i(220, 440);//4
    glVertex2i(240, 430);//5
    glVertex2i(260, 420);//6
    glVertex2i(280, 400);//7
    glVertex2i(280, 380);//8
    glVertex2i(270, 360);//9
    glVertex2i(260, 340);//10
    glVertex2i(240, 335);//11
    glVertex2i(220, 335);//12
    glVertex2i(190, 335);//13
    glVertex2i(160, 340);//14
    glVertex2i(130, 350);//15
    glVertex2i(100, 370);//16
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(1, 1, 1);
    glVertex2i(90, 400);
    glVertex2i(160, 445);
    glVertex2i(260, 440);
    glVertex2i(290, 390);
    glVertex2i(280, 330);
    glVertex2i(200, 320);
    glVertex2i(150, 330);
    glVertex2i(100, 350);
    glEnd();






    
    glFlush();
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutCreateWindow("TTS_Grafkom_DOSEN_IN232G_672018099");
    glutDisplayFunc(home);
    gluOrtho2D(0, 800, 0, 600);
    glutMainLoop();

    return 0;
}
