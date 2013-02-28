//
//  MPUBrick.cpp
//  emptyExample
//
//  Created by Nick on 2/17/13.
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#include "MPUBrixel.h"




MPUBrixel::MPUBrixel() {
    

    
}

MPUBrixel::~MPUBrixel() {
    
}


void MPUBrixel::setup() {
    grid.setup(ofGetHeight(), ofGetWidth(), 40, 70, 1 );
}

void MPUBrixel::update() {
//    grid.update();
    
}


void MPUBrixel::draw(){
    
    grid.draw();
    
}

void MPUBrixel::selectRow(int y) {
    grid.selectRow(y);
}


void MPUBrixel::dragSelectedGroup(int dist) {
    grid.dragSelectedGroup(dist);
}


void MPUBrixel::dragRow(int x) {

    grid.dragRow(x);

}

//bool MPUBrixel::isRowSelected() {
//    if(grid.getSelectedRow().) {
//
//    }
//}


//----------------Setters----------------\\

void MPUBrixel::setAllBlockWidths(float val) { grid.setAllBlockWidths(val); }

void MPUBrixel::setAllBlockHeights(float val) { grid.setAllBlockHeights(val); }

void MPUBrixel::setAllBrickPadding(float val) { grid.setAllBlockPadding(val); }

void MPUBrixel::setOddRowOffset(float val) { grid.setOddRowOffset(val); }

void MPUBrixel::setEvenRowOffset(float val) { grid.setEvenRowOffset(val); }