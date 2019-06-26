#include "rocket.h"
#include "ofApp.h"
#include "spark.h"




rocket::rocket(float _x, float _explodeY)
{
	x = _x;
	explodeY = _explodeY;
	dx = ofRandom(-1, 1);
	//y = ofGetScreenHeight();
	y = ofGetWindowHeight();
	dy = ofRandom(-2, -1);


}

void rocket::update()
{
	x += dx;
	y += dy;
	
	if (y < explodeY) {
		
		if (sparks.size() == 0) {

			for (int i = 0; i < 4; i++) {
				sparks.push_back(new spark(x, y));
			}
		}
	}



	for (int j = 0; j < sparks.size(); j++) {
		sparks[j]->update();
	}
}

void rocket::draw()
{
	if (y >= explodeY) {
		ofSetColor(255, 0, 0);
		ofDrawRectangle(x, y, 15, 30);
	}

	if (y < explodeY) {
		for (int k = 0; k < sparks.size(); k++) {
			sparks[k]->draw();
		}
	}
}
