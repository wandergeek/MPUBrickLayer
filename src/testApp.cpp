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
    control_panel.addSlider("Odd Row Offset", "oddRowOffset.xml", brixel.grid.getOddRowOffset(), -25, 25, true);
    control_panel.addSlider("Even Row Offset", "evenRowOffset.xml", brixel.grid.getEvenRowOffset(), -25, 25, true);
    control_panel.enableEvents();
    
    cout << "GridWidth: "<< ofGetWidth() << " GridHeight " << ofGetHeight();
}

//--------------------------------------------------------------
void testApp::update(){
    float newOddOffset = control_panel.getValueI("oddRowOffset.xml");
    float newEvenOffset = control_panel.getValueI("evenRowOffset.xml");
    float newHeight = control_panel.getValueI("brickHeightSlider.xml");
    float newWidth = control_panel.getValueI("brickWidthSlider.xml");
    float newPadding = control_panel.getValueI("brickPadding.xml"); 
    brixel.update();
    brixel.setAllBlockHeights(newHeight);
    brixel.setAllBlockWidths(newWidth);
    brixel.setBrickPadding(newPadding);
    brixel.setEvenRowOffset(newEvenOffset);
    brixel.setOddRowOffset(newOddOffset);
    
}

//--------------------------------------------------------------
void testApp::draw(){
    
    brixel.draw();
    
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

    if(key == 357) { //up
        float newHeight = brixel.grid.getBrickHeight();
        brixel.setAllBlockHeights(++newHeight);
    } else if (key == 359) { //down
        float newHeight = brixel.grid.getBrickHeight();
        brixel.setAllBlockHeights(--newHeight);
    } else if (key == 356 ) { //left
        float newWidth = brixel.grid.getBrickWidth();
        brixel.setAllBlockWidths(--newWidth);
    } else if (key == 358) { //right
        float newWidth = brixel.grid.getBrickWidth();
        brixel.setAllBlockWidths(++newWidth);
    }


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