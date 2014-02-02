#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofSetBackgroundAuto(false);
    ofSetFrameRate(60);
    ofBackground(255);
    ofEnableSmoothing();
    x = false;
}

//--------------------------------------------------------------
void testApp::update(){
    w.walk();
    
    if( x == true){
        w.randomize();
       
    }
    else{
         w.walk();
    }
}

//--------------------------------------------------------------
void testApp::draw(){
      if( x == true){
    w.renderMouse();
      }else{
          w.display();}
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
    x = true;

  
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){
    x = false;

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}