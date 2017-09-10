#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetFrameRate(60);
	ofBackground(0);
	ofSetWindowTitle("Insta");

	//ofNoFill();
}

//--------------------------------------------------------------
void ofApp::update(){
	
}

//--------------------------------------------------------------
void ofApp::draw(){

	this->cam.begin();

	float radius = 350;
	float tmp_radius;
	float x, y, tmp_x, tmp_y;

	for (int z = -512; z < 512; z += 30) {
		ofSetColor((z + 512) / 1024.f * 255.f);

		for (int rotate_deg = 0; rotate_deg < 360; rotate_deg += 90) {
			ofBeginShape();
			for (int deg = -45; deg <= 45; deg += 3) {
				x = radius * cos((deg + rotate_deg) * DEG_TO_RAD);
				y = radius * sin((deg + rotate_deg) * DEG_TO_RAD);

				tmp_radius = radius * ofMap(ofNoise(x * 0.005, y * 0.005,z * 0.05, ofGetFrameNum() * 0.005), 0, 1, 0.5, 1.0);

				tmp_x = tmp_radius * cos((deg + rotate_deg) * DEG_TO_RAD);
				tmp_y = tmp_radius * sin((deg + rotate_deg) * DEG_TO_RAD);

				ofVertex(tmp_x, tmp_y, z);
			}

			x = 500 * cos((45 + rotate_deg) * DEG_TO_RAD);
			y = 500 * sin((45 + rotate_deg) * DEG_TO_RAD);
			ofVertex(x, y, z);

			x = 500 * cos((-45 + rotate_deg) * DEG_TO_RAD);
			y = 500 * sin((-45 + rotate_deg) * DEG_TO_RAD);
			ofVertex(x, y, z);

			ofEndShape(true);
		}
	}

	/*
	*/

	this->cam.end();
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
