#include "testApp.h"


//--------------------------------------------------------------
void testApp::setup(){
    
    brixel.setup();
    ofBackground(0);
    setupControlPanel();
    lastDragged = 0;
}

//--------------------------------------------------------------
void testApp::update(){
    updateFromControlPanel();
    brixel.update();

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

    if(control_panel.hidden) {
        if( lastDragged != 0) {
            int dragDist = x - lastDragged;
//            brixel.dragSelectedGroup(dragDist);
            brixel.dragRow(dragDist);
        }

        lastDragged = x;
    }

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
    
    if(control_panel.hidden) 
        brixel.selectRow(y);

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


void testApp::setupControlPanel() {
    control_panel.setup();
    control_panel.addPanel("Global Settings");
    control_panel.addSlider("Brick Height", brixel.grid.getBrickHeight(), 1, 200, true);
    control_panel.addSlider("Brick Width", brixel.grid.getBrickWidth(), 1, 200, true);
    control_panel.addSlider("Brick Padding", brixel.grid.getBrickPadding(), 1, 25, false);
    control_panel.addSlider("Odd Row Offset", brixel.grid.getOddRowOffset(), -brixel.grid.getBrickWidth(), brixel.grid.getBrickWidth(), false);
    control_panel.addSlider("Even Row Offset", brixel.grid.getEvenRowOffset(), -brixel.grid.getBrickWidth(), brixel.grid.getBrickWidth(), false);
    control_panel.setupEvents();
    control_panel.enableEvents();
}

void testApp::updateFromControlPanel() {
    float newOddOffset = control_panel.getValueI("Odd Row Offset");
    float newEvenOffset = control_panel.getValueI("Even Row Offset");
    float newHeight = control_panel.getValueI("Brick Height");
    float newWidth = control_panel.getValueI("Brick Width");
    float newPadding = control_panel.getValueI("Brick Padding");


    //updating needs to be event based

//    if(control_panel.hasValueChangedInPanel("panel")) {      //for some reason this reports as always changing
//
//        brixel.setAllBlockHeights(newHeight);
//        brixel.setAllBlockWidths(newWidth);
//        brixel.setAllBrickPadding(newPadding);
//        brixel.setEvenRowOffset(newEvenOffset);
//        brixel.setOddRowOffset(newOddOffset);
//
//    }




}