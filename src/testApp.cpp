#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){

    a00.loadImage("a00.jpg");
    a01.loadImage("a01.jpg");
    a02.loadImage("a02.jpg");
    a03.loadImage("a03.jpg");
    a04.loadImage("a03.jpg");

    b00.loadImage("b00.jpg");
    b01.loadImage("b01.jpg");
    b02.loadImage("b02.jpg");
    b03.loadImage("b03.jpg");
    b04.loadImage("a03.jpg");

    c00.loadImage("c00.jpg");
    c01.loadImage("c01.jpg");
    c02.loadImage("c02.jpg");
    c03.loadImage("c03.jpg");
    c04.loadImage("a03.jpg");

    d00.loadImage("d00.jpg");
    d01.loadImage("d01.jpg");
    d02.loadImage("d02.jpg");
    d03.loadImage("d03.jpg");
    d04.loadImage("a03.jpg");

    

    screenImage.loadImage("screen.png");
    
    
    
    for (int x=0;x<a00.width;x++){
        for(int y=0; y<a00.height;y++){
            if (x%4==0){
                ofColor c000 = a00.getColor(x,y);
                a04.setColor(x, y, c000);
                
                ofColor c001 = b00.getColor(x,y);
                b04.setColor(x, y, c001);
                
                ofColor c002 = c00.getColor(x,y);
                c04.setColor(x, y, c002);
                
                ofColor c003 = d00.getColor(x,y);
                d04.setColor(x, y, c003);
            }
            
            if (x%4==1){
                ofColor c000 = a01.getColor(x,y);
                a04.setColor(x, y, c000);
                
                ofColor c001 = b01.getColor(x,y);
                b04.setColor(x, y, c001);
                
                ofColor c002 = c01.getColor(x,y);
                c04.setColor(x, y, c002);
                
                ofColor c003 = d01.getColor(x,y);
                d04.setColor(x, y, c003);
            }
            
            if (x%4==2){
                ofColor c000 = a02.getColor(x,y);
                a04.setColor(x, y, c000);
                
                ofColor c001 = b02.getColor(x,y);
                b04.setColor(x, y, c001);
                
                ofColor c002 = c02.getColor(x,y);
                c04.setColor(x, y, c002);
                
                ofColor c003 = d02.getColor(x,y);
                d04.setColor(x, y, c003);
            }
            
            if (x%4==3){
                ofColor c000 = a03.getColor(x,y);
                a04.setColor(x, y, c000);
                
                ofColor c001 = b03.getColor(x,y);
                b04.setColor(x, y, c001);
                
                ofColor c002 = c03.getColor(x,y);
                c04.setColor(x, y, c002);
                
                ofColor c003 = d03.getColor(x,y);
                d04.setColor(x, y, c003);
            }
        }
    }


    a04.update();
    b04.update();
    c04.update();
    d04.update();
  
    
    
}

//--------------------------------------------------------------
void testApp::update(){
    ofBackground(255);

}

//--------------------------------------------------------------
void testApp::draw(){
    
    if (state ==1)
    a04.draw(0,0);
    
    if (state ==2)
    b04.draw(0,0);
    
    if (state ==3)
    c04.draw(0,0);
    
    if (state ==4)
    d04.draw(0,0);

    ofPushStyle();
    ofSetColor(0);
    ofDrawBitmapString("press 1, 2, 3, and 4 ", 10,100);
    ofPopStyle();
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    state = key-'0';

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

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

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
