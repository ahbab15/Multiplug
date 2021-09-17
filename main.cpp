#include<windows.h>

#include <GL/glut.h>
#include <stdlib.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <math.h>
static GLfloat spin = 0.0;
static float	tx	=  0.0;
static float	ty	=  0.0;
int on,off;


void DrawCircle(float cx, float cy, float rx,float ry, int num_segments)
{
    glBegin(GL_TRIANGLE_FAN);
    for(int i = 0; i < num_segments; i++)
    {
        float theta = 2.0f * 3.1416f * float(i) / float(num_segments);
        float x = rx * cosf(theta);
        float y = ry * sinf(theta);
        glVertex2f(x + cx, y + cy);
    }
    glEnd();
}

void init()
{
    glClearColor(0.0f,0.50f,0.5f,0.0f);
    glOrtho(-100,100,-100,100,-100,100);
}

void myDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);



  //main frame
  glColor3f(0.0f,0.0f,0.0f);
  glRectf(-70,50,70,-50);

  glColor3f(1.0f,1.0f,1.0f);
  glRectf(-68,48,65,-45);


//button

  glColor3f(0.0f, 0.5f, 0.9f);
   DrawCircle(-45,25,4,9,350);

    glColor3f(0.0f, 0.5f, 0.9f);
   DrawCircle(-15,25,4,9,350);

    glColor3f(0.0f, 0.5f, 0.9f);
   DrawCircle(15,25,4,9,350);

   glColor3f(0.0f, 0.5f, 0.9f);
   DrawCircle(45,25,4,9,350);




//2nd frame
    glColor3f(0.2f,0.25f,0.15f);
   glRectf(-62,15,62,-43);

   glColor3f(1.0f,1.0f,1.0f);
   glRectf(-60,13,60,-41);


//switch
      glColor3f(0.0f,0.0f,0.0f);
   glRectf(-47,5,-44,-3);

   glColor3f(0.0f,0.0f,0.0f);
   glRectf(-16,5,-13,-3);

    glColor3f(0.0f,0.0f,0.0f);
   glRectf(14,5,17,-3);

    glColor3f(0.0f,0.0f,0.0f);
   glRectf(45,5,48,-3);



glColor3f(0.0f,0.0f,0.0f);
   glRectf(-53,-14,-50,-22);

   glColor3f(0.0f,0.0f,0.0f);
   glRectf(-41,-14,-38,-22);


   glColor3f(0.0f,0.0f,0.0f);
   glRectf(-22,-14,-19,-22);

   glColor3f(0.0f,0.0f,0.0f);
   glRectf(-10,-14,-7,-22);


   glColor3f(0.0f,0.0f,0.0f);
   glRectf(8,-14,11,-22);

   glColor3f(0.0f,0.0f,0.0f);
   glRectf(20,-14,23,-22);


   glColor3f(0.0f,0.0f,0.0f);
   glRectf(39,-14,42,-22);

   glColor3f(0.0f,0.0f,0.0f);
   glRectf(51,-14,54,-22);


   //separation

    glColor3f(0.2f,0.25f,0.15f);
   glRectf(-30,15,-28,-43);

   glColor3f(0.2f,0.25f,0.15f);
   glRectf(00,15,2,-43);

    glColor3f(0.2f,0.25f,0.15f);
   glRectf(30,15,32,-43);






    glFlush();

}

void myDisplay1()
{
    glClear(GL_COLOR_BUFFER_BIT);



  //main frame
  glColor3f(0.0f,0.0f,0.0f);
  glRectf(-70,50,70,-50);

  glColor3f(1.0f,1.0f,1.0f);
  glRectf(-68,48,65,-45);


//button

  glColor4f(1.0f, 0.0f, 0.0f, 0.0f);
   DrawCircle(-45,25,4,9,350);
  glColor3f(0.0f, 0.5f, 0.9f);
    glColor3f(0.0f, 0.5f, 0.9f);
   DrawCircle(-15,25,4,9,350);

    glColor3f(0.0f, 0.5f, 0.9f);
   DrawCircle(15,25,4,9,350);

   glColor3f(0.0f, 0.5f, 0.9f);
   DrawCircle(45,25,4,9,350);




//2nd frame
    glColor3f(0.2f,0.25f,0.15f);
   glRectf(-62,15,62,-43);

   glColor3f(1.0f,1.0f,1.0f);
   glRectf(-60,13,60,-41);


//switch
      glColor3f(0.0f,0.0f,0.0f);
   glRectf(-47,5,-44,-3);

   glColor3f(0.0f,0.0f,0.0f);
   glRectf(-16,5,-13,-3);

    glColor3f(0.0f,0.0f,0.0f);
   glRectf(14,5,17,-3);

    glColor3f(0.0f,0.0f,0.0f);
   glRectf(45,5,48,-3);



glColor3f(0.0f,0.0f,0.0f);
   glRectf(-53,-14,-50,-22);

   glColor3f(0.0f,0.0f,0.0f);
   glRectf(-41,-14,-38,-22);


   glColor3f(0.0f,0.0f,0.0f);
   glRectf(-22,-14,-19,-22);

   glColor3f(0.0f,0.0f,0.0f);
   glRectf(-10,-14,-7,-22);


   glColor3f(0.0f,0.0f,0.0f);
   glRectf(8,-14,11,-22);

   glColor3f(0.0f,0.0f,0.0f);
   glRectf(20,-14,23,-22);


   glColor3f(0.0f,0.0f,0.0f);
   glRectf(39,-14,42,-22);

   glColor3f(0.0f,0.0f,0.0f);
   glRectf(51,-14,54,-22);


   //separation

    glColor3f(0.2f,0.25f,0.15f);
   glRectf(-30,15,-28,-43);

   glColor3f(0.2f,0.25f,0.15f);
   glRectf(00,15,2,-43);

    glColor3f(0.2f,0.25f,0.15f);
   glRectf(30,15,32,-43);






    glFlush();

}

void myDisplay2()
{
    glClear(GL_COLOR_BUFFER_BIT);



  //main frame
  glColor3f(0.0f,0.0f,0.0f);
  glRectf(-70,50,70,-50);

  glColor3f(1.0f,1.0f,1.0f);
  glRectf(-68,48,65,-45);


//button

  glColor3f(0.0f, 0.5f, 0.9f);
   DrawCircle(-45,25,4,9,350);
 glColor4f(1.0f, 0.0f, 0.0f, 0.0f);

   DrawCircle(-15,25,4,9,350);

    glColor3f(0.0f, 0.5f, 0.9f);
   DrawCircle(15,25,4,9,350);

   glColor3f(0.0f, 0.5f, 0.9f);
   DrawCircle(45,25,4,9,350);




//2nd frame
    glColor3f(0.2f,0.25f,0.15f);
   glRectf(-62,15,62,-43);

   glColor3f(1.0f,1.0f,1.0f);
   glRectf(-60,13,60,-41);


//switch
      glColor3f(0.0f,0.0f,0.0f);
   glRectf(-47,5,-44,-3);

   glColor3f(0.0f,0.0f,0.0f);
   glRectf(-16,5,-13,-3);

    glColor3f(0.0f,0.0f,0.0f);
   glRectf(14,5,17,-3);

    glColor3f(0.0f,0.0f,0.0f);
   glRectf(45,5,48,-3);



glColor3f(0.0f,0.0f,0.0f);
   glRectf(-53,-14,-50,-22);

   glColor3f(0.0f,0.0f,0.0f);
   glRectf(-41,-14,-38,-22);


   glColor3f(0.0f,0.0f,0.0f);
   glRectf(-22,-14,-19,-22);

   glColor3f(0.0f,0.0f,0.0f);
   glRectf(-10,-14,-7,-22);


   glColor3f(0.0f,0.0f,0.0f);
   glRectf(8,-14,11,-22);

   glColor3f(0.0f,0.0f,0.0f);
   glRectf(20,-14,23,-22);


   glColor3f(0.0f,0.0f,0.0f);
   glRectf(39,-14,42,-22);

   glColor3f(0.0f,0.0f,0.0f);
   glRectf(51,-14,54,-22);


   //separation

    glColor3f(0.2f,0.25f,0.15f);
   glRectf(-30,15,-28,-43);

   glColor3f(0.2f,0.25f,0.15f);
   glRectf(00,15,2,-43);

    glColor3f(0.2f,0.25f,0.15f);
   glRectf(30,15,32,-43);






    glFlush();

  }
void myDisplay3()
{
    glClear(GL_COLOR_BUFFER_BIT);



  //main frame
  glColor3f(0.0f,0.0f,0.0f);
  glRectf(-70,50,70,-50);

  glColor3f(1.0f,1.0f,1.0f);
  glRectf(-68,48,65,-45);


//button

  glColor3f(0.0f, 0.5f, 0.9f);
   DrawCircle(-45,25,4,9,350);

   glColor3f(0.0f, 0.5f, 0.9f);
   DrawCircle(-15,25,4,9,350);

  glColor4f(1.0f, 0.0f, 0.0f, 0.0f);
   DrawCircle(15,25,4,9,350);

   glColor3f(0.0f, 0.5f, 0.9f);
   DrawCircle(45,25,4,9,350);




//2nd frame
    glColor3f(0.2f,0.25f,0.15f);
   glRectf(-62,15,62,-43);

   glColor3f(1.0f,1.0f,1.0f);
   glRectf(-60,13,60,-41);


//switch
      glColor3f(0.0f,0.0f,0.0f);
   glRectf(-47,5,-44,-3);

   glColor3f(0.0f,0.0f,0.0f);
   glRectf(-16,5,-13,-3);

    glColor3f(0.0f,0.0f,0.0f);
   glRectf(14,5,17,-3);

    glColor3f(0.0f,0.0f,0.0f);
   glRectf(45,5,48,-3);



glColor3f(0.0f,0.0f,0.0f);
   glRectf(-53,-14,-50,-22);

   glColor3f(0.0f,0.0f,0.0f);
   glRectf(-41,-14,-38,-22);


   glColor3f(0.0f,0.0f,0.0f);
   glRectf(-22,-14,-19,-22);

   glColor3f(0.0f,0.0f,0.0f);
   glRectf(-10,-14,-7,-22);


   glColor3f(0.0f,0.0f,0.0f);
   glRectf(8,-14,11,-22);

   glColor3f(0.0f,0.0f,0.0f);
   glRectf(20,-14,23,-22);


   glColor3f(0.0f,0.0f,0.0f);
   glRectf(39,-14,42,-22);

   glColor3f(0.0f,0.0f,0.0f);
   glRectf(51,-14,54,-22);


   //separation

    glColor3f(0.2f,0.25f,0.15f);
   glRectf(-30,15,-28,-43);

   glColor3f(0.2f,0.25f,0.15f);
   glRectf(00,15,2,-43);

    glColor3f(0.2f,0.25f,0.15f);
   glRectf(30,15,32,-43);






    glFlush();

}

void myDisplay4()
{
    glClear(GL_COLOR_BUFFER_BIT);



  //main frame
  glColor3f(0.0f,0.0f,0.0f);
  glRectf(-70,50,70,-50);

  glColor3f(1.0f,1.0f,1.0f);
  glRectf(-68,48,65,-45);


//button

 glColor3f(0.0f, 0.5f, 0.9f);
   DrawCircle(-45,25,4,9,350);

   glColor3f(0.0f, 0.5f, 0.9f);
   DrawCircle(-15,25,4,9,350);

 glColor3f(0.0f, 0.5f, 0.9f);
   DrawCircle(15,25,4,9,350);

  glColor4f(1.0f, 0.0f, 0.0f, 0.0f);
   DrawCircle(45,25,4,9,350);




//2nd frame
    glColor3f(0.2f,0.25f,0.15f);
   glRectf(-62,15,62,-43);

   glColor3f(1.0f,1.0f,1.0f);
   glRectf(-60,13,60,-41);


//switch
      glColor3f(0.0f,0.0f,0.0f);
   glRectf(-47,5,-44,-3);

   glColor3f(0.0f,0.0f,0.0f);
   glRectf(-16,5,-13,-3);

    glColor3f(0.0f,0.0f,0.0f);
   glRectf(14,5,17,-3);

    glColor3f(0.0f,0.0f,0.0f);
   glRectf(45,5,48,-3);



glColor3f(0.0f,0.0f,0.0f);
   glRectf(-53,-14,-50,-22);

   glColor3f(0.0f,0.0f,0.0f);
   glRectf(-41,-14,-38,-22);


   glColor3f(0.0f,0.0f,0.0f);
   glRectf(-22,-14,-19,-22);

   glColor3f(0.0f,0.0f,0.0f);
   glRectf(-10,-14,-7,-22);


   glColor3f(0.0f,0.0f,0.0f);
   glRectf(8,-14,11,-22);

   glColor3f(0.0f,0.0f,0.0f);
   glRectf(20,-14,23,-22);


   glColor3f(0.0f,0.0f,0.0f);
   glRectf(39,-14,42,-22);

   glColor3f(0.0f,0.0f,0.0f);
   glRectf(51,-14,54,-22);


   //separation

    glColor3f(0.2f,0.25f,0.15f);
   glRectf(-30,15,-28,-43);

   glColor3f(0.2f,0.25f,0.15f);
   glRectf(00,15,2,-43);

    glColor3f(0.2f,0.25f,0.15f);
   glRectf(30,15,32,-43);






    glFlush();

}



void my_keyboard(unsigned char key, int x, int y)
{

	switch (key) {

		case '1':
            myDisplay1();
			break;

		case '2':
        myDisplay2();
			break;


		case '3':
			myDisplay3();
			 break;

        case '4':
			 myDisplay4();
			 break;

	  default:
			break;
	}
}






int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(1200,700);
    glutInitWindowPosition(0,0);
    glutCreateWindow("MultiPlug");
    init();
    glutDisplayFunc(myDisplay);
    glutKeyboardFunc(my_keyboard);

    glutMainLoop();
    return 0;
}

