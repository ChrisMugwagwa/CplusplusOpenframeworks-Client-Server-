#include "spark.h"
#include "ofApp.h"



spark::spark(float _x, float _y)
{
	x = _x;
	y = _y;

	dx = ofRandom(-5, 5);
	dy = ofRandom(-5, 5);
	r = ofRandom(0, 255);
	g = ofRandom(0, 255);
	b = ofRandom(0, 255);


	

}

void spark::update()
{
	x += dx;
	y += dy;
	r -= 1;
	g -= 1;
	b -= 1;


}

void spark::draw()
{
	ofSetColor(r, g, b);
	ofDrawRectangle(x, y, 10, 10);
}


///spark::~spark()
//{
//}


