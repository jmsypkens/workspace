#include <ctime>

#include <iostream>
#include <cmath>
#include <gl/Gl.h>
#include <gl/glut.h>
#include <windows.h>
#include "hw1.h"

using namespace std;

void myInit(void)
 {
	srand(time(NULL));
	glClearColor(1.0,1.0,1.0,0.0);      // background color is white
 	setWindow(-worldWidth/2, worldWidth/2, -worldHeight/2, worldHeight/2); // replaces the following three lines

	//glMatrixMode(GL_PROJECTION); 	    // set "camera shape"
	//glLoadIdentity();
    //gluOrtho2D(-worldWidth,worldWidth,-worldHeight, worldHeight);

	numBall = 1;
	fillColor = true;

	balls[0].centerx = 0;
	balls[0].centery = 0;
	
	balls[1].centerx = -50;
	balls[1].centery = 50;

	balls[2].centerx = 50;
	balls[2].centery = 50;

	balls[3].centerx = 50;
	balls[3].centery = -50;

	for (int i = 0; i < maxBallSize; i++){
		balls[i].radius = 20;
		balls[i].tx = getRandom()/10;
		balls[i].ty = getRandom()/10;
		balls[i].dx = 1;
		balls[i].dy = 1;
		balls[i].rColor = getRandom();
		balls[i].gColor = getRandom();
		balls[i].bColor = getRandom();
		balls[i].stop = true;
	}
	
	glLineWidth(3);
}

float getRandom(){
	return (RAND_MAX - rand()) / static_cast<double>(RAND_MAX);
}

void myIdle()
{
	//this function will be invoked when idle
	
	for (int i = 0; i < numBall; i++){
			
		if ((balls[i].centerx + balls[i].radius) >= (worldWidth / 2)){
			balls[i].dx = -1;
		}
		else if ((balls[i].centerx - balls[i].radius) <= (-worldWidth / 2)){
			balls[i].dx = 1;
		}
		if ((balls[i].centery + balls[i].radius) >= (worldHeight / 2)){
			balls[i].dy = -1;
		}
		else if ((balls[i].centery - balls[i].radius) <= (-worldHeight / 2)){
			balls[i].dy = 1;
		}
	}
	for (int i = 0; i < numBall; i++){
		for (int j = i + 1; j < numBall; j++){
			if (computeLineLength(balls[i], balls[j]) <= (balls[i].radius + balls[j].radius)){
				balls[i].dx = -1 * balls[i].dx;
				balls[i].dy = -1 * balls[i].dy;

				balls[j].dx = -1 * balls[j].dx;
				balls[j].dy = -1 * balls[j].dy;

				if (balls[i].stop && balls[j].stop == false){
					balls[i].stop = false;
					balls[i].dx = -1 * balls[j].dx;
					balls[i].dy = -1 * balls[j].dy;
				}
				else if (balls[i].stop == false && balls[j].stop){
					balls[j].stop = false;
					balls[j].dx = -1 * balls[i].dx;
					balls[j].dy = -1 * balls[i].dy;
				}
			}
		}
	}
	for (int i = 0; i < numBall; i++){
		if (balls[i].stop == false){
			balls[i].centerx += balls[i].dx * balls[i].tx;
			balls[i].centery += balls[i].dy * balls[i].ty;
		}			
	}
	
	glutPostRedisplay(); 
}

void myKeyboard(unsigned char theKey, int mouseX, int mouseY)
{
	switch (theKey) {
		case 'a':
			if (numBall < maxBallSize){
				do{
					overlap = false;
					for (int i = 0; i < numBall; i++){
						if (computeLineLength(balls[numBall], balls[i]) <= (balls[numBall].radius + balls[i].radius)){
							overlap = true;
							balls[numBall].centerx = (rand() % screenWidth) - screenWidth / 2;
							balls[numBall].centery = (rand() % screenHeight) - screenHeight / 2;
						}
					}
				} while (overlap);
				
				numBall++;
			}
			break;
		case 'r':
			// remoev ball
			if (numBall > 1){
				numBall--;
			}
			break;
		case 's':
			//move or stop
		
			for (int i = 0; i < numBall; i++){
				if (balls[i].stop){
					balls[i].stop = false;
				}
				else{
					balls[i].stop = true;
				}
			}
			break;
		case 'p':
			//fill or not
			if (fillColor == true){
				fillColor = false;
			}
			else{
				fillColor = true;
			}
			break;
		case 'n':
			//reset
			myInit();
			break;
		case 'q':
			//quit
			exit(0);
			break;
		default:
			break;
	}

	glutPostRedisplay(); // implicitly call myDisplay
}
void mySpecialKeyboard(int theKey, int mouseX, int mouseY)
{
	switch (theKey) {
		case GLUT_KEY_PAGE_UP:
			// increame radius
			if (balls[0].radius < 100){
				balls[0].radius += 1;
			}		
			break;
		case GLUT_KEY_PAGE_DOWN:
			// decrease radius
			if (balls[0].radius > 5){
				balls[0].radius -= 1;
			}		
			break;
	
		case GLUT_KEY_UP:
			// incerase speed
			balls[0].tx += 0.01;
			balls[0].ty += 0.01;
			break;
		case GLUT_KEY_DOWN:
			// decrease speed
			if (balls[0].tx > 0.01){
				balls[0].tx -= 0.01;
				balls[0].ty -= 0.01;
			}
			break;
	}
	glutPostRedisplay(); // implicitly call myDisplay
}
void myMouse(int button, int state, int x, int y) {

	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
		
		for (int i = 0; i < numBall; i++){
			if (computeLineLength(balls[i], x - worldWidth / 2, worldHeight / 2 - y) <= balls[i].radius){
				selectBallNum = i;
			}
		}

		ballCenterX = balls[selectBallNum].centerx;
		ballCenterY = balls[selectBallNum].centery;
	}

	glutPostRedisplay();
}

void myMotion(int x, int y)  {

	int mousex = x - worldWidth / 2;
	int mousey = worldHeight / 2 - y;

	if (mousex - ballCenterX >= 0){
		balls[selectBallNum].dx = 1;
	}
	else{
		balls[selectBallNum].dx = -1;
	}
	
	if (mousey - ballCenterY >= 0){
		balls[selectBallNum].dy = 1;
	}
	else{
		balls[selectBallNum].dy = -1;
	}
	
	balls[selectBallNum].centerx = mousex;
	balls[selectBallNum].centery = mousey;

	if (balls[selectBallNum].stop){
		balls[selectBallNum].stop = false;
	}
	
	glutPostRedisplay();	
	
}
//<<<<<<<<<<<<<<<<<<<<<<<< myDisplay >>>>>>>>>>>>>>>>>
void myDisplay(void)
{
	Sleep(1); //sleep for 1 second
	glClear(GL_COLOR_BUFFER_BIT);     // clear the screen 

	//draw shape here	
	for (int i = 0; i < numBall; i++){
		glColor3f(balls[i].rColor, balls[i].gColor, balls[i].bColor);
		if (fillColor == false && i == 0){
			glBegin(GL_LINE_LOOP);
		}
		else{
			glBegin(GL_POLYGON);
		}		
		for (float theta = 0; theta <= 1; theta += 0.01){
			glVertex2f(balls[i].centerx + balls[i].radius*cos(2 * PI*theta), balls[i].centery + balls[i].radius*sin(2 * PI*theta));
		}
		glEnd();
	}
	glutSwapBuffers();	// send all output to display
}

//<<<<<<<<<<<<<<<<<<<<<<<< main >>>>>>>>>>>>>>>>>>>>>>
void main(int argc, char** argv)
{
	glutInit(&argc, argv);          // initialize the toolkit
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB); // set display mode
	glutInitWindowSize(screenWidth, screenHeight); // set window size
	glutInitWindowPosition(100, 150); // set window position on screen
	glutCreateWindow("Homework1"); // open the screen window

	glutMouseFunc(myMouse);
	glutDisplayFunc(myDisplay); // register redraw callback function
	glutKeyboardFunc(myKeyboard);
	glutSpecialFunc(mySpecialKeyboard);
	glutMotionFunc(myMotion);
	glutIdleFunc(myIdle);			// register idle callback function
	
	myInit();
	glutMainLoop(); 		     // go into a perpetual loop
}


//--------------- setWindow ---------------------
void setWindow(float left, float right, float bottom, float top)
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(left, right, bottom, top); 
}

float computeLineLength(Ball ball1, Ball ball2){

	return sqrt((ball2.centerx - ball1.centerx)*(ball2.centerx - ball1.centerx) + (ball2.centery - ball1.centery)*(ball2.centery - ball1.centery));
}

float computeLineLength(Ball ball, int x, int y){

	return sqrt((x - ball.centerx)*(x - ball.centerx) + (y - ball.centery)*(y - ball.centery));
}