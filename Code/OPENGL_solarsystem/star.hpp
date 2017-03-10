#ifndef star_hpp
#define star_hpp

#include<GL/glut.h>

class Star
{
public:
	GLfloat radius;
	GLfloat speed,selfSpeed;
	GLfloat distance;
	GLfloat rgbColor[4];

	Star * parentStar;

	Star(Glfloat radius,GLfloat distance,
	     GLfloat speed, GLfloat selfSpeed,
	     Star * parent);
	
	void drawStar();
	virtual void draw()
	{
	    drawStar();
	}	
	
	virtual void update(long timeSpan);

protected:
	Float alphaSelf, alpha;	

};

class Planet : public Star
{
public:
	Planet(Glfloat radius,GLfloat distance,
	     GLfloat speed, GLfloat selfSpeed,
	     Star * parent, GLfloat rgbColor[3])
	void drawPlanet();
	virtual void draw(){drawPlanet();drawStar();}
};
class LightPlanet : public Planet
{
public:
	LightPlanet(Glfloat radius,GLfloat distance,
	     GLfloat speed, GLfloat selfSpeed,
	     Star * parent, GLfloat rgbColor[3])
	void drawLight();
	virtual void draw(){drawLight();drawPlanet();drawStar();}
};

	

#endif
