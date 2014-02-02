//
//  walker.cpp
//  emptyExample
//
//  Created by Dan on 2/2/14.
//
//

#include "walker.h"
Walker::Walker() {
  
    loc.resize(3000);
    for (int i = 0; i<loc.size(); i++) {
        loc[i] = ofVec2f(ofRandom(ofGetWidth()), ofGetHeight()/2);
    }    }

void Walker::display(){
    ofSetColor(0,50);
    for ( int i=0; i<loc.size(); i++) {
        ofEllipse(loc[i].x, loc[i].y,1,1);
    }
}

void Walker::walk(){
    for ( int i=0; i<loc.size(); i++) {
        vel.set(2*ofNoise(loc[i].x * 0.02, loc[i].y*0.016 )-1, 2*ofNoise( loc[i].x * 0.017, loc[i].y*0.011 )-1);
        loc[i] = loc[i]+vel;
    }
    
}
void Walker::randomize(){
    for ( int i=0; i<loc.size(); i++) {
        if ( loc[i].y<(ofRandom((ofGetHeight()/2)-90,(ofGetHeight()/2)-70 ))) {
            vel.set(ofRandom(-5, 5), ofRandom(-5, 5));
    loc[i] = loc[i]+vel;
        }
        else {
            vel.set(2*ofNoise(loc[i].x * 0.02, loc[i].y*0.016 )-1, 2*ofNoise( loc[i].x * 0.017, loc[i].y*0.011 )-1);
            
            loc[i] = loc[i]+vel;
        }
    }
    
}

void Walker::renderMouse(){
    for ( int i=0; i<loc.size(); i++) {
         if ( loc[i].y<(ofRandom((ofGetHeight()/2)-90,(ofGetHeight()/2)-70 ))) {
            ofSetColor(0, ofRandom(127, 255), 0);
            ofEllipse(loc[i].x, loc[i].y,4,4);
        }
        else {
           ofSetColor(0,50);
            ofEllipse(loc[i].x, loc[i].y,1,1);
        }
    }
    
}



                    