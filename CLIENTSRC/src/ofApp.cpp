#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	
	std::cout << "Type in rocket to tell the server to call the rocket function " << std::endl;
	
}

//--------------------------------------------------------------
void ofApp::update(){
	std::string input;
	std::string search = "rocket";
	
	std::getline(std::cin, input);


	//////////////////////////////tokenizer////////////////////////////////

	// tokenizer - splits the sent string on the sent seperator and sends it back as a vector
	// of strings. e.g 'hello how are you' -> {"hello", "how", "are", "you"}
	std::vector<std::string> tokenise(std::string input, char sep) {
		std::vector<std::string> vec;
		int end;
		int start = input.find_first_not_of(sep, 0);
		std::string token;
		//  std::cout << "processing '"<< input << "'" << input.length() << std::endl;
		// find index of sep
		do {
			end = input.find_first_of(sep, start);
			//std::cout << start << " - " << end << std::endl;
			if (start == input.length() || start == end) {// whitespace at the end
				break;
			}
			if (end >= 0) {// we found it - use end for substr
				token = input.substr(start, end - start);
			}
			else { // we did not find it, use the remaining length of the string
				token = input.substr(start, input.length() - start);
			}
			//std::cout << "got token " << token << std::endl;
			vec.push_back(token);
			// did we find it?
			start = end + 1;
		} while (end > 0);  // yes? continue
		return vec;
	}

	/////////////////////////////tokenizer////////////////////////////////

	// then send  the osc message


	if (input.find(search) == false) {
		sender.setup(HOST, PORT);
		ofxOscMessage m;
		m.setAddress("/rocket");
		sender.sendMessage(m, false);
	}
}

//--------------------------------------------------------------
void ofApp::draw(){

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
