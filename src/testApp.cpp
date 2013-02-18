#include "testApp.h"

static string brickHeightSlider = "brickHeightSlider";
static string brickWidthSlider = "brickWidthSlider";

//--------------------------------------------------------------
void testApp::setup(){
    
    brixel.setup();
    ofBackground(0);
    control_panel.setup();
    control_panel.addPanel("panel");
    control_panel.addSlider("Brick Height", "brickHeightSlider.xml", brixel.grid.getBrickHeight(), 1, 200, true);
    control_panel.addSlider("Brick Width", "brickWidthSlider.xml", brixel.grid.getBrickWidth(), 1, 200, true);
    control_panel.addSlider("Brick Padding", "brickPadding.xml", brixel.grid.getBrickPadding(), 1, 25, true);
    control_panel.enableEvents();
    
    
}

//--------------------------------------------------------------
void testApp::update(){
    float newHeight = control_panel.getValueI("brickHeightSlider.xml");
    float newWidth = control_panel.getValueI("brickWidthSlider.xml");
    float newPadding = control_panel.getValueI("brickPadding.xml"); 
    brixel.update();
    brixel.setAllBlockHeights(newHeight);
    brixel.setAllBlockWidths(newWidth);
    brixel.setBrickPadding(newPadding);
    
}

//--------------------------------------------------------------
void testApp::draw(){
    
    brixel.draw();
    
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