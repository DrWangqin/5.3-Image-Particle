
#include "testApp.h"

//made by Yinan Zhang for the class "FLy on the wall" with Parsons and Tongji University

// This demo was inspired by the particle vector example by Jeff Crouse in his "Code for Art" tutorials:
// https://github.com/jefftimesten/CodeForArt/tree/master/Chapter003-particles/003-vectors


/**
 * using the Addon "ofxImageSequence" created by James George in collaboration with FlightPhase
 * to download the Addon here: https://github.com/Flightphase/ofxImageSequence
 */



//--------------------------------------------------------------
void testApp::setup(){

    //ofBackground(255);
    ofEnableAlphaBlending();
    //ofSetRectMode(OF_RECTMODE_CENTER);
    
    ofSetFrameRate(50);
    ofSetVerticalSync(true);

	//prefix is frame, file type is png, from frame 1 to 11, 2 digits in the number
	sequence.loadSequence("1/leaf", "png", 1, 241, 3);
	sequence.preloadAllFrames();	//this way there is no stutter when loading frames
	sequence.setFrameRate(16); //set sequence to 16 frames per second
	    
    
    background.loadImage("ban.png");
    lie.loadImage("lie.png");
    
    speed=0.1;
    
}

//--------------------------------------------------------------
void testApp::update(){


    
}

//--------------------------------------------------------------
void testApp::draw(){


	ofSetColor(255);
    background.draw(0, 0);
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){


}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){
     
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
    x=mouseX-200;
    y=mouseY-200;
    
    lie.draw(x,y);
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

