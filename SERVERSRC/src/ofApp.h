#pragma once

#include "ofxOsc.h"
// listen on port 8888
#define PORT 8888


#include "ofMain.h"
#include "spark.h"
#include "rocket.h"


class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
		
		std::vector <rocket*> rockets;

		void addRocket();

		ofxOscReceiver receiver;

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

		
		
};
