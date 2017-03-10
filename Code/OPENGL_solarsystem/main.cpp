//using GLUT head
#include"solarSystem.hpp"

//create graphic basic macro
#define WINDOW_X_POS 50
#define WINDOW_Y_POS 50
#define WIDTH 700
#define HEIGHT 700

SolarSystem solarsystem;

// be used to register GLUT 's callback
void onDisplay(void){solarsystem.onDisplay();}
void onUpdate(void){solarsystem.onUpdate();}
void onKeyboard(unsigned char key,int x,int y){solarsystem.onKeyboard(key,x,y);}

int main(int argc,char* argv[])
{
	//Init GLUT
	glutInit(&argc,argv);
	//using RGBA index mode ,specify single/double  chache  window
	glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE);
	//set the window created  pisition
	glutInitWindowPosition(WINDOW_X_POS,WINDOW_Y_POS);
	//Init the width & height
	glutInitWindowSize(WIDTH,HEIGHT);
	//windows name
	glutCreateWindow("SolarSystem at HuiMin's PC");
	//  GLUT 's callback
	glutDisplayFunc(onDisplay);
	glutIdleFunc(onUpdate);
	glutKeyboardFunc(onKeyboard);


	glutMainLoop();

	return 0;
	


}


