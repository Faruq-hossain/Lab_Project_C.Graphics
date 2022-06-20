#include <GL/gl.h>
#include <GL/glut.h>
#include <stdio.h>


float p=0.0;



void display(void)
{

glClear (GL_COLOR_BUFFER_BIT);

 if(p<=100)
       p=p+.005;

      else
        p=0.0;

    glutPostRedisplay();
    glLineWidth(1.5);


    glBegin(GL_LINES);
    //dulna lower area
    //glVertex2f(5,25);
    //glVertex2f(25,25);

    //glVertex2f(25,25);
   // glVertex2f(27,18);

     glEnd();

    //dulna
    glBegin(GL_QUADS);

    //backround of middle
 glColor3f (0.420, 0.557, 0.137);
 glVertex3f(0.0f, 60.0f, 0.0f);
 glVertex3f(0.0f, 40.0f,0.0f);
 glVertex3f(100.0f, 40.0f, 0.0f);
 glVertex3f(100.0f, 60.0f, 0.0f);

 //backround lower part
 glColor3f (0.420, 0.557, 0.137);
 glVertex3f(0.0f, 40.0f, 0.0f);
 glVertex3f(0.0f, 13.0f,0.0f);
 glVertex3f(100.0f, 13.0f, 0.0f);
 glVertex3f(100.0f, 40.0f, 0.0f);

 //backround upper part
 glColor3f (0.128, 0.565, 1.0);
 glVertex3f(0.0f, 80.0f, 0.0f);
 glVertex3f(0.0f, 60.0f,0.0f);
 glVertex3f(100.0f, 60.0f, 0.0f);
 glVertex3f(100.0f, 80.0f, 0.0f);




 // main road
    glColor3f (0.5, 0.5, 0.5);
glVertex3f(0.0f, 12.0f, 0.0f);
 glVertex3f(0.0f, 3.0f,0.0f);
 glVertex3f(100.0f, 3.0f, 0.0f);
 glVertex3f(100.0f, 12.0f, 0.0f);


     //dulna front ground colour
    glColor3f (0.0, 0.0, 1.0);
 glVertex3f(4.0f, 25.0f, 0.0f);
 glVertex3f(6.0f, 17.0f,0.0f);
 glVertex3f(7.0f, 18.0f, 0.0f);
 glVertex3f(5.0f, 25.0f, 0.0f);
     //dulna front ground
 glVertex3f(6.0f, 17.0f, 0.0f);
 glVertex3f(27.0f, 17.0f,0.0f);
 glVertex3f(27.0f, 18.0f, 0.0f);
 glVertex3f(7.0f, 18.0f, 0.0f);

   //dulna main ground
    glColor3f (0.38f, 0.19f, 0.0f);
 glVertex3f(5.0f, 25.0f, 0.0f);
 glVertex3f(7.0f, 18.0f,0.0f);
 glVertex3f(27.0f, 18.0f, 0.0f);
 glVertex3f(25.0f, 25.0f, 0.0f);

    //dulna right piller
    glColor3f (0.0, 1.0, 1.0);
 glVertex3f(7.0f, 36.0f, 0.0f);
 glVertex3f(7.0f, 21.0f,0.0f);
 glVertex3f(9.0f, 21.0f, 0.0f);
 glVertex3f(9.0f, 36.0f, 0.0f);

    //dulna left piller
 glVertex3f(23.0f, 21.0f, 0.0f);
 glVertex3f(25.0f, 21.0f,0.0f);
 glVertex3f(25.0f, 36.0f, 0.0f);
 glVertex3f(23.0f, 36.0f, 0.0f);
     //dulna junction sheild and piller
 glVertex3f(4.0f, 37.0f, 0.0f);
 glVertex3f(4.0f, 36.0f,0.0f);
glVertex3f(28.0f, 36.0f, 0.0f);
 glVertex3f(28.0f, 37.0f, 0.0f);

 //dulna backend sit
 glColor3f (0.0, 0.0, 0.0);
 glVertex3f(12.0f, 27.0f, 0.0f);
 glVertex3f(12.0f, 25.0f,0.0f);
 glVertex3f(19.0f, 25.0f, 0.0f);
 glVertex3f(19.0f, 27.0f, 0.0f);

 //dulna main  sit
 glColor3f (0.5, 1.0, 1.0);
 glVertex3f(12.0f, 25.0f,0.0f);
 glVertex3f(19.0f, 25.0f, 0.0f);
 glVertex3f(20.0f, 22.0f, 0.0f);
 glVertex3f(11.0f, 22.0f, 0.0f);

 //main road side single road infront dulna
 glColor3f (0.0, 0.0, 0.0);
 glVertex3f(0.0f, 13.0f,0.0f);
 glVertex3f(0.0f, 12.0f, 0.0f);
 glVertex3f(50.0f, 12.0f, 0.0f);
 glVertex3f(50.0f, 13.0f, 0.0f);

 //bonomeya left road
 glVertex3f(49.0f, 13.0f,0.0f);
 glVertex3f(50.0f, 13.0f, 0.0f);
 glVertex3f(50.0f, 18.0f, 0.0f);
 glVertex3f(49.0f, 18.0f, 0.0f);


 //bonomeya right road
 glVertex3f(60.0f, 13.0f,0.0f);
 glVertex3f(61.0f, 13.0f, 0.0f);
 glVertex3f(61.0f, 18.0f, 0.0f);
 glVertex3f(60.0f, 18.0f, 0.0f);

 // bonomeya infront road
 glVertex3f(60.0f, 13.0f,0.0f);
 glVertex3f(60.0f, 12.0f, 0.0f);
 glVertex3f(100.0f, 12.0f, 0.0f);
 glVertex3f(100.0f, 13.0f, 0.0f);


 //road 4
 //glColor3f (0.0, 0.1, 0.0);
 //glVertex3f(0.0f, 3.0f,0.0f);
 //glVertex3f(0.0f, 0.0f, 0.0f);
 //glVertex3f(100.0f, 0.0f, 0.0f);
 //glVertex3f(100.0f, 3.0f, 0.0f);


    glEnd();

    //bonomaya main house start
    //bonomaya main
    glBegin(GL_QUADS);

    //upper sheild
    glColor3f (1.0, 0.5, 0.0);
 glVertex3f(35.0f, 40.0f,0.0f);
 glVertex3f(55.0f, 50.0f, 0.0f);
 glVertex3f(75.0f, 40.0f, 0.0f);
 glVertex3f(55.0f, 43.0f, 0.0f);
// lower sheild
 glColor3f (0.0, 0.1, 0.0);
 glVertex3f(35.0f, 40.0f,0.0f);
glVertex3f(55.0f, 43.0f, 0.0f);
 glVertex3f(75.0f, 40.0f, 0.0f);
 glVertex3f(55.0f, 39.0f, 0.0f);

 //floor area
 glColor3f (0.0, 0.1, 0.0);
 glVertex3f(40.0f, 20.0f,0.0f);
 glVertex3f(40.0f, 19.0f, 0.0f);
 glVertex3f(50.0f, 17.0f, 0.0f);
 glVertex3f(50.0f, 18.0f, 0.0f);

 glVertex3f(50.0f, 17.0f,0.0f);
 glVertex3f(60.0f, 17.0f, 0.0f);
 glVertex3f(60.0f, 18.0f, 0.0f);
 glVertex3f(50.0f, 18.0f, 0.0f);

 glVertex3f(60.0f, 18.0f,0.0f);
 glVertex3f(60.0f, 17.0f, 0.0f);
 glVertex3f(70.0f, 19.0f, 0.0f);
 glVertex3f(70.0f, 20.0f, 0.0f);


 glVertex3f(89.0f, 15.0f,0.0f);
 glVertex3f(89.0f, 13.0f, 0.0f);
 glVertex3f(91.0f, 13.0f, 0.0f);
 glVertex3f(91.0f, 15.0f, 0.0f);




    glEnd();

    //bonomaya main floor 1
    glBegin(GL_TRIANGLES);
    glColor3f (0.627, 0.322, 0.176);
//floor left
 glVertex3f(40.0f, 20.0f, 0.0f);
 glVertex3f(49.0f, 18.0f, 0.0f);
 glVertex3f(45.0f, 27.0f, 0.0f);

    //bonomaya main floor left middle
    glColor3f (0.38f, 0.19f, 0.0f);
 glVertex3f(45.0f, 27.0f, 0.0f);
 glVertex3f(49.0f, 18.0f, 0.0f);
    glVertex3f(55.0f, 30.0f, 0.0f);

    //bonomaya main floor middle
    glColor3f (0.38f, 0.19f, 0.0f);
    glVertex3f(49.0f, 18.0f, 0.0f);
    glVertex3f(55.0f, 30.0f, 0.0f);
    glVertex3f(60.0f, 18.0f, 0.0f);

     //bonomaya main floor middle right
    glColor3f (0.38f, 0.19f, 0.0f);
    glVertex3f(55.0f, 30.0f, 0.0f);
    glVertex3f(60.0f, 18.0f, 0.0f);
    glVertex3f(65.0f, 25.0f, 0.0f);

     //bonomaya main floor right
    glColor3f (0.627, 0.322, 0.176);
    glVertex3f(60.0f, 18.0f, 0.0f);
    glVertex3f(65.0f, 25.0f, 0.0f);
    glVertex3f(70.0f, 20.0f, 0.0f);




 glEnd();

   //bonomaya main house


    //dulna upper area
    glBegin(GL_LINES);

    //dulna sheild backend
    glColor3f(0.0, 0.0, 1.0);
   glVertex2f(4, 37);
    glVertex2f(7, 42);

    glVertex2f(7, 42);
    glVertex2f(31,42);

//dulna sheild left
    glVertex2f(31,42);
    glVertex2f(28, 37);

    glVertex2f(9,37);
    glVertex2f(12,42);

//dulna sheild middle

    glVertex2f(16,37);
    glVertex2f(19,42);

    //dulna sheild right

    glVertex2f(23,37);
    glVertex2f(26,42);

    glVertex2f(31,42);
    glVertex2f(28,36);

    //dulna wire right front
    glVertex2f(11,36);
    glVertex2f(11,22);
//dulna wire right backend
    glVertex2f(12,36);
    glVertex2f(12,27);
//dulna wire left  front
    glVertex2f(19,36);
    glVertex2f(19,27);
//dulna wire left backend
    glVertex2f(20,36);
    glVertex2f(20,22);

    //bonomaya inner piller left
    glVertex2f(40,40);
    glVertex2f(40,20);

    glVertex2f(40,20);
    glVertex2f(45,27);
    //bonomaya inner piller left middle

    glVertex2f(45,27);
    glVertex2f(45,39.5);

    glVertex2f(45,27);
    glVertex2f(55,30);

    //bonomaya inner piller  middle

    glVertex2f(55,30);
    glVertex2f(55,39);

    glVertex2f(55,30);
    glVertex2f(65,25);
//bonomaya inner piller  middle right
    glVertex2f(65,25);
    glVertex2f(65,39.5);

    glVertex2f(65,25);
    glVertex2f(70,20);

//bonomaya inner piller   right
    glVertex2f(70,20);
    glVertex2f(70,40);

    glVertex2f(47,39.5);
    glVertex2f(47,18);



    glEnd();



    glBegin(GL_TRIANGLES);
    // dulna front  grass
 glColor3f(0.0, 1.0, 0.0);
 glVertex3f(10.0f, 13.0f, 0.0f);
 glVertex3f(12.0f, 15.0f, 0.0f);
 glVertex3f(14.0f, 13.0f, 0.0f);


 glVertex3f(14.0f, 13.0f, 0.0f);
 glVertex3f(16.0f, 15.0f, 0.0f);
 glVertex3f(18.0f, 13.0f, 0.0f);

 glVertex3f(23.0f, 13.0f, 0.0f);
 glVertex3f(24.0f, 15.0f, 0.0f);
 glVertex3f(25.0f, 13.0f, 0.0f);

 glVertex3f(25.0f, 13.0f, 0.0f);
 glVertex3f(26.0f, 15.0f, 0.0f);
 glVertex3f(27.0f, 13.0f, 0.0f);

 glVertex3f(27.0f, 13.0f, 0.0f);
 glVertex3f(28.0f, 15.0f, 0.0f);
 glVertex3f(29.0f, 13.0f, 0.0f);

 glVertex3f(70.0f, 13.0f, 0.0f);
 glVertex3f(72.0f, 15.0f, 0.0f);
 glVertex3f(74.0f, 13.0f, 0.0f);

 glVertex3f(74.0f, 13.0f, 0.0f);
 glVertex3f(76.0f, 15.0f, 0.0f);
 glVertex3f(78.0f, 13.0f, 0.0f);

 //road site big tree
 glVertex3f(85.0f, 15.0f, 0.0f);
 glVertex3f(95.0f, 15.0f, 0.0f);
 glVertex3f(90.0f, 20.0f, 0.0f);

 glVertex3f(86.0f, 17.0f, 0.0f);
 glVertex3f(94.0f, 17.0f, 0.0f);
 glVertex3f(90.0f, 22.0f, 0.0f);

 glVertex3f(87.0f, 20.0f, 0.0f);
 glVertex3f(93.0f, 20.0f, 0.0f);
 glVertex3f(90.0f, 25.0f, 0.0f);



    glEnd();



    //aircraft design area start
    glBegin(GL_QUADS);
// aircraft body
    glColor3f (1.0, 0.5, 0.0);
 glVertex3f(10.0f, 64.0f, 0.0f);
 glVertex3f(12.0f, 58.0f, 0.0f);
 glVertex3f(35.0f, 58.0f, 0.0f);
 glVertex3f(15.0f, 65.0f, 0.0f);
// aircraft body
 glVertex3f(15.0f, 65.0f, 0.0f);
 glVertex3f(35.0f, 58.0f, 0.0f);
 glVertex3f(42.0f, 63.0f, 0.0f);
 glVertex3f(40.0f, 65.0f, 0.0f);

 //aircraft wing very left
 glColor3f (0.0, 1.0, 1.0);
 glVertex3f(17.0f, 65.0f, 0.0f);
 glVertex3f(21.0f, 65.0f, 0.0f);
 glVertex3f(26.0f, 69.0f, 0.0f);
 glVertex3f(21.0f, 69.0f, 0.0f);

//aircraft wing  middle

 glColor3f (1.0, 1.0, 0.0);
 glVertex3f(21.0f, 65.0f, 0.0f);
 glVertex3f(26.0f, 65.0f, 0.0f);
 glVertex3f(30.0f, 69.0f, 0.0f);
 glVertex3f(25.0f, 69.0f, 0.0f);

 //aircraft wing right

    glColor3f (0.0, 1.0, 0.0);
 glVertex3f(26.0f, 65.0f, 0.0f);
 glVertex3f(30.0f, 65.0f, 0.0f);
 glVertex3f(34.0f, 69.0f, 0.0f);
 glVertex3f(30.0f, 69.0f, 0.0f);

 //aircraft back part backwings1
 glColor3f (1.0, 0.0, 0.0);
 glVertex3f(44.0f, 70.0f, 0.0f);
 glVertex3f(40.0f, 65.0f, 0.0f);
 glVertex3f(45.0f, 65.0f, 0.0f);
 glVertex3f(48.0f, 70.0f, 0.0f);

//aircraft back part backwings2 yellow

    glColor3f (1.0, 1.0, 0.0);
 glVertex3f(40.0f, 65.0f, 0.0f);
 glVertex3f(44.0f, 59.0f, 0.0f);
 glVertex3f(46.0f, 60.0f, 0.0f);
 glVertex3f(45.0f, 65.0f, 0.0f);



 //aircraft Wings 1yellow
 glColor3f (1.0, 1.0, 0.0);
glVertex3f(16.0f, 58.0f, 0.0f);
 glVertex3f(13.0f, 53.0f, 0.0f);
 glVertex3f(18.0f, 52.0f, 0.0f);
 glVertex3f(24.0f, 58.0f, 0.0f);

 //aircraft Wings 2 red
    glColor3f (1.0, 0.0, 0.0);
 glVertex3f(20.0f, 61.0f, 0.0f);
 glVertex3f(31.0f, 48.0f, 0.0f);
 glVertex3f(37.0f, 50.0f, 0.0f);
 glVertex3f(30.0f, 61.0f, 0.0f);



    glEnd();


    //Green garden building start
    glBegin(GL_QUADS);
    //main body
    glColor3f (0.1, 0.1, 0.0);
 glVertex3f(70.0f, 59.0f, 0.0f);
 glVertex3f(70.0f, 50.0f, 0.0f);
 glVertex3f(90.0f, 50.0f, 0.0f);
 glVertex3f(90.0f, 59.0f, 0.0f);
// door
    glColor3f (1.0, 0.0, 0.0);
 glVertex3f(77.0f, 50.0f, 0.0f);
 glVertex3f(83.0f, 50.0f, 0.0f);
glVertex3f(83.0f, 54.0f, 0.0f);
 glVertex3f(77.0f, 54.0f, 0.0f);

  //Green garden building down part left
 glColor3f (0.0, 1.0, 0.0);
 glVertex3f(69.0f, 51.0f, 0.0f);
 glVertex3f(69.0f, 49.0f, 0.0f);
 glVertex3f(70.0f, 49.0f, 0.0f);
 glVertex3f(70.0f, 51.0f, 0.0f);

  //Green garden building down front part
 glColor3f (0.0, 1.0, 0.0);
 glVertex3f(70.0f, 50.0f, 0.0f);
 glVertex3f(70.0f, 49.0f, 0.0f);
 glVertex3f(90.0f, 49.0f, 0.0f);
 glVertex3f(90.0f, 50.0f, 0.0f);

  //Green garden building down  right part
 glColor3f (0.0, 1.0, 0.0);
 glVertex3f(90.0f, 49.0f, 0.0f);
 glVertex3f(91.0f, 49.0f, 0.0f);
 glVertex3f(91.0f, 51.0f, 0.0f);
 glVertex3f(90.0f, 51.0f, 0.0f);

  //Green garden building upper part
 glColor3f (0.0, 1.0, 0.0);
 glVertex3f(67.0f, 60.0f, 0.0f);
 glVertex3f(67.0f, 59.0f, 0.0f);
 glVertex3f(93.0f, 59.0f, 0.0f);
 glVertex3f(93.0f, 60.0f, 0.0f);

    //Green garden building upper box 1 left
 glColor3f (1.0, 0.0, 0.0);
 glVertex3f(67.0f, 65.0f, 0.0f);
 glVertex3f(67.0f, 62.0f, 0.0f);
 glVertex3f(70.0f, 62.0f, 0.0f);
 glVertex3f(70.0f, 65.0f, 0.0f);

 //Green garden building upper box 2 left
  glColor3f (0.0, 1.0, 0.0);
 glVertex3f(70.0f, 65.0f, 0.0f);
 glVertex3f(70.0f, 62.0f, 0.0f);
 glVertex3f(75.0f, 62.0f, 0.0f);
 glVertex3f(75.0f, 65.0f, 0.0f);

 //Green garden building upper box middle
 glColor3f (1.0, 1.0, 0.0);
 glVertex3f(75.0f, 65.0f, 0.0f);
 glVertex3f(75.0f, 62.0f, 0.0f);
 glVertex3f(80.0f, 62.0f, 0.0f);
 glVertex3f(80.0f, 65.0f, 0.0f);

 //Green garden building upper box 4 right
 glColor3f (0.0, 0.0, 1.0);
 glVertex3f(80.0f, 65.0f, 0.0f);
 glVertex3f(80.0f, 62.0f, 0.0f);
 glVertex3f(85.0f, 62.0f, 0.0f);
 glVertex3f(85.0f, 65.0f, 0.0f);

 //Green garden building upper box 5 right
 glColor3f (0.0, 1.0, 1.0);
 glVertex3f(85.0f, 65.0f, 0.0f);
 glVertex3f(85.0f, 62.0f, 0.0f);
 glVertex3f(90.0f, 62.0f, 0.0f);
 glVertex3f(90.0f, 65.0f, 0.0f);

 //Green garden building upper box 6 right
 glColor3f (0.0, 1.0, 0.0);
 glVertex3f(90.0f, 65.0f, 0.0f);
 glVertex3f(90.0f, 62.0f, 0.0f);
 glVertex3f(93.0f, 62.0f, 0.0f);
 glVertex3f(93.0f, 65.0f, 0.0f);

 //Green garden building upper-down box 1
 glColor3f (1.0, 0.0, 1.0);
 glVertex3f(67.0f, 62.0f, 0.0f);
 glVertex3f(67.0f, 60.0f, 0.0f);
 glVertex3f(70.0f, 60.0f, 0.0f);
 glVertex3f(70.0f, 62.0f, 0.0f);


 //Green garden building upper-down box 2
 glColor3f (0.0, 0.0, 1.0);
 glVertex3f(70.0f, 62.0f, 0.0f);
 glVertex3f(70.0f, 60.0f, 0.0f);
 glVertex3f(75.0f, 60.0f, 0.0f);
 glVertex3f(75.0f, 62.0f, 0.0f);

 //Green garden building upper-down box 3
 glColor3f (0.0, 0.0, 0.0);
 glVertex3f(75.0f, 62.0f, 0.0f);
 glVertex3f(75.0f, 60.0f, 0.0f);
 glVertex3f(80.0f, 60.0f, 0.0f);
 glVertex3f(80.0f, 62.0f, 0.0f);
 //Green garden building upper-down box 4
 glColor3f (1.0, 0.0, 0.0);
 glVertex3f(80.0f, 62.0f, 0.0f);
 glVertex3f(80.0f, 60.0f, 0.0f);
 glVertex3f(85.0f, 60.0f, 0.0f);
 glVertex3f(85.0f, 62.0f, 0.0f);

 //Green garden building upper-down box 5
 glColor3f (1.0, 1.0, 0.0);
 glVertex3f(85.0f, 62.0f, 0.0f);
 glVertex3f(85.0f, 60.0f, 0.0f);
 glVertex3f(90.0f, 60.0f, 0.0f);
 glVertex3f(90.0f, 62.0f, 0.0f);

 //Green garden building upper-down box 6
 glColor3f (0.0, 0.0, 1.0);
 glVertex3f(90.0f, 62.0f, 0.0f);
 glVertex3f(90.0f, 60.0f, 0.0f);
 glVertex3f(93.0f, 60.0f, 0.0f);
 glVertex3f(93.0f, 62.0f, 0.0f);





 glEnd();

    glBegin(GL_LINES);

    // Green garden bhavan horizental wear1
    glColor3f(0.0, 0.0, 1.0);
   glVertex2f(70, 57);
    glVertex2f(90, 57);
// Green garden horizental wear2

    glVertex2f(70, 56);
    glVertex2f(90, 56);
// Green garden vertical  wear1 left1

    glVertex2f(72, 59);
    glVertex2f(72, 50);
// Green garden vertical  wear2 left


    glVertex2f(74, 59);
    glVertex2f(74, 50);
// Green garden vertical  wear1 right

    glVertex2f(86, 59);
    glVertex2f(86, 50);
// Green garden vertical  wear2 right

    glVertex2f(88, 59);
    glVertex2f(88, 50);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0, 1.0, 0.0);
//Green garden grass
 glVertex3f(93.0f, 50.0f, 0.0f);
 glVertex3f(95.0f, 50.0f, 0.0f);
 glVertex3f(94.0f, 52.0f, 0.0f);


 glVertex3f(95.0f, 50.0f, 0.0f);
 glVertex3f(99.0f, 50.0f, 0.0f);
 glVertex3f(97.0f, 53.0f, 0.0f);

    glEnd();


 //Green garden building End


 //kick bike start.....

    glBegin(GL_QUADS);
    //kick bike uppor
 glColor3f (1.0, 0.5, 0.0);
 glVertex3f(10.0+p, 8.0f, 0.0f);
 glVertex3f(10.0+p, 7.0f, 0.0f);
 glVertex3f(12.0+p, 6.0f, 0.0f);
 glVertex3f(13.0+p, 6.0f, 0.0f);

//kick bike middle
 glVertex3f(14.0+p, 6.0f, 0.0f);
 glVertex3f(14.0+p, 5.0f, 0.0f);
 glVertex3f(23.0+p, 5.0f, 0.0f);
 glVertex3f(23.0+p, 6.0f, 0.0f);


    glEnd();



    glBegin(GL_TRIANGLES);
    glColor3f(1.0, 0.5, 0.0);

 glVertex3f(23.0+p, 6.0f, 0.0f);
 glVertex3f(23.0+p, 5.0f, 0.0f);
 glVertex3f(25.0+p, 7.0f, 0.0f);

    glEnd();


    glBegin(GL_LINES);

    glColor3f(0.0, 0.0, 1.0);
    glVertex2f(25+p, 10);
    glVertex2f(25+p, 5);

    //bike upper control
    glVertex2f(23+p, 11);
    glVertex2f(26+p, 10);


    glEnd();

     //kick bike circle big 1
    glPushMatrix();
    glColor3f(0.0, 0.0, 0.0);
    glTranslatef(13+p, 5, 0.0);
    glutSolidSphere(1.5,100,2);

    glPopMatrix();
    glEnd();

     //kick bike circle small 1
    glPushMatrix();
    glColor3f(1.0, 1.0, 1.0);
    glTranslatef(13+p, 5, 0.0);
    glutSolidSphere(0.5 ,100,2);

    glPopMatrix();
    glEnd();


     //kick bike circle big 2
    glPushMatrix();
    glColor3f(0.0, 0.0, 0.0);
    glTranslatef(25+p, 5, 0.0);
    glutSolidSphere(1.5,100,2);

    glPopMatrix();
    glEnd();


     //kick bike circle small 1
    glPushMatrix();
    glColor3f(1.0, 1.0, 1.0);
    glTranslatef(25+p, 5, 0.0);
    glutSolidSphere(0.5 ,100,2);

    glPopMatrix();
    glEnd();


 //kick bike start end........


 //cycle start....

 //chaka back
    glPushMatrix();
    glColor3f(1.0, 0.5, 0.0);
    glTranslatef(62+p, 5, 0.0);
    glutSolidSphere(2.5 ,100,2);

    glPopMatrix();
    glEnd();

    //chaka front
    glPushMatrix();
    glColor3f(1.0, 0.5, 0.0);
    glTranslatef(73+p, 5, 0.0);
    glutSolidSphere(2.5 ,100,2);

    glPopMatrix();
    glEnd();





    glBegin(GL_LINES);

    glColor3f(0.0, 0.0, 1.0);
    //line for cycle
    glVertex2f(62+p, 5);
    glVertex2f(67+p, 8);

    glVertex2f(62+p, 5);
    glVertex2f(67+p, 4);

    glVertex2f(67+p, 9);
    glVertex2f(67+p, 4);

    glVertex2f(67+p, 9);
    glVertex2f(66+p, 10);

    glVertex2f(67+p, 8);
    glVertex2f(73+p, 8);

    glVertex2f(73+p, 8);
    glVertex2f(67+p, 4);

    glVertex2f(73+p, 10);
    glVertex2f(73+p, 5);

    glVertex2f(73+p, 10);
    glVertex2f(71+p, 11);

    //spoke
    glVertex2f(73+p, 5);
    glVertex2f(75+p, 4);

    glVertex2f(73+p, 5);
    glVertex2f(75+p, 6);

    glVertex2f(73+p, 5);
    glVertex2f(72+p, 6);

    glVertex2f(73+p, 5);
    glVertex2f(72+p, 4);


    glEnd();




 //cycle start end......







    glBegin(GL_TRIANGLES);
    glColor3f(0.0, 0.0, 1.0);

 //glVertex3f(30.0f, 65.0f, 0.0f);
 //glVertex3f(36.0f, 65.0f, 0.0f);
 //glVertex3f(34.0f, 69.0f, 0.0f);

    glEnd();
    //aircraft front circle
    glPushMatrix();
    glColor3f(1.0, 0.0, 0.0);
    glTranslatef(9.5, 60.5, 0.0);
    glutSolidSphere(3.5,100,2);

    glPopMatrix();
    glEnd();

    //aircraft design area End


    //aircraft propeller
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 1.0);
    glVertex2f(4, 37);
    glVertex2f(7, 42);

    glEnd();

    //aircraft circle front.....
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 1.0);
    glVertex2f(9, 61);
    glVertex2f(10, 65);

    glVertex2f(9, 61);
    glVertex2f(5, 63);

    glVertex2f(9, 61);
    glVertex2f(6, 57);

    glVertex2f(9, 61);
    glVertex2f(12, 57);

    glEnd();

   //meg start.....
    glPushMatrix();
    glColor3f(1.0, 1.0, 1.0);
    glTranslatef(77+p, 73.5, 0.0);
    glutSolidSphere(3,100,2);

    glPopMatrix();
    glEnd();

    glPushMatrix();
    glColor3f(1.0, 1.0, 1.0);
    glTranslatef(80+p, 73.5, 0.0);
    glutSolidSphere(2,100,2);

    glPopMatrix();
    glEnd();


    glPushMatrix();
    glColor3f(1.0, 1.0, 1.0);
    glTranslatef(81+p, 76, 0.0);
    glutSolidSphere(2,100,2);

    glPopMatrix();
    glEnd();


   //meg end.....


//plane

    if(p<=95) //moving limit with the display measurement
        p=p+.01; // changing the object position for redisplaying

    else
        p=-60; // For backing the object continuously

    glutPostRedisplay();

    glColor3f(0.7,0.7,0.0);
    glBegin(GL_QUADS);
    glVertex2f(70-p,70);
    glVertex2f(85-p,70);
    glVertex2f(85-p,65);
    glVertex2f(70-p,65);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(85-p,70);
    glVertex2f(90-p,75);
    glVertex2f(93-p,75);
    glVertex2f(85-p,65);
    glEnd();
    glColor3f(0.7,0.0,1.0);
    glBegin(GL_TRIANGLES);
    glVertex2f(65-p,66);
    glVertex2f(70-p,70);
    glVertex2f(70-p,65);
    glEnd();

    glColor3f(0,0,1);
    glBegin(GL_QUADS);
    glVertex2f(77-p,70);
    glVertex2f(81-p,74);
    glVertex2f(83-p,74);
    glVertex2f(80-p,70);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(77-p,65);
    glVertex2f(80-p,65);
    glVertex2f(81-p,62);
    glVertex2f(79-p,62);
    glEnd();






glFlush ();
}


void init (void)
{

glClearColor (1.0, 1.0, 1.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0.0, 100.0, 0.0, 80.0, -10.0, 10.0);
}

int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (1300, 1300);
glutInitWindowPosition (100, 100);
glutCreateWindow ("Bonomaya DIU");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0;
}


