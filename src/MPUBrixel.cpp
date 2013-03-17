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



//----------------Getters----------------\\



int MPUBrixel::getSelectedRow() {
    
    return grid.getSelectedRow();
    
}

MPUBrixelRow* MPUBrixel::getPtrRow() {
    return grid.getPtrRow();
}


//----------------Setters----------------\\

void MPUBrixel::setAllBlockWidths(float val) { grid.setAllBlockWidths(val); }
void MPUBrixel::setAllBlockHeights(float val) { grid.setAllBlockHeights(val); }
void MPUBrixel::setAllBrickPadding(float val) { grid.setAllBlockPadding(val); }
void MPUBrixel::setOddRowOffset(float val) { grid.setOddRowOffset(val); }
void MPUBrixel::setEvenRowOffset(float val) { grid.setEvenRowOffset(val); }

void MPUBrixel::setRowBlockHeight(float val) { grid.setRowBlockHeight(val); }
void MPUBrixel::setRowBlockWidth(float val) { grid.setRowBlockWidth(val); }
void MPUBrixel::setRowBrickPadding(float val) { grid.setRowBrickPadding(val); }
void MPUBrixel::setRowOffset(float val) { grid.setRowOffset(val); }

