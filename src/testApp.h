#pragma once

#include "ofMain.h"

class testApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
    
    ofImage a00;
    ofImage a01;
    ofImage a02;
    ofImage a03;
    ofImage a04;
    
    ofImage b00;
    ofImage b01;
    ofImage b02;
    ofImage b03;
    ofImage b04;
    
    ofImage c00;
    ofImage c01;
    ofImage c02;
    ofImage c03;
    ofImage c04;
    
    ofImage d00;
    ofImage d01;
    ofImage d02;
    ofImage d03;
    ofImage d04;
    
    
    ofImage screenImage;
    
    int state;
};
