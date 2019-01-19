#include<windows.h>
#include <GL/glut.h>
#include<bits/stdc++.h>
#include <stdlib.h>

using namespace std;

float angle=0.0;
float lx=0.0f,lz=-1.0f;
float X=-0.1f,Y=-0.1f,Z=-0.1f;
float x=0.0f,z=5.0f;

float tableStandWidth = 0.2f;

float trX=0,trY=0,trZ=0;

void drawWalls(){
    //wall start
    //glColor3d(1,0.4f,0.3f);
    glColor3d(0.1,0.1,0.5);
	glPushMatrix();
        glTranslated(0,0,0);
        glScaled(5,0.2,5);
        glutSolidCube(1);
    glPopMatrix();

//    glColor3d(0.1,0.1,0.5);
//	glPushMatrix();
//        glTranslated(0,5.1,0);
//        glScaled(4.9999,0.2,4.9999);
//        glutSolidCube(1);
//    glPopMatrix();

    glColor3d(1,0,0);
    glPushMatrix();
        glTranslated(-2.4,2.6,0);
        glScaled(0.2,4.9999,4.9999);
        glutSolidCube(1);
    glPopMatrix();

    glColor3d(0.1f,0.6f,0.3f);
    glPushMatrix();
        glTranslated(0,2.6,-2.4);
        glScaled(4.9999,5,0.2);
        glutSolidCube(1);
    glPopMatrix();

    glColor3d(1,0,0);
    glPushMatrix();
        glTranslated(2.4,2.6,0);
        glScaled(0.2,4.9999,4.9999);
        glutSolidCube(1);
    glPopMatrix();

}

void drawTable(){
    // Table start
    glColor3d(1,1,1);
	glPushMatrix();
        glTranslated(0,1.5,0);
        glScaled(2.5,0.05,2);
        glutSolidCube(1);
    glPopMatrix();

    glColor3d(1,1,1);
	glPushMatrix();
        glTranslated(0,1.3,0);
        glScaled(2,0.35,1.6);
        glutSolidCube(1);
    glPopMatrix();

    //Table Stands
    glColor3d(1,1,1);
	glPushMatrix();
        glTranslated(-1,0.75,-0.8);
        glScaled(tableStandWidth,1.55,tableStandWidth);
        glutSolidCube(1);
    glPopMatrix();

    glColor3d(1,1,1);
	glPushMatrix();
        glTranslated(1,0.75,-0.8);
        glScaled(tableStandWidth,1.55,tableStandWidth);
        glutSolidCube(1);
    glPopMatrix();

    glColor3d(1,1,1);
	glPushMatrix();
        glTranslated(-1,0.75,0.8);
        glScaled(tableStandWidth,1.55,tableStandWidth);
        glutSolidCube(1);
    glPopMatrix();

    glColor3d(1,1,1);
	glPushMatrix();
        glTranslated(1,0.75,0.8);
        glScaled(tableStandWidth,1.55,tableStandWidth);
        glutSolidCube(1);
    glPopMatrix();
}

void drawShohidMinar(){
    glColor3d(0.4,0.2,0.2);
	glPushMatrix();
        glTranslated(0,1.55,0);
        glScaled(2,0.05,1.5);
        glutSolidCube(1);
    glPopMatrix();

    glColor3d(0.4,0.2,0.2);
	glPushMatrix();
        glTranslated(0,1.6,0);
        glScaled(1.9,0.05,1.4);
        glutSolidCube(1);
    glPopMatrix();

    //glColor3d(0.4,0.2,0.2);
    //glColor3d(1,0.8,0.7);
    glColor3d(0.4,0.2,0.2);
	glPushMatrix();
        glTranslated(0,1.65,0);
        glScaled(1.8,0.05,1.3);
        glutSolidCube(1);
    glPopMatrix();

    /// pataton

    glColor3d(1,1,1);
	glPushMatrix();
        glTranslated(0,1.68,-0.4);
        glScaled(0.5,0.02,0.08);
        glutSolidCube(1);
    glPopMatrix();

    /// Piller

	glPushMatrix();
        glTranslated(0,1.99,-0.4);
        glScaled(0.06,0.7,0.04);
        glutSolidCube(1);
    glPopMatrix();

    /// ROD

    glColor3d(0,0,0);

    glPushMatrix();
        glTranslated(0.07,1.99,-0.4);
        glScaled(0.003,0.7,0.003);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(0.11,1.99,-0.4);
        glScaled(0.003,0.7,0.003);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(0.15,1.99,-0.4);
        glScaled(0.003,0.7,0.003);
        glutSolidCube(1);
    glPopMatrix();

    ///
    glPushMatrix();
    glTranslated(-0.22,0,0);
        glPushMatrix();
            glTranslated(0.07,1.99,-0.4);
            glScaled(0.003,0.7,0.003);
            glutSolidCube(1);
        glPopMatrix();

        glPushMatrix();
            glTranslated(0.11,1.99,-0.4);
            glScaled(0.003,0.7,0.003);
            glutSolidCube(1);
        glPopMatrix();

        glPushMatrix();
            glTranslated(0.15,1.99,-0.4);
            glScaled(0.003,0.7,0.003);
            glutSolidCube(1);
        glPopMatrix();
    glPopMatrix();

    ///Horizontal rod
        glPushMatrix();
            glTranslated(2.2,0,-0.1);
            glScaled(4.2,1,1);
                glColor3d(0,0,0);
                glPushMatrix();
                    glTranslated(-0.528,1.85,-0.3);
                    glScaled(0.1,0.003,0.003);
                    glutSolidCube(1);
                glPopMatrix();

                glPushMatrix();
                    glTranslated(-0.528,2.02,-0.3);
                    glScaled(0.1,0.003,0.003);
                    glutSolidCube(1);
                glPopMatrix();

                glPushMatrix();
                    glTranslated(-0.528,2.18,-0.3);
                    glScaled(0.1,0.003,0.003);
                    glutSolidCube(1);
                glPopMatrix();
                glColor3d(1,1,1);
            glPopMatrix();

    /// ROD END

    glColor3d(1,1,1);
    glPushMatrix();
        glTranslated(-0.22,1.99,-0.4);
        glScaled(0.06,0.7,0.04);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslated(0.22,1.99,-0.4);
        glScaled(0.06,0.7,0.04);
        glutSolidCube(1);
    glPopMatrix();

    /// Uporer piller

    glPushMatrix();
        glTranslated(0,0.743,-1.424);
        glRotated(45,1,0,0);

        //glColor3d(1,0,1);
        glPushMatrix();
            glTranslated(0,1.99,-0.4);
            glScaled(0.06,0.3,0.04);
            glutSolidCube(1);
        glPopMatrix();
        //glColor3d(1,1,1);

        glPushMatrix();
            glTranslated(-0.22,1.99,-0.4);
            glScaled(0.06,0.3,0.04);
            glutSolidCube(1);
        glPopMatrix();

        glPushMatrix();
            glTranslated(0.22,1.99,-0.4);
            glScaled(0.06,0.3,0.04);
            glutSolidCube(1);
        glPopMatrix();

        glPushMatrix();
            glTranslated(0,2.15,-0.4);
            glScaled(0.5,0.04,0.04);
            glutSolidCube(1);
        glPopMatrix();

        /// ROD

        glColor3d(0,0,0);

        glPushMatrix();
            glTranslated(0.07,1.99,-0.4);
            glScaled(0.003,0.277,0.003);
            glutSolidCube(1);
        glPopMatrix();

        glPushMatrix();
            glTranslated(0.11,1.99,-0.4);
            glScaled(0.003,0.277,0.003);
            glutSolidCube(1);
        glPopMatrix();

        glPushMatrix();
            glTranslated(0.15,1.99,-0.4);
            glScaled(0.003,0.277,0.003);
            glutSolidCube(1);
        glPopMatrix();

        ///

        glColor3d(0,0,0);
        glPushMatrix();
        glTranslated(-0.22,0,0);
            glPushMatrix();
                glTranslated(0.07,1.99,-0.4);
                glScaled(0.003,0.277,0.003);
                glutSolidCube(1);
            glPopMatrix();

            glPushMatrix();
                glTranslated(0.11,1.99,-0.4);
                glScaled(0.003,0.277,0.003);
                glutSolidCube(1);
            glPopMatrix();

            glPushMatrix();
                glTranslated(0.15,1.99,-0.4);
                glScaled(0.003,0.277,0.003);
                glutSolidCube(1);
            glPopMatrix();
        glPopMatrix();
        /// ROD END

        ///Horizontal rod
        glPushMatrix();
            glTranslated(2.2,0,-0.1);
            glScaled(4.2,1,1);
                glColor3d(0,0,0);
                glPushMatrix();
                    glTranslated(-0.528,1.85,-0.3);
                    glScaled(0.1,0.003,0.003);
                    glutSolidCube(1);
                glPopMatrix();

                glPushMatrix();
                    glTranslated(-0.528,2,-0.3);
                    glScaled(0.1,0.003,0.003);
                    glutSolidCube(1);
                glPopMatrix();

                glPushMatrix();
                    glTranslated(-0.528,2.15,-0.3);
                    glScaled(0.1,0.003,0.003);
                    glutSolidCube(1);
                glPopMatrix();
                glColor3d(1,1,1);
        glPopMatrix();

    glPopMatrix();


    /// pasher piller left 1
    glColor3d(1,1,1);
    glPushMatrix();
        glTranslated(0.1,0,-0.4);
        glRotated(45,0,1,0);

        glPushMatrix();
            glTranslated(-0.605,1.94,-0.3);
            glScaled(0.045,0.65,0.03);
            glutSolidCube(1);
        glPopMatrix();

        glPushMatrix();
            glTranslated(-0.45,1.94,-0.3);
            glScaled(0.045,0.65,0.03);
            glutSolidCube(1);
        glPopMatrix();

        glPushMatrix();
            glTranslated(-0.528,2.258,-0.3);
            glScaled(0.199,0.04,0.03);
            glutSolidCube(1);
        glPopMatrix();

        glPushMatrix();
            glTranslated(-0.528,1.68,-0.3);
            glScaled(0.199,0.02,0.06);
            glutSolidCube(1);
        glPopMatrix();

        /// ROD
        glColor3d(0,0,0);
        glPushMatrix();
            glTranslated(-0.64,-0.05,0.1);
            glScaled(1,1.02,1);
            glPushMatrix();
                glTranslated(0.078,1.99,-0.4);
                glScaled(0.003,0.56,0.003);
                glutSolidCube(1);
            glPopMatrix();

            glPushMatrix();
                glTranslated(0.11,1.99,-0.4);
                glScaled(0.003,0.56,0.003);
                glutSolidCube(1);
            glPopMatrix();

            glPushMatrix();
                glTranslated(0.145,1.99,-0.4);
                glScaled(0.003,0.56,0.003);
                glutSolidCube(1);
            glPopMatrix();
        glPopMatrix();

        ///
        glColor3d(1,1,1);

        ///Horizontal rod
            glColor3d(0,0,0);
            glPushMatrix();
                glTranslated(-0.528,1.85,-0.3);
                glScaled(0.1,0.003,0.003);
                glutSolidCube(1);
            glPopMatrix();

            glPushMatrix();
                glTranslated(-0.528,2,-0.3);
                glScaled(0.1,0.003,0.003);
                glutSolidCube(1);
            glPopMatrix();

            glPushMatrix();
                glTranslated(-0.528,2.15,-0.3);
                glScaled(0.1,0.003,0.003);
                glutSolidCube(1);
            glPopMatrix();
            glColor3d(1,1,1);
    glPopMatrix();

    /// pasher piller left 2
    glPushMatrix();
        glTranslated(0.65,0,0.3);
        glRotated(-45,0,1,0);

        glPushMatrix();
            glTranslated(-0.605,1.94,-0.3);
            glScaled(0.045,0.65,0.03);
            glutSolidCube(1);
        glPopMatrix();

        glPushMatrix();
            glTranslated(-0.45,1.94,-0.3);
            glScaled(0.045,0.65,0.03);
            glutSolidCube(1);
        glPopMatrix();

        glPushMatrix();
            glTranslated(-0.528,2.258,-0.3);
            glScaled(0.199,0.04,0.03);
            glutSolidCube(1);
        glPopMatrix();

        glPushMatrix();
            glTranslated(-0.528,1.68,-0.3);
            glScaled(0.199,0.02,0.06);
            glutSolidCube(1);
        glPopMatrix();

        ///ROD
        glColor3d(0,0,0);
        glPushMatrix();
        glTranslated(-0.64,-0.05,0.1);
            glScaled(1,1.02,1);
            glPushMatrix();
                glTranslated(0.078,1.99,-0.4);
                glScaled(0.003,0.56,0.003);
                glutSolidCube(1);
            glPopMatrix();

            glPushMatrix();
                glTranslated(0.11,1.99,-0.4);
                glScaled(0.003,0.56,0.003);
                glutSolidCube(1);
            glPopMatrix();

            glPushMatrix();
                glTranslated(0.145,1.99,-0.4);
                glScaled(0.003,0.56,0.003);
                glutSolidCube(1);
            glPopMatrix();
        glPopMatrix();
        glColor3d(1,1,1);
        ///ROD

        ///Horizontal rod
            glColor3d(0,0,0);
            glPushMatrix();
                glTranslated(-0.528,1.85,-0.3);
                glScaled(0.1,0.003,0.003);
                glutSolidCube(1);
            glPopMatrix();

            glPushMatrix();
                glTranslated(-0.528,2,-0.3);
                glScaled(0.1,0.003,0.003);
                glutSolidCube(1);
            glPopMatrix();

            glPushMatrix();
                glTranslated(-0.528,2.15,-0.3);
                glScaled(0.1,0.003,0.003);
                glutSolidCube(1);
            glPopMatrix();
            glColor3d(1,1,1);

    glPopMatrix();


    ///Choto pillers

    glPushMatrix();
        /// pasher piller left 1
        glTranslated(0.06,0,0.14);
        glPushMatrix();

            glTranslated(-0.2,0,-0.31);
            glRotated(45,0,1,0);

            glPushMatrix();
                glTranslated(-0.605,1.88,-0.3);
                glScaled(0.045,0.4,0.03);
                glutSolidCube(1);
            glPopMatrix();

            glPushMatrix();
                glTranslated(-0.45,1.88,-0.3);
                glScaled(0.045,0.4,0.03);
                glutSolidCube(1);
            glPopMatrix();

            glPushMatrix();
                glTranslated(-0.528,2.08,-0.3);
                glScaled(0.2,0.04,0.03);
                glutSolidCube(1);
            glPopMatrix();

            glPushMatrix();
                glTranslated(-0.528,1.68,-0.3);
                glScaled(0.199,0.02,0.06);
                glutSolidCube(1);
            glPopMatrix();

        ///ROD
        glColor3d(0,0,0);
        glPushMatrix();
        glTranslated(-0.641,0.43,0.1);
        glScaled(1,0.73,1);
            glPushMatrix();
                glTranslated(0.078,1.99,-0.4);
                glScaled(0.003,0.56,0.003);
                glutSolidCube(1);
            glPopMatrix();

            glPushMatrix();
                glTranslated(0.11,1.99,-0.4);
                glScaled(0.003,0.56,0.003);
                glutSolidCube(1);
            glPopMatrix();

            glPushMatrix();
                glTranslated(0.145,1.99,-0.4);
                glScaled(0.003,0.56,0.003);
                glutSolidCube(1);
            glPopMatrix();
        glPopMatrix();

        ///Horizontal rod
            glColor3d(0,0,0);
            glPushMatrix();
                glTranslated(-0.528,1.8,-0.3);
                glScaled(0.1,0.003,0.003);
                glutSolidCube(1);
            glPopMatrix();

            glPushMatrix();
                glTranslated(-0.528,1.96,-0.3);
                glScaled(0.1,0.003,0.003);
                glutSolidCube(1);
            glPopMatrix();
            glColor3d(1,1,1);
        ///ROD

        glPopMatrix();

        /// pasher piller left 2
        glPushMatrix();
            glTranslated(0.83,0,0.39);
            glRotated(-45,0,1,0);

            glPushMatrix();
                glTranslated(-0.605,1.88,-0.3);
                glScaled(0.045,0.4,0.03);
                glutSolidCube(1);
            glPopMatrix();

            glPushMatrix();
                glTranslated(-0.45,1.88,-0.3);
                glScaled(0.045,0.4,0.03);
                glutSolidCube(1);
            glPopMatrix();

            glPushMatrix();
                glTranslated(-0.528,2.1,-0.3);
                glScaled(0.199,0.04,0.03);
                glutSolidCube(1);
            glPopMatrix();

            glPushMatrix();
                glTranslated(-0.528,1.68,-0.3);
                glScaled(0.199,0.02,0.06);
                glutSolidCube(1);
            glPopMatrix();


            ///Horizontal rod
            glColor3d(0,0,0);
            glPushMatrix();
                glTranslated(-0.528,1.8,-0.3);
                glScaled(0.1,0.003,0.003);
                glutSolidCube(1);
            glPopMatrix();

            glPushMatrix();
                glTranslated(-0.528,1.96,-0.3);
                glScaled(0.1,0.003,0.003);
                glutSolidCube(1);
            glPopMatrix();
            glColor3d(1,1,1);

            ///ROD
        glColor3d(0,0,0);
        glPushMatrix();
        glTranslated(-0.641,0.43,0.1);
        glScaled(1,0.73,1);
            glPushMatrix();
                glTranslated(0.078,1.99,-0.4);
                glScaled(0.003,0.56,0.003);
                glutSolidCube(1);
            glPopMatrix();

            glPushMatrix();
                glTranslated(0.11,1.99,-0.4);
                glScaled(0.003,0.56,0.003);
                glutSolidCube(1);
            glPopMatrix();

            glPushMatrix();
                glTranslated(0.145,1.99,-0.4);
                glScaled(0.003,0.56,0.003);
                glutSolidCube(1);
            glPopMatrix();
        glPopMatrix();
        glColor3d(1,1,1);
        ///ROD

        glPopMatrix();


    glPopMatrix();

    /// Circle

    glColor3d(1,0,0);
    glPushMatrix();
        glTranslated(0,2.1,-0.44);
        glScaled(0.35,0.35,0.01);
        glutSolidSphere(1,50,50);
    glPopMatrix();

    glColor3d(0,0,0);
    glPushMatrix();
        glTranslated(-0.18,1.9,-0.45);
        glScaled(0.01,0.5,0.01);
        glutSolidCube(1);
    glPopMatrix();

    glColor3d(0,0,0);
    glPushMatrix();
        glTranslated(0.18,1.9,-0.45);
        glScaled(0.01,0.5,0.01);
        glutSolidCube(1);
    glPopMatrix();


}

void draw() {


    /// Walls
    glPushMatrix();
        //glTranslated(0,2.6,-2.4);
        glScaled(1.2,0.8,1.2);
        drawWalls();
    glPopMatrix();

    /// Table
    glPushMatrix();
        //glTranslated(0,2.6,-2.4);
        glScaled(1.2,1.2,1.2);
        drawTable();
    glPopMatrix();

    /// Shohid Minar
    glPushMatrix();
        //glTranslated(0,2.6,-2.4);
        //glTranslated(0,-4,0);
        glScaled(1.2,1.2,1.2);
       // glScaled(3,3,3);
        drawShohidMinar();
    glPopMatrix();

}


static void resize(int w, int h)
{
    if (h == 0)
		h = 1;
	float ratio =  w * 1.0 / h;

	glMatrixMode(GL_PROJECTION);

	glLoadIdentity();

	glViewport(0, 0, w, h);

	gluPerspective(100.0f, ratio, 0.5f, 100.0f);

	glMatrixMode(GL_MODELVIEW);

}

static void display(void)
{
    const double t = glutGet(GLUT_ELAPSED_TIME) / 2000.0;
    const double a = t*90.0;

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3d(1,0,0);

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glLoadIdentity();


    gluLookAt(	x, 1.0f, z,
			x+lx, 1.0f,  z+lz,
			0.0f, 1.0f,  0.0f);

    glPushMatrix();
            glTranslated(trX,trY,trZ);
            glRotated(30,1,0,0);
            glRotated(-a,0,1,0);
            glScaled(1+X,1+Y,1+Z);
			draw();
    glPopMatrix();

    glutSwapBuffers();
}


static void key(unsigned char key, int x, int y)
{
    float frac = 0.01f;
    float fracTran=0.05f;
    switch (key)
    {
        case 27 :
        case 'q':
            exit(0);
            break;
        case 's':
            X-=frac;
            Y-=frac;
            Z-=frac;
            break;
        case 'w':
            X+=frac;
            Y+=frac;
            Z+=frac;
            break;
        case 't':
            trY+=fracTran;
            break;
        case 'g':
            trY-=fracTran;
            break;
        case 'f':
            trX-=fracTran;
            break;
        case 'h':
            trX+=fracTran;
            break;
    }

    glutPostRedisplay();
}

static void idle(void)
{
    glutPostRedisplay();
}

const GLfloat light_ambient[]  = { 0.0f, 0.0f, 0.0f, 1.0f };
const GLfloat light_diffuse[]  = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_position[] = { 2.0f, 5.0f, 5.0f, 0.0f };

const GLfloat mat_ambient[]    = { 0.7f, 0.7f, 0.7f, 1.0f };
const GLfloat mat_diffuse[]    = { 0.8f, 0.8f, 0.8f, 1.0f };
const GLfloat mat_specular[]   = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat high_shininess[] = { 100.0f };

/* Program entry point */

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition(0,0);
	glutInitWindowSize(1366,720);
	glutCreateWindow("Saheed Minar");

    glutReshapeFunc(resize);
    glutDisplayFunc(display);
    glutKeyboardFunc(key);
    glutIdleFunc(idle);

    glClearColor(1,1,1,1);
    glEnable(GL_CULL_FACE);
    glCullFace(GL_BACK);

    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LESS);

    glEnable(GL_LIGHT0);
    glEnable(GL_NORMALIZE);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHTING);

    glLightfv(GL_LIGHT0, GL_AMBIENT,  light_ambient);
    glLightfv(GL_LIGHT0, GL_DIFFUSE,  light_diffuse);
    glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);

    glMaterialfv(GL_FRONT, GL_AMBIENT,   mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE,   mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR,  mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);

    glutMainLoop();

    return EXIT_SUCCESS;
}
