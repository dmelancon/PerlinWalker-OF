//
//  walker.h
//  emptyExample
//
//  Created by Dan on 2/2/14.
//
//

#ifndef __emptyExample__walker__
#define __emptyExample__walker__

#include <iostream>
#include "ofMain.h"

class Walker {
    
public:
    Walker();
    void display();
    void walk();
    void randomize();
    void renderMouse();
    ofVec2f vel;
   vector<ofVec2f> loc;

};


#endif /* defined(__emptyExample__walker__) */
