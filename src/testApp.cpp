#include "testApp.h"


//--------------------------------------------------------------
void testApp::setup(){

    ofSetVerticalSync(true);
    
    brixel.setup();
    ofBackground(0);
    lastDragged = 0;
    
    //default values
    blockHeight = rowBlockHeight = 40;
    blockWidth = rowBlockWidth = 70;
    blockPadding = rowBlockPadding = 1;
    oddOffset = rowOffset = 0;
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
    
    if(!bHide){ 
        globalSettingsGUI.draw(); 
        if(brixel.getSelectedRow() != NOROWSELECTED) { rowSettingsGUI.draw(); }
    }
    
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
    
    if(bHide) {
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
    
    if(bHide) 
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

    globalSettingsGUI.setup("Global");
//    ofxPanel * ofxPanel::setup(string collectionName, string _filename, float x, float y){

	globalSettingsGUI.add(gblockHeightSlider.setup( "Brick Height", blockHeight, 5, 300 ));  //	setup(sliderName,_val,_min,_max,width,height);
	globalSettingsGUI.add(gblockWidthSlider.setup( "Brick Width", blockWidth, 10, 300 ));
	globalSettingsGUI.add(gblockPaddingSlider.setup( "Brick Padding", blockPadding, 1, 40 ));
    globalSettingsGUI.add(goddOffsetSlider.setup( "Odd Row Offset", oddOffset, -100, 100 ));
    globalSettingsGUI.add(gevenOffsetSlider.setup( "Even Row Offset", oddOffset, -100, 100 ));

    rowSettingsGUI.setup("Row", "settings.xml" ,10,500 );
    rowSettingsGUI.add(blockHeightSlider.setup( "Brick Height", rowBlockHeight, 5, 300 ));  
    rowSettingsGUI.add(blockWidthSlider.setup( "Brick Width", rowBlockWidth, 10, 300 ));
    rowSettingsGUI.add(blockPaddingSlider.setup( "Brick Padding", rowBlockPadding, 1, 40 ));
    rowSettingsGUI.add(rowOffsetSlider.setup( "Row Offset", rowOffset, -100, 100 ));

    
}
void testApp::updateFromControlPanel() {

   
    if(prevBlockHeight != gblockHeightSlider.value) {brixel.setAllBlockHeights(gblockHeightSlider.value); }
    prevBlockHeight = gblockHeightSlider.value;
    
    if(prevBlockWidth != gblockWidthSlider.value) {brixel.setAllBlockWidths(gblockWidthSlider.value); }
    prevBlockWidth = gblockWidthSlider.value;
    
    if(prevBlockPadding != gblockPaddingSlider.value) {brixel.setAllBrickPadding(gblockPaddingSlider.value); }
    prevBlockPadding = gblockPaddingSlider.value;
    
    if(prevOddOffset != goddOffsetSlider.value) { brixel.setOddRowOffset(goddOffsetSlider.value); }    
    prevOddOffset = goddOffsetSlider.value;

    if(prevEvenOffset != gevenOffsetSlider.value) {brixel.setEvenRowOffset(gevenOffsetSlider.value); }    
    prevEvenOffset = gevenOffsetSlider.value;
    
    
    if(brixel.getSelectedRow() != NOROWSELECTED) {
        
        MPUBrixelRow *selectedRow = brixel.getPtrRow();
        
        rowBlockHeight = selectedRow->getBlockHeight();
        rowBlockWidth = selectedRow->getBlockWidth();
        rowBlockPadding = selectedRow->getBlockPadding();
        rowOffset = selectedRow->getBlockOffset();
        brixel.setRowBlockHeight(blockHeightSlider.value);
        brixel.setRowBlockWidth(blockWidthSlider.value);
        brixel.setRowBrickPadding(blockPaddingSlider.value);
        brixel.setRowOffset(rowOffsetSlider.value);
    }
    
    

    
    
    
}



