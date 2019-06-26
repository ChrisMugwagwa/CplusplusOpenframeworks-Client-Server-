#include "ofApp.h"




//--------------------------------------------------------------
void ofApp::setup(){
	receiver.setup(PORT);
	
	ofBackground(0, 0, 0);
	//test = new rocket(ofGetWindowWidth()/2, ofGetWindowHeight()/3);

	if (rockets.size() == 0) {

		for (int i = 0; i < 4; i++) {

			rockets.push_back(new rocket(200 * ofRandom(1, 4), ofGetWindowHeight() / 3));
		}
	}
}

//--------------------------------------------------------------
void ofApp::update(){
	
	// check for waiting messages
	while (receiver.hasWaitingMessages()) {
		// get the next message
		ofxOscMessage m;
		receiver.getNextMessage(m);
		std::cout << "Got a message! " << m.getAddress() << std::endl;
		// check for rocket message
		if (m.getAddress() == "/rocket") {
			// call your addRocket function here!
			addRocket();
		}
	}
	
	
	for (int j = 0; j < rockets.size(); j++) {
		rockets[j]->update();
	}
}

//--------------------------------------------------------------
void ofApp::draw(){
	for (int j = 0; j < rockets.size(); j++) {
		rockets[j]->draw();
	}
}

void ofApp::addRocket()
{
	for (int i = 0; i < 4; i++) {

		rockets.push_back(new rocket(200 * ofRandom(1, 4), ofGetWindowHeight() / 3));
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
	
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
	addRocket();
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}


//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
