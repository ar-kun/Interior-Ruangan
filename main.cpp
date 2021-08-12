//header
#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>
//deklarasi fungsi
void display();
void init();
void reshape(int, int);
void keyboard(unsigned char, int, int);
//main program
int main (int argc, char** argv){
 //inisialisasi
 glutInit(&argc, argv);
 glutInitDisplayMode( GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH ); // GLUT_DEPTH : mengalokasikan sumbu z
 glutInitWindowPosition(200, 100); //atur sumbu x dan y
 glutInitWindowSize(500, 500); //atur lebar dan tinggi jendela
 glutCreateWindow("Interior Ruangan");
 glutDisplayFunc(display); //memanggil fungsi display
 glutReshapeFunc(reshape); //memanggil fungsi reshape
 glutKeyboardFunc(keyboard); //memanggil fungsi keyboard
 init();
 glutMainLoop(); //looping program utama
}
void init(){
 glClearColor(0.0, .2, .4, 1.0);
 const GLfloat light_ambient[] = { 0.1f, 0.1f, 0.1f, 1.0f };
 const GLfloat light_diffuse[] = { 0.75f, 0.75f, 0.75f, 1.0f };
 const GLfloat light_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
 const GLfloat light_position[] = { 2.0f, 5.0f, 5.0f, 0.0f };
 const GLfloat mat_ambient[] = { 0.7f, 0.7f, 0.7f, 1.0f };
 const GLfloat mat_diffuse[] = { 0.8f, 0.8f, 0.8f, 1.0f };
 const GLfloat mat_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
 const GLfloat high_shininess[] = { 100.0f };
 glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient);
 glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse);
 glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
 glLightfv(GL_LIGHT0, GL_POSITION, light_position);
 glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
 glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
 glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
 glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);
 glEnable(GL_DEPTH_TEST);
 glEnable(GL_LIGHTING);
 glEnable(GL_LIGHT0);
 glEnable(GL_NORMALIZE); //normalisasi objek jika ada cahaya yang tidak sesuai
 glShadeModel(GL_SMOOTH); //mengaktifkan kehalusan material objek
 glEnable(GL_COLOR_MATERIAL); //mengaktifkan setting warna pada objek
}
void display(){
 //reset
 glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//Awal Kursi
     glPushMatrix();
     glTranslatef(-10, -10, 0);
     glScalef(1.0,4.0,0.5);
     glColor3f(1,.75,.4);
     glutSolidCube(5);
     glPopMatrix();

     glPushMatrix();
     glTranslatef(10, -10, 0);
     glScalef(1.0, 4.0,0.5);
     glColor3f(1,.75,.4);
     glutSolidCube(5);
     glPopMatrix();

     glPushMatrix();
     glTranslatef(-10, -10, -20);
     glScalef(1.0,4.0,0.5);
     glColor3f(1,.8,.6);
     glutSolidCube(5);
     glPopMatrix();

     glPushMatrix();
     glTranslatef(10, -10, -20);
     glScalef(1.0, 4.0,0.5);
     glColor3f(1,.8,.6);
     glutSolidCube(5);
     glPopMatrix();

     glPushMatrix();
     glTranslatef(0, 0, -10);
     glScalef(5.0, 1.0,4.5);
     glColor3f(1,.75,.4);
     glutSolidCube(5);
     glPopMatrix();

     glPushMatrix();
     glTranslatef(0, 10, 1);
     glScalef(4.99, 4.0,.5);
     glColor3f(1,.75,.4);
     glutSolidCube(5);
     glPopMatrix();

     //huruf A
     glPushMatrix();
     glTranslatef(2.5, 10, 2);
     glRotated(25,0,0,1);
     glScalef(1.5, 8,.5);
     glColor3f(1,.9,.55);
     glutSolidCube(2);
     glPopMatrix();

     glPushMatrix();
     glTranslatef(-2.5, 10, 2);
     glRotated(-25,0,0,1);
     glScalef(1.5, 8,.5);
     glColor3f(1,.9,.55);
     glutSolidCube(2);
     glPopMatrix();

     glPushMatrix();
     glTranslatef(0, 7.5, 2);
     glScalef(5, 1,.5);
     glColor3f(1,.9,.55);
     glutSolidCube(2);
     glPopMatrix();
     //Akhir huruf A
//Akhir Kursi
//Awal Meja
    glPushMatrix();//kiri depan
     glTranslatef(-30, -5, -10);
     glScalef(1.0,6.0,0.5);
     glColor3f(.1,.4,.5);
     glutSolidCube(5);
     glPopMatrix();

     glPushMatrix();//kanan depan
     glTranslatef(30, -5, -10);
     glScalef(1.0,6.0,0.5);
     glColor3f(.1,.4,.5);
     glutSolidCube(5);
     glPopMatrix();

     glPushMatrix();//kiri belakang
     glTranslatef(-30, -5, -30);
     glScalef(1.0,6.0,0.5);
     glColor3f(.1,.4,.5);
     glutSolidCube(5);
     glPopMatrix();

     glPushMatrix();//kanan belakang
     glTranslatef(30, -5, -30);
     glScalef(1.0,6.0,0.5);
     glColor3f(.1,.4,.5);
     glutSolidCube(5);
     glPopMatrix();

     glPushMatrix();
     glTranslatef(0, 10, -22.5);
     glScalef(15.0, 1, 6.5);
     glColor3f(.1,.4,.5);
     glutSolidCube(5);
     glPopMatrix();
//akhir Meja

//diAtas Meja
    //tempat pensil
     glPushMatrix();
     glTranslatef(25, 15, -20);
     glRotated(90,1,0,0);
     glScaled(1,1,10);
     glColor3f(.8,.8,.8);
     glutSolidTorus(0.25,2,20,10);
     glPopMatrix();

     glPushMatrix();//bawahanny
     glTranslatef(25, 13, -20);
     glRotated(90,1,0,0);
     glScaled(1.4,1.4,.5);
     glColor3f(.8,.8,.8);
     glutSolidTorus(1,.5,10,10);
     glPopMatrix();
     //pencil
        glPushMatrix();
     glTranslatef(25, 15, -20);
     glRotated(90,1,0,0);
     glScaled(1,1,15);
     glColor3f(.7,.7,.7);
     glutSolidTorus(0.25,.25, 10,10);
     glPopMatrix();

     glPushMatrix();
     glTranslatef(25, 18.5, -20);
     glRotated(-90,1,0,0);
     glScaled(1,1,2.5);
     glColor3f(0,0,0);
     glutSolidCone(.35,.35,10,5);
     glPopMatrix();

     //pencil 2
      glPushMatrix();
     glTranslatef(25.75, 15, -20);
     glRotated(90,1,0,0);
     glScaled(1,1,15);
     glColor3f(.7,.7,.7);
     glutSolidTorus(0.25,.25, 10,10);
     glPopMatrix();

     glPushMatrix();
     glTranslatef(25.75, 18.5, -20);
     glRotated(-90,1,0,0);
     glScaled(1,1,2.5);
     glColor3f(0,0,0);
     glutSolidCone(.35,.35,10,5);
     glPopMatrix();

     //pencil 3
      glPushMatrix();
     glTranslatef(23.5, 15, -20);
     glRotated(90,1,0,0);
     glScaled(1,1,15);
     glColor3f(.7,.7,.7);
     glutSolidTorus(0.25,.25, 10,10);
     glPopMatrix();

     glPushMatrix();
     glTranslatef(23.5, 18.5, -20);
     glRotated(-90,1,0,0);
     glScaled(1,1,2.5);
     glColor3f(0,0,0);
     glutSolidCone(.35,.35,10,5);
     glPopMatrix();
     //akhir pencil
    //akhir tempat pensil

    //Gelas
    glPushMatrix();
     glTranslatef(-25, 15, -30);
     glRotated(90,1,0,0);
     glScaled(1,1,10);
     glColor3f(.8,.8,.8);
     glutSolidTorus(0.25,2,20,10);
     glPopMatrix();

     glPushMatrix();//bawahnya
     glTranslatef(-25, 13, -30);
     glRotated(90,1,0,0);
     glScaled(1.5,1.5,.5);
     glColor3f(.8,.8,.8);
     glutSolidTorus(1,.5,10,10);
     glPopMatrix();

     glPushMatrix();//peganganny
     glTranslatef(-27.5, 15, -30);
     glRotated(0,1,0,0);
     glColor3f(.8,.8,.8);
     glutSolidTorus(0.25,1,10,20);
     glPopMatrix();
    //Akhir gelas
    //laptop
     glPushMatrix();
     glTranslatef(0, 20, -30);
     glScalef(8, 6 ,.5);
     glColor3f(.4,.4,.4);
     glutSolidCube(3);
     glPopMatrix();

     glPushMatrix(); //lcd
     glTranslatef(0, 22, -29.5);
     glScalef(11, 6 ,.5);
     glColor3f(.9,.9,.9);
     glutSolidCube(2);
     glPopMatrix();

     glPushMatrix();
     glTranslatef(0, 12.5, -22.5);
     glRotated(90,-1,0,0);
     glScalef(8, 5 ,.5);
     glColor3f(.4,.4,.4);
     glutSolidCube(3);
     glPopMatrix();

      glPushMatrix();//kamera
    glTranslatef(0, 28.5, -29.5);
    glColor3f(1,1,1);
    glutSolidSphere(.5,20,20);
    glPopMatrix();
    //Akhir laptop
//Akhir diAtas Meja

//lemari
    glPushMatrix();
    glTranslatef(-50, 17.5, 25);
    glScalef(4, 15, 10);
    glColor3f(1,1,1);
    glutSolidCube(5);
    glPopMatrix();

    glPushMatrix(); //Pintu
    glTranslatef(-40, 17.5, 26);
    glScalef(0.5, 14, 9);
    glColor3f(.5,.6,.9);
    glutSolidCube(5);
    glPopMatrix();

    glPushMatrix(); //skat pintu
    glTranslatef(-39.5, 17.5, 26);
    glScalef(0.5, 14, .25);
    glColor3f(1,1,1);
    glutSolidCube(5);
    glPopMatrix();

    glPushMatrix(); //pintu lemari kanan
    glTranslatef(-39.5, 17.5, 23);
    glScaled(1,3,1);
    glColor3f(1,1,1);
    glutSolidSphere(1,10,10);
    glPopMatrix();

    glPushMatrix(); //pintu lemari kiri
    glTranslatef(-39.5, 17.5, 28);
    glScaled(1,3,1);
    glColor3f(1,1,1);
    glutSolidSphere(1,10,10);
    glPopMatrix();
//akhir lemari

//kasur
    glPushMatrix();
    glTranslatef(35, -5, 40);
    glScalef(10, 2, 13);
    glColor3f(1,1,1);
    glutSolidCube(5);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(35, -.5, 40);
    glScalef(9, .5, 12);
    glColor3f(.3,.4,.6);
    glutSolidCube(5);
    glPopMatrix();

    glPushMatrix();//kiri belakang
     glTranslatef(15, -12.5, 20);
     glScalef(.5,3.0,0.5);
     glColor3f(.3,.4,.6);
     glutSolidCube(5);
     glPopMatrix();

     glPushMatrix();//kiri belakang
     glTranslatef(15, -12.5, 60);
     glScalef(.5,3.0,0.5);
     glColor3f(.3,.4,.6);
     glutSolidCube(5);
     glPopMatrix();

     glPushMatrix();//kanan belakang
     glTranslatef(50, -12.5, 20);
     glScalef(.5,3.0,0.5);
     glColor3f(.3,.4,.6);
     glutSolidCube(5);
     glPopMatrix();

     glPushMatrix();//kanan belakang
     glTranslatef(50, -12.5, 60);
     glScalef(.5,3.0,0.5);
     glColor3f(.3,.4,.6);
     glutSolidCube(5);
     glPopMatrix();

     glPushMatrix();//kanan belakang
     glTranslatef(35, 0, 71.3);
     glScalef(10,3.0,0.5);
     glColor3f(1,1,1);
     glutSolidCube(5);
     glPopMatrix();
//Akhir kasur

//Hiasan dinding pojok kanan, piala / hiasan
    //hiasan satu
    glPushMatrix();
     glTranslatef(55, 45, -35);
     glScalef(2.0, .5,2.5);
     glColor3f(.9,.9,.9);
     glutSolidCube(5);
     glPopMatrix();

     glPushMatrix();
     glTranslatef(55, 45, -35);
     glRotated(-90,1,0,0);
     glScalef(2.0, 1.5, 2.5);
     glColor3f(.9,.9,.9);
     glutSolidCone(1.5,1.5,10,20);
     glPopMatrix();

      glPushMatrix();
     glTranslatef(55, 53, -35);
     glRotated(45,1,0,0);
     glScalef(5,5,5);
     glutWireIcosahedron();
     glPopMatrix();
    //hiasan dua
    glPushMatrix();
     glTranslatef(55, 25, -35);
     glScalef(2.0, .5,2.5);
     glColor3f(.9,.9,.9);
     glutSolidCube(5);
     glPopMatrix();

     glPushMatrix();
     glTranslatef(55, 25, -35);
     glRotated(-90,1,0,0);
     glScalef(2.0, 1.5, 2.5);
     glColor3f(.9,.9,.9);
     glutSolidCone(1.5,1.5,10,20);
     glPopMatrix();

      glPushMatrix();
     glTranslatef(55, 33, -35);
     glScalef(5,5,5);
     glutWireOctahedron();
     glPopMatrix();

     //foto
     glPushMatrix();
     glTranslatef(-30, 65, -39);
     glScalef(8, 8 ,.5);
     glColor3f(.9,.9,.9);
     glutSolidCube(2);
     glPopMatrix();
    //Huruf I
    glPushMatrix();
     glTranslatef(-30, 65, -38);
     glScalef(2, 6,.5);
     glColor3f(.95,.55,.0);
     glutSolidCube(2);
     glPopMatrix();
    //Akhir huruf
     glPushMatrix();
     glTranslatef(0, 70, -39);
     glScalef(8, 8 ,.5);
     glColor3f(.9,.9,.9);
     glutSolidCube(2);
     glPopMatrix();

    //Huruf L
    glPushMatrix();
     glTranslatef(-3, 70, -38);
     glScalef(2, 6,.5);
     glColor3f(.92,.3,.5);
     glutSolidCube(2);
     glPopMatrix();

      glPushMatrix();
     glTranslatef(1, 66, -38);
     glScalef(4, 2,.5);
     glColor3f(.92,.3,.5);
     glutSolidCube(2);
     glPopMatrix();
    //Akhir huruf

     glPushMatrix();
     glTranslatef(30, 65, -39);
     glScalef(8, 8 ,.5);
     glColor3f(.9,.9,.9);
     glutSolidCube(2);
     glPopMatrix();

     //Huruf y
    glPushMatrix();
     glTranslatef(30, 62, -38);
     glScalef(1.5, 4,.5);
     glColor3f(.95,.55,.0);
     glutSolidCube(2);
     glPopMatrix();

     glPushMatrix();
     glTranslatef(28, 68, -38);
     glRotated(45,0,0,1);
     glScalef(1.5, 3,.5);
     glColor3f(.95,.55,.0);
     glutSolidCube(2);
     glPopMatrix();

     glPushMatrix();
     glTranslatef(32, 68, -38);
     glRotated(-45,0,0,1);
     glScalef(1.5, 3,.5);
     glColor3f(.95,.55,.0);
     glutSolidCube(2);
     glPopMatrix();
    //Akhir huruf
//Akhir hiasan dinding

//Awal Matahari / Bulan
    glPushMatrix();
    glTranslatef(20, 60, -95);
    glColor3f(.84,.84,.84);
    glutSolidSphere(10,20,20);
    glPopMatrix();
//Akhir Matahari / Bulan
//Awal Pohon
    glPushMatrix();
     glTranslatef(-18, 15, -90);
     glScalef(5, 25 ,2.5);
     glColor3f(.5,.35,.2);
     glutSolidCube(3);
     glPopMatrix();

     glPushMatrix();
     glTranslatef(-18, 45, -90);
     glRotated(-90,1,0,0);
     glScalef(2.0, 1.5, 2.5);
     glColor3f(.02,.6,.14);
     glutSolidCone(10,10,40,60);
     glPopMatrix();

     glPushMatrix();
     glTranslatef(-18, 55, -90);
     glRotated(-90,1,0,0);
     glScalef(2.0, 1.5, 2.5);
     glColor3f(.02,.5,.14);
     glutSolidCone(10,10,40,60);
     glPopMatrix();
//Akhir Pohon

 //Awal Dididing depan
    glPushMatrix();//kanan
     glTranslatef(40, 30, -40);
     glScalef(8.0 , 20.0,.2);
     glColor3f(.0, 0.6, 0.9);
     glutSolidCube(5);
     glPopMatrix();

    glPushMatrix();//kkiri
     glTranslatef(-40, 30, -40);
     glScalef(8.0 , 20.0,.2);
     glColor3f(.0, 0.6, 0.9);
     glutSolidCube(5);
     glPopMatrix();

    glPushMatrix();//bawah
     glTranslatef(0, -5, -40);
     glScalef(15.0 , 6.0,.2);
     glColor3f(.0, 0.6, 0.9);
     glutSolidCube(5);
     glPopMatrix();

    glPushMatrix();//atas
     glTranslatef(0, 70, -40);
     glScalef(15.0 , 4.0,.2);
     glColor3f(.0, 0.6, 0.9);
     glutSolidCube(5);
     glPopMatrix();

    //Jendela
    glPushMatrix();
     glTranslatef(0, 35, -40);
     glScalef(0.5 , 10.0,.2);
     glColor3f(1,1,1);
     glutSolidCube(5);
     glPopMatrix();

    glPushMatrix();
     glTranslatef(0, 35, -40);
     glScalef(8.0 , .5,.2);
     glColor3f(1,1,1);
     glutSolidCube(5);
     glPopMatrix();

//Akhir dinding depan

    glBegin(GL_QUADS);  //Samping Kanan
        glColor3f(.0, 0.6, 0.9);
    glVertex3f(60.0, 80.0, 70.0);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(60.0, -20.0, 70.0);
    glColor3f(.0, 0.6, 0.9);
    glVertex3f(60.0, -20.0, -40.0);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(60.0, 80.0, -40.0);
    glEnd();

    glBegin(GL_QUADS);  //Samping Kiri
    glColor3f(.0, 0.6, 0.9);
    glVertex3f(-60.0, 80.0, 70.0);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-60.0, -20.0, 70.0);
    glColor3f(.0, 0.6, 0.9);
    glVertex3f(-60.0, -20.0, -40.0);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-60.0, 80.0, -40.0);
    glEnd();

    glBegin(GL_QUADS);  //Atas
        glColor3f(.9, .9, .9);
    glVertex3f(60.0, 80.0, 70.0);
    glVertex3f(60.0, 80.0, -40.0);
    glVertex3f(-60.0, 80.0, -40.0);
    glVertex3f(-60.0, 80.0, 70.0);
    glEnd();

    glBegin(GL_QUADS);  //Bawah
        glColor3f(.8, .8, 0.8);
    glVertex3f(60.0, -20.0, -40.0);
    glVertex3f(60.0, -20.0, 70.0);
    glVertex3f(-60.0,-20.0, 70.0);
    glVertex3f(-60.0, -20.0, -40.0);
    glEnd();
//Akhir Kubus

 glFlush();
glutSwapBuffers();
}
//fungsi untuk setting viewport
void reshape(int w, int h){
 glViewport(0,0, (GLsizei)w, (GLsizei)h); //membuat viewport sesuai ukuran jendela
 glMatrixMode(GL_PROJECTION); //merubah matrix mode menjadi gl_projection
 glLoadIdentity(); //reset transformasi misalnya rotasi pada display
 gluPerspective(45.0, (double)w / (double)h, 1.0, 200.0); //setting proyeksi perspektif
glTranslatef(0.0, -20.0, -110.0); //tentukan posisi awal
//gluLookAt(0., 0., 0., 1., -1., 1., 0., 1., 0.); //camera
 glMatrixMode(GL_MODELVIEW); //merubah matrix mode menjadi gl_modelview
}
void keyboard(unsigned char key, int x, int y)
{
/* this is the keyboard event handler
 the x and y parameters are the mouse
 coordintes when the key was struck */
switch (key)
{
case 'a':
case 'A':
glTranslatef(1.0, 0.0, 0.0);
break;
case 'd':
case 'D':
glTranslatef(-1.0, 0.0, 0.0);
break;
case 'm':
case 'M':
glTranslatef(0.0, 1.0, 0.0);
break;
case 'n':
case 'N':
glTranslatef(0.0, -1.0, 0.0);
break;
case 'w':
case 'W':
glTranslatef(0.0, 0.0, 1.0);
break;
case 's':
case 'S':
glTranslatef(0.0, 0.0, -1.0);
break;
 case 'l':
case 'L':
 glRotatef(.5, 0.0, 1.0, 0.0); /* rotate left */
break;
case 'r':
case 'R':
glRotatef(-.5, 0.0, 1.0, 0.0); /* rotate right */
break;
 case 'u':
case 'U':
 glRotatef(1.0, 1.0, 0.0, 0.0); /* rotate up */
break;
case 'j':
case 'J':
glRotatef(-1.0, 1.0, 0.0, 0.0); /* rotate down */
break;
}
display(); //memanggil fungsi display atau bisa pakai glutPostRedisplay();
}
