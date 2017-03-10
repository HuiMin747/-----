#include"star.hpp"
#define PI 3.1415926535

Star::Star(GLfloat radius, GLfloat distance,
	   GLfloat speed,GLfloat selfSpeed,Star* parent)
{
		//Todo
}

void Star::drawStar()
{

// Todo
}

Planet::Planet(GLfloat radius, GLfloat distance,
	   GLfloat speed,GLfloat selfSpeed,Star* parent,GLfloat rgbColor[3]):
Star(radius,distance,speed,selfSpeed,parent)
{

}

void Planet::draPlanet()
{


}

LightPlanet::LightPlanet(GLfloat radius, GLfloat distance,
	   GLfloat speed,GLfloat selfSpeed,Star* parent,GLfloat rgbColor[3]):
Planet(radius,distance,speed,selfSpeed,parent,rgbColor)
{

}

void LightPlanet::drawLight()
{


}
