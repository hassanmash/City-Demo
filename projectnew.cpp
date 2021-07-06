#include<stdlib.h>
//#include<Windows.h>
//#include<gl/GL.h>
#include<cstring>
#include<GL/glut.h>
#include<math.h>
#define PI 3.1416

GLint i, x1 = 0;
int rFlag=0;
void bitmap_output(double x, double y, const char  *string, void *font)
{
	int len, i;
	glRasterPos2f(x, y);
	len = (double)strlen(string);
	for (i = 0; i < len; i++)
	{
		glutBitmapCharacter(font, string[i]);
	}

}
void display1(void);
void display2(void);
void display3(void);
void spindisplay1();
void spindisplay2();
void spindisplay3();

//frame 0
void display0(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 0.0, 0.0);
	bitmap_output(-21, 40, "PA College of Engineering", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(-21, 30, "COMPUTER SCIENCE AND ENGINEERING DEPARTMENT", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(-21, 20, "COMPUTER GRAPHICS AND VISUALIZATION PROJECT", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(-15, 0, "City Demo", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(-15, -20, "Project By", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(-15, -25, "Hassan Mashmoom - 4PA18CS027", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(-15, -30, "Sheikh Ziad Ahmed - 4PA18CS102", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(-12, 5, "Press ESC to exit", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(-12, 10, "Press spacebar to start", GLUT_BITMAP_HELVETICA_18);

	glFlush();
}

//frame END
void display4(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 0.0, 0.0);
	bitmap_output(-17, 10, "THANK YOU!!!", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(-17, -13, "City Demo", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(-15, -20, "Project By", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(-15, -25, "Hassan Mashmoom - 4PA18CS027", GLUT_BITMAP_HELVETICA_18);
	bitmap_output(-15, -30, "Sheikh Ziad Ahmed - 4PA18CS102", GLUT_BITMAP_HELVETICA_18);

	glFlush();
}

//circle
void circle(GLdouble rad)
{
	GLint points = 50;
	GLdouble delTheta = (2.0 * PI) / (GLdouble)points;
	GLdouble theta = 0.0;

	glBegin(GL_POLYGON);
	{
		for (i = 0; i <= 50; i++, theta += delTheta)
		{
			glVertex2f(rad * cos(theta), rad * sin(theta));
		}
	}
	glEnd();
}

GLfloat cx1 = 0;
GLfloat cx2 = -45;
GLfloat cx3 = -45;
GLfloat cx4 = -45;
GLfloat cx5 = -45;

GLfloat cx11 = 0;
GLfloat cx12 = -5;
GLfloat cx13 = -45;
GLfloat cx14 = -45;
GLfloat cx15 = -45;

GLfloat cx21 = 0;
GLfloat cx22 = -5;
GLfloat cx23 = -45;
GLfloat cx24 = -45;
GLfloat cx25 = -45;

//Elements of frame 1
void cloudB(){
	//left
	glPushMatrix();
	glTranslatef(4, 5.5, 0);
	circle(4);
	glPopMatrix();

	//right
	glPushMatrix();
	glTranslatef(-8, 5.5, 0);
	circle(3.5);
	glPopMatrix();

	//top left
	glPushMatrix();
	glTranslatef(-3.5, 9, 0);
	circle(3.5);
	glPopMatrix();

	//top right
	glPushMatrix();
	glTranslatef(1, 9, 0);
	circle(3);
	glPopMatrix();

	//middle
	glPushMatrix();
	//glColor3f (1, 1 ,1);
	glTranslatef(-1.5, 5.5, 0);
	circle(4);
	glPopMatrix();
}
void a(){      //mini Cloud
	//left
	glPushMatrix();
	glTranslatef(4, 5.5, 0);
	circle(4);
	glPopMatrix();

	//right
	glPushMatrix();
	glTranslatef(-8, 5.5, 0);
	circle(3.5);
	glPopMatrix();

	//top left
	glPushMatrix();
	glTranslatef(-3.5, 9, 0);
	circle(3.5);
	glPopMatrix();

	//top right
	glPushMatrix();
	glTranslatef(1, 9, 0);
	circle(3);
	glPopMatrix();

	//middle
	glPushMatrix();
	glTranslatef(-1.5, 5.5, 0);
	circle(4);
	glPopMatrix();
}
void c() {                                       //One Single Cloud
	glPushMatrix();
	glColor3f(1, 1, 1);
	glTranslatef(35, 10, 0);
	a();
	glPopMatrix();

	glPushMatrix();
	glColor3f(1, 1, 1);
	glTranslatef(28, 16, 0);
	a();
	glPopMatrix();

	glPushMatrix();
	glColor3f(1, 1, 1);
	glTranslatef(20, 10, 0);
	a();
	glPopMatrix();
}

void cloud(){                                     // Three Cloud in first frame
	glPushMatrix();
	glTranslatef(-15.0, 30.0, 0.0);
	glScalef(0.7, 0.7, 0.0);
	c();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(20.0, 25.0, 0.0);
	glScalef(0.7, 0.7, 0.0);
	c();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-60.0, 25.0, 0.0);
	glScalef(0.7, 0.7, 0.0);
	c();
	glPopMatrix();
}
void draw_tree(){
	//1st tree
	glColor3f(0.1f, 0.0f, 0.0f); // Base of tree
	glBegin(GL_POLYGON);
	glVertex2f(-25.0, -10.0);
	glVertex2f(-20.0, -10.0);
	glVertex2f(-20.0, 10.0);
	glVertex2f(-25.0, 10.0);
	glEnd();

	glColor3f(0.0f, 0.5f, 0.0f); //Leaf1
	glBegin(GL_POLYGON);
	glVertex2f(-12.5, 10.0);
	glVertex2f(-17.5, 15.0);
	glVertex2f(-27.5, 15.0);
	glVertex2f(-32.5, 10.0);
	glEnd();

	glColor3f(0.0f, 0.5f, 0.0f); //Leaf 2
	glBegin(GL_POLYGON);
	glVertex2f(-15.0, 15.0);
	glVertex2f(-20.0, 20.0);
	glVertex2f(-25.0, 20.0);
	glVertex2f(-30.0, 15.0);
	glEnd();

	glColor3f(0.0f, 0.5f, 0.0f); //Leaf 3
	glBegin(GL_POLYGON);
	glVertex2f(-17.5, 20.0);
	glVertex2f(-22.5, 25.0);
	glVertex2f(-27.5, 20.0);
	glEnd();
	
	//2nd tree
	glColor3f(0.1f, 0.0f, 0.0f); //Branch
	glBegin(GL_POLYGON);
	glVertex2f(25.0, -10.0);
	glVertex2f(20.0, -10.0);
	glVertex2f(20.0, 10.0);
	glVertex2f(25.0, 10.0);
	glEnd();

	glColor3f(0.0f, 0.5f, 0.0f); //leaf base 1
	glBegin(GL_POLYGON);
	glVertex2f(12.5, 10.0);
	glVertex2f(17.5, 15.0);
	glVertex2f(27.5, 15.0);
	glVertex2f(32.5, 10.0);
	glEnd();

	glColor3f(0.0f, 0.5f, 0.0f); //leaf base 2
	glBegin(GL_POLYGON);
	glVertex2f(15.0, 15.0);
	glVertex2f(20.0, 20.0);
	glVertex2f(25.0, 20.0);
	glVertex2f(30.0, 15.0);
	glEnd();

	glColor3f(0.0f, 0.5f, 0.0f); //leaf base 3
	glBegin(GL_POLYGON);
	glVertex2f(17.5, 20.0);
	glVertex2f(22.5, 25.0);
	glVertex2f(27.5, 20.0);
	glEnd();
}
void road(float b){
	glBegin(GL_POLYGON);			//garden
	glColor3f(0.0, 1.0, b);
	glVertex3f(-50, -50, 0);
	glVertex3f(50, -50, 0);
	glVertex3f(50, -30, 0);
	glVertex3f(-50, -30, 0);
	glEnd();

	glBegin(GL_POLYGON);			//road lower
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-50, -30, 0);
	glVertex3f(50, -30, 0);
	glVertex3f(50, -20, 0);
	glVertex3f(-50, -20, 0);
	glEnd();

	glBegin(GL_POLYGON);			//road center
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-50, -18, 0);
	glVertex3f(50, -18, 0);
	glVertex3f(50, -20, 0);
	glVertex3f(-50, -20, 0);
	glEnd();

	glBegin(GL_POLYGON);			//road upper
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-50, -18, 0);
	glVertex3f(50, -18, 0);
	glVertex3f(50, -7, 0);
	glVertex3f(-50, -7, 0);
	glEnd();
}
void tution(float r,float g,float b){
	glBegin(GL_POLYGON);			//office
	glColor3f(0.1, 0.1, 0.6);
	glVertex3f(-43, -7, 0);
	glVertex3f(-28, -7, 0);
	glVertex3f(-28, 15, 0);
	glVertex3f(-43, 15, 0);
	glEnd();

	glBegin(GL_POLYGON);			//office hut
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-41, 23, 0);
	glVertex3f(-30, 23, 0);
	glVertex3f(-28, 15, 0);
	glVertex3f(-43, 15, 0);
	glEnd();

	glBegin(GL_POLYGON);			//office door
	glColor3f(r, g, b);
	glVertex3f(-38, 6, 0);
	glVertex3f(-35, 6, 0);
	glVertex3f(-35, -7, 0);
	glVertex3f(-38, -7, 0);
	glEnd();

	glBegin(GL_POLYGON);			//office window
	glColor3f(r, g, b);
	glVertex3f(-33, 6, 0);
	glVertex3f(-29, 6, 0);
	glVertex3f(-29, 10, 0);
	glVertex3f(-33, 10, 0);
	glEnd();

	glBegin(GL_LINES);			//office window rod
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-33, 8, 0);
	glVertex3f(-29, 8, 0);
	glEnd();

	glBegin(GL_LINES);			//office window rod
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-31, 6, 0);
	glVertex3f(-31, 10, 0);
	glEnd();

	glBegin(GL_POLYGON);			//alpha residency
	glColor3f(1.0, 0.6, 1.0);
	glVertex3f(-15, -7, 0);
	glVertex3f(15, -7, 0);
	glVertex3f(15, 30, 0);
	glVertex3f(-15, 30, 0);
	glEnd();


	glBegin(GL_POLYGON);			//alpha residency top
	glColor3f(0.6, 1.5, 1.0);
	glVertex3f(-13, 42, 0);
	glVertex3f(13, 42, 0);
	glVertex3f(15, 30, 0);
	glVertex3f(-15, 30, 0);
	glEnd();

	glBegin(GL_POLYGON);			//alpha residency door
	glColor3f(r, g, b);
	glVertex3f(-5, -7, 0);
	glVertex3f(5, -7, 0);
	glVertex3f(5, 15, 0);
	glVertex3f(-5, 15, 0);
	glEnd();
/*
	glBegin(GL_LINES);			//partition line
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(15, 15, 0);
	glVertex3f(-15, 15, 0);
	glEnd();*/

	glBegin(GL_POLYGON);			//alpha residency window left bottom
	glColor3f(r, g, b);
	glVertex3f(-14, 0, 0);
	glVertex3f(-6, 0, 0);
	glVertex3f(-6, 8, 0);
	glVertex3f(-14, 8, 0);
	glEnd();

	glBegin(GL_POLYGON);			//alpha residency window left top
	glColor3f(r, g, b);
	glVertex3f(-14, 16, 0);
	glVertex3f(-6, 16, 0);
	glVertex3f(-6, 24, 0);
	glVertex3f(-14, 24, 0);
	glEnd();
	glBegin(GL_POLYGON);			//alpha residency middle window
	glColor3f(r, g, b);
	glVertex3f(-5, 16, 0);
	glVertex3f(5, 16, 0);
	glVertex3f(5, 24, 0);
	glVertex3f(-5, 24, 0);
	glEnd();

	glBegin(GL_POLYGON);			//alpha residency window right bottom
	glColor3f(r, g, b);
	glVertex3f(6, 0, 0);
	glVertex3f(14, 0, 0);
	glVertex3f(14, 8, 0);
	glVertex3f(6, 8, 0);
	glEnd();

	glBegin(GL_POLYGON);			//alpha residency window right top
	glColor3f(r, g, b);
	glVertex3f(6, 24, 0);
	glVertex3f(14, 24, 0);
	glVertex3f(14, 16, 0);
	glVertex3f(6, 16, 0);
	glEnd();

	glBegin(GL_POLYGON);			//home
	glColor3f(1.0, 0.0, 0.0);
	glVertex3f(28, -7, 0);
	glVertex3f(28, 30, 0);
	glVertex3f(38, 30, 0);
	glVertex3f(38, 10, 0);
	glVertex3f(48, 10, 0);
	glVertex3f(48, -7, 0);
	glEnd();

	glBegin(GL_POLYGON);			//home top
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(33, 40, 0);
	glVertex3f(28, 30, 0);
	glVertex3f(38, 30, 0);
	glEnd();

	glBegin(GL_POLYGON);			//home door
	glColor3f(r, g, b);
	glVertex3f(31, -7, 0);
	glVertex3f(31, 7, 0);
	glVertex3f(35, 7, 0);
	glVertex3f(35, -7, 0);
	glEnd();

	glBegin(GL_POLYGON);			//home door top
	glColor3f(r, g, b);
	glVertex3f(31, 10, 0);
	glVertex3f(31, 20, 0);
	glVertex3f(35, 20, 0);
	glVertex3f(35, 10, 0);
	glEnd();

	glBegin(GL_POLYGON);			//home side window
	glColor3f(r, g, b);
	glVertex3f(41, -2, 0);
	glVertex3f(41, 5, 0);
	glVertex3f(45, 5, 0);
	glVertex3f(45, -2, 0);
	glEnd();

    if(r == 1.0 && g == 1.0 && b == 0.0){
        glBegin(GL_LINES);			//stars
	    glColor3f(1.0, 1.0, 1.0);
	    glVertex3f(-40.5, 30, 0);
	    glVertex3f(-41, 30, 0);
	    glEnd();

	    glBegin(GL_LINES);			//stars
	    glColor3f(1.0, 1.0, 1.0);
	    glVertex3f(-40.5, 40, 0);
	    glVertex3f(-41, 40, 0);
	    glEnd();

	    glBegin(GL_LINES);			//stars
	    glColor3f(1.0, 1.0, 1.0);
	    glVertex3f(-30.5, 45, 0);
	    glVertex3f(-31, 45, 0);
	    glEnd();
    }
    if(r == 0.4 && g == 0.4 && b == 0.4){
        glBegin(GL_LINES);			//stars
	    glColor3f(1.0, 1.0, 1.0);
	    glVertex3f(-40.5, 30, 0);
	    glVertex3f(-41, 30, 0);
	    glEnd();
    
	    glBegin(GL_LINES);			//stars
	    glColor3f(1.0, 1.0, 1.0);
	    glVertex3f(-40.5, 40, 0);
	    glVertex3f(-41, 40, 0);
	    glEnd();
    
	    glBegin(GL_LINES);			//stars
	    glColor3f(1.0, 1.0, 1.0);
	    glVertex3f(-30.5, 45, 0);
	    glVertex3f(-31, 45, 0);
	    glEnd();
    }
}


void car(float r,float g, float b)
{
	glBegin(GL_POLYGON);			//car body
	glColor3f(r, g, b);
	glVertex3f(-45, -20, 0);
	glVertex3f(-45, -12, 0);
	glVertex3f(-42, -12, 0);
	glVertex3f(-40, -5, 0);
	glVertex3f(-35, -5, 0);
	glVertex3f(-32, -12, 0);
	glVertex3f(-30, -12, 0);
	glVertex3f(-30, -20, 0);
	glEnd();

	glBegin(GL_POLYGON);			//car window
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-40, -6, 0);
	glVertex3f(-35, -6, 0);
	glVertex3f(-35, -11, 0);
	glVertex3f(-40, -11, 0);
	glEnd();

	glBegin(GL_POLYGON);			//black line
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-37.5, -6, 0);
	glVertex3f(-37, -6, 0);
	glVertex3f(-37, -11, 0);
	glVertex3f(-37.5, -11, 0);
	glEnd();

	glBegin(GL_POLYGON);			//car bottom red
	glColor3f(1.0, 0.0, 0.0);
	glVertex3f(-44, -19, 0);
	glVertex3f(-44, -13, 0);
	glVertex3f(-31, -13, 0);
	glVertex3f(-31, -19, 0);
	glEnd();

    glPushMatrix();                 //car tire 1
	glTranslatef(-41, -22.0, 0.0);
	glScalef(1.0, 1.5, 0.0);
	glColor3f(1.0, 1.0, 1.0);
	circle(2);
	glPopMatrix();

    glPushMatrix();                 //car tire 2
	glTranslatef(-33, -22.0, 0.0);
	glScalef(1.0, 1.5, 0.0);
	glColor3f(1.0, 1.0, 1.0);
	circle(2);
	glPopMatrix();
}

//Elements of frame2
void cloudB2(){
	//left
	glPushMatrix();
	glTranslatef(4, 5.5, 0);
	circle(4);
	glPopMatrix();
	//right
	glPushMatrix();
	glTranslatef(-8, 5.5, 0);
	circle(3.5);
	glPopMatrix();
	//top left
	glPushMatrix();
	glTranslatef(-3.5, 9, 0);
	circle(3.5);
	glPopMatrix();
	//top right
	glPushMatrix();
	glTranslatef(1, 9, 0);
	circle(3);
	glPopMatrix();
	//middle
	glPushMatrix();
	//glColor3f (1, 1 ,1);
	glTranslatef(-1.5, 5.5, 0);
	circle(4);
	glPopMatrix();
}
void a2(){                                        //mini Cloud
	//left
	glPushMatrix();
	glTranslatef(4, 5.5, 0);
	circle(4);
	glPopMatrix();
	//right
	glPushMatrix();
	glTranslatef(-8, 5.5, 0);
	circle(3.5);
	glPopMatrix();
	//top left
	glPushMatrix();
	glTranslatef(-3.5, 9, 0);
	circle(3.5);
	glPopMatrix();
	//top right
	glPushMatrix();
	glTranslatef(1, 9, 0);
	circle(3);
	glPopMatrix();
	//middle
	glPushMatrix();
	glTranslatef(-1.5, 5.5, 0);
	circle(4);
	glPopMatrix();
}
void c2()                                        //One Single Cloud
{
	glPushMatrix();
	glColor3f(1, 1, 1);
	glTranslatef(35, 10, 0);
	a2();
	glPopMatrix();

	glPushMatrix();
	glColor3f(1, 1, 1);
	glTranslatef(28, 16, 0);
	a2();
	glPopMatrix();

	glPushMatrix();
	glColor3f(1, 1, 1);
	glTranslatef(20, 10, 0);
	a2();
	glPopMatrix();
}
void cloud2(){                                     // Three Cloud
	glPushMatrix();
	glTranslatef(-15.0, 30.0, 0.0);
	glScalef(0.7, 0.7, 0.0);
	c2();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(20.0, 25.0, 0.0);
	glScalef(0.7, 0.7, 0.0);
	c2();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-60.0, 25.0, 0.0);
	glScalef(0.7, 0.7, 0.0);
	c2();
	glPopMatrix();
}

//Display 3
void spindisplay3()
{
	cx21 += 0.01;
	cx22 += 0.01;
	cx23 += 0.01;
	cx24 += 0.01;
	cx25 += 0.005;

	// if (cx21 > 10)
	// {
	// 	glClearColor(0, 0.749, 1, 0);
	// 	glutDisplayFunc(display4);
	// 	//glutIdleFunc(spindisplay4);
	// }
    if (rFlag==2)
	{
		glClearColor(0, 0.5, 0.5, 0);
		glutDisplayFunc(display2);
		glutIdleFunc(spindisplay2);
	}
    if (rFlag==1)
	{
		glClearColor(0, 0.5, 0.5, 0);
		glutDisplayFunc(display1);
		glutIdleFunc(spindisplay1);
	}
    if (rFlag==3)
	{
		glClearColor(0, 0.5, 0.5, 0);
		glutDisplayFunc(display3);
		glutIdleFunc(spindisplay3);
	}
    if (rFlag==4)
	{
		glClearColor(0, 0.749, 1, 0);
		glutDisplayFunc(display4);
		// glutIdleFunc(spindisplay3);
	}
	glutPostRedisplay();

}

void display3(void)
{

	glClear(GL_COLOR_BUFFER_BIT);
	//bitmap_output(0,0, "TUTION CLASSES", GLUT_BITMAP_TIMES_ROMAN_24);

	//MOON
	glPushMatrix();
	//glTranslatef(0.0, 0.0, 0.0);
	glTranslatef(cx25, 40.0, 0.0);
	glScalef(1.0, 1.5, 0.0);
	glColor3f(1.0, 1.0, 1.0);
	circle(3);
	glPopMatrix();

	//Cloud1
	glPushMatrix();
	glColor3f(0.2, 0.2, 0.1);
	glTranslatef(cx21, 17.0, 0.0);
	cloudB();
	glPopMatrix();

	//Cloud2
	glPushMatrix();
	glColor3f(0.2, 0.2, 0.2);
	glTranslatef(cx22, 20.0, 0.0);
	cloudB();
	glPopMatrix();
	
	draw_tree();
	float b = 0.5;
	road(b);
	
	float r = 0.4;
	float g = 0.4;
	b = 0.4;
	glPushMatrix();
	//glTranslatef(10,10,0);
	glTranslatef(x1, 0, 0);
	tution(r,g,b);
	glPopMatrix();

    r = 0.0;
    g = 1.0;
    b = 1.0;
	glPushMatrix();
	glTranslatef(cx21, -5, 0);
	car(r,g,b);
	glPopMatrix();

	bitmap_output(-36, 12, "OFFICE", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(-4, 25, "Alpha Recidency", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(30, 24, "HOME", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(-42, -39, "NIGHT TIME, WHEN THE POWER GOES OFF.", GLUT_BITMAP_TIMES_ROMAN_24);
	glFlush();
}

//Display 2
void spindisplay2()
{
	cx11 += 0.01;
	cx12 += 0.01;
	cx13 += 0.01;
	cx14 += 0.01;
	cx15 += 0.005;

	// if (cx11 > 10)
	// {
	// 	glClearColor(0, 0.5, 0.5, 0);
	// 	glutDisplayFunc(display3);
	// 	glutIdleFunc(spindisplay3);
	// }
    if (rFlag==2)
	{
		glClearColor(0, 0.5, 0.5, 0);
		glutDisplayFunc(display2);
		glutIdleFunc(spindisplay2);
	}
    if (rFlag==1)
	{
		glClearColor(0, 0.5, 0.5, 0);
		glutDisplayFunc(display1);
		glutIdleFunc(spindisplay1);
	}
    if (rFlag==3)
	{
		glClearColor(0, 0.5, 0.5, 0);
		glutDisplayFunc(display3);
		glutIdleFunc(spindisplay3);
	}
    if (rFlag==4)
	{
		glClearColor(0, 0.749, 1, 0);
		glutDisplayFunc(display4);
		// glutIdleFunc(spindisplay3);
	}
	glutPostRedisplay();

}

void display2(void)
{

	glClear(GL_COLOR_BUFFER_BIT);
	//bitmap_output(0,0, "TUTION CLASSES", GLUT_BITMAP_TIMES_ROMAN_24);

	//MOON
	glPushMatrix();
	//glTranslatef(0.0, 0.0, 0.0);
	glTranslatef(cx15, 40.0, 0.0);
	glScalef(1.0, 1.5, 0.0);
	glColor3f(1.0, 1.0, 1.0);
	circle(3);
	glPopMatrix();

	//Cloud1
	glPushMatrix();
	glColor3f(0.2, 0.2, 0.2);
	glTranslatef(cx11, 17.0, 0.0);
	cloudB2();
	glPopMatrix();

	//Cloud2
	glPushMatrix();
	glColor3f(0.2, 0.2, 0.2);
	glTranslatef(cx12, 15.0, 0.0);
	cloudB2();
	glPopMatrix();

	draw_tree();
	float b = 0.5;
	road(b);
	
	float r = 1.0; float g = 1.0; 
	b = 0.0;
	glPushMatrix();
	//glTranslatef(10,10,0);
	glTranslatef(x1, 0, 0);
	tution(r,g,b);
	glPopMatrix();

    r = 1.0;
    g = 1.0;
    b = 0.0;
	glPushMatrix();
	glTranslatef(cx11, -5, 0);
	car(r,g,b);
	glPopMatrix();

	bitmap_output(-36, 12, "OFFICE", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(-4, 25, "Alpha Recidency", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(30, 24, "HOME", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(-42, -39, "Night time when the power is ON", GLUT_BITMAP_TIMES_ROMAN_24);
	glFlush();
}

//Display 1

void spindisplay1()
{
	cx1 += 0.01;
	cx2 += 0.01;
	cx3 += 0.01;
	cx4 += 0.01;
	cx5 += 0.005;

	if (rFlag==2)
	{
		glClearColor(0, 0.5, 0.5, 0);
		glutDisplayFunc(display2);
		glutIdleFunc(spindisplay2);
	}
    if (rFlag==1)
	{
		glClearColor(0, 0.5, 0.5, 0);
		glutDisplayFunc(display1);
		glutIdleFunc(spindisplay1);
	}
    if (rFlag==3)
	{
		glClearColor(0, 0.5, 0.5, 0);
		glutDisplayFunc(display3);
		glutIdleFunc(spindisplay3);
	}
    if (rFlag==4)
	{
		glClearColor(0, 0.749, 1, 0);
		glutDisplayFunc(display4);
		// glutIdleFunc(spindisplay3);
	}
	glutPostRedisplay();
}

void display1(void)
{

	glClear(GL_COLOR_BUFFER_BIT);
	//bitmap_output(0,0, "TUTION CLASSES", GLUT_BITMAP_TIMES_ROMAN_24);

	//SUN
	glPushMatrix();
	//glTranslatef(0.0, 0.0, 0.0);
	glTranslatef(cx5, 40.0, 0.0);
	glScalef(1.0, 1.5, 0.0);
	glColor3f(1.0, 1.0, 0.0);
	circle(3);
	glPopMatrix();

	//Cloud1
	glPushMatrix();
	glColor3f(1, 1, 1);
	glTranslatef(cx1, 17.0, 0.0);
	cloudB();
	glPopMatrix();

	//Cloud2
	glPushMatrix();
	glColor3f(1, 1, 1);
	glTranslatef(cx2, 20.0, 0.0);
	cloudB();
	glPopMatrix();

	//Cloud3
	glPushMatrix();
	glTranslatef(cx3, 0.0, 0.0);
	glScalef(0.8, 1, 0);
	cloud();
	glPopMatrix();
	
	draw_tree();
	float b = 0.0;
	road(b);
	
	float r = 1.0;
	float g = 1.0;
	b = 1.0;
	glPushMatrix();
	//glTranslatef(10,10,0);
	glTranslatef(x1, 0, 0);
	tution(r,g,b);
	glPopMatrix();

    r = 1.0;
    g = 0.0;
    b = 1.0;
	glPushMatrix();
	glTranslatef(cx1, -5, 0);
	car(r,g,b);
	glPopMatrix();

	bitmap_output(-36, 12, "OFFICE", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(-4, 25, "Alpha Recidency", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(30, 24, "HOME", GLUT_BITMAP_TIMES_ROMAN_24);
	bitmap_output(-47, -39, "Normal Days Goes Like this....", GLUT_BITMAP_TIMES_ROMAN_24);
	glFlush();
}

//init function
void init(void)
{
	glClearColor(0, 0.749, 1, 0);
	glOrtho(-50.0, 50.0, -50.0, 50.0, -1.0, 1.0);
	//glClearColor(0.5, 0.749, 0.5, 0);
}


void processNormalKeys(unsigned char key, int x, int y)
{
	if (key == 27)
		exit(0);
	else if (key = 32)
	{
		glutDisplayFunc(display1);
		glutIdleFunc(spindisplay1);
	}

}
void modMenu (int option) {
	if(option==1)
		rFlag=1;
	if(option==2)
		rFlag=2;
	if(option==3)
		rFlag=3;
    if(option==4)
        rFlag=4;
}
//main function
int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowSize(1366, 768);
	glutCreateWindow("Frame1");
	init();
	//glutDisplayFunc(display1);
	//glutIdleFunc(spinDisplay);
	//glClearColor(1.0, 1.0, 1.0, 1.0);
	glColor3f(1, 0, 0);
	glLineWidth(5.0);
	//glutDisplayFunc(display4);
	glutDisplayFunc(display0);
	glutKeyboardFunc(processNormalKeys);
    glutCreateMenu(modMenu);
	glutAddMenuEntry("Day Mode",1);
	glutAddMenuEntry("Night Mode when power available",2);
	glutAddMenuEntry("Night Mode when power not available",3);
    glutAddMenuEntry("Thank You menu",4);
	glutAttachMenu(GLUT_RIGHT_BUTTON);
	//glutReshapeFunc(reshape);
	glutMainLoop();
}

