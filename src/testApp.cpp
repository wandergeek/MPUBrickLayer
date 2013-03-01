#include "testApp.h"


//--------------------------------------------------------------
void testApp::setup(){

    ofSetVerticalSync(true);
    
    brixel.setup();
    ofBackground(0);
    lastDragged = 0;
    
    //default values
    blockHeight = 40;
    blockWidth = 70;
    blockPadding = 1;
    oddOffset = 0;
    evenOffset = 0;
    
    bHide = false;
    
    
    setupControlPanel();
}

//--------------------------------------------------------------
void testApp::update(){
    updateFromControlPanel();
    brixel.update();

}

//--------------------------------------------------------------
void testApp::draw(){

    brixel.draw();
    if(!bHide){ gui.draw(); }
    
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

    if( key == 9 ){
		bHide = !bHide;
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


void testApp::setupControlPanel() {

    gui.setup("Global"); // most of the time you don't need a name
	gui.add(blockHeightSlider.setup( "Brick Height", blockHeight, 5, 300 ));  //	setup(sliderName,_val,_min,_max,width,height);
	gui.add(blockWidthSlider.setup( "Brick Width", blockWidth, 10, 300 ));
	gui.add(blockPaddingSlider.setup( "Brick Padding", 1, 1, 40 ));
    gui.add(oddOffsetSlider.setup( "Odd Row Offset", oddOffset, -100, 100 ));
    gui.add(evenOffsetSlider.setup( "Even Row Offset", oddOffset, -100, 100 ));
    
    
}

void testApp::updateFromControlPanel() {

    brixel.setAllBlockHeights(blockHeightSlider.value);
    brixel.setAllBlockWidths(blockWidthSlider.value);
    brixel.setAllBrickPadding(blockPaddingSlider.value);
    brixel.setEvenRowOffset(evenOffsetSlider.value);
    brixel.setOddRowOffset(oddOffsetSlider.value);
    
}



