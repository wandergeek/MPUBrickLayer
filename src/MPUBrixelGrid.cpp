//
//  MPUBrixelGrid.cpp
//  emptyExample
//
//  Created by Nick on 2/17/13.
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//


#include "MPUBrixelGrid.h"


MPUBrixelGrid::MPUBrixelGrid() {


    
}

MPUBrixelGrid::~MPUBrixelGrid() {
    
}


void MPUBrixelGrid::setup() {
    
    gridHeight = ofGetHeight();
    gridWidth = ofGetWidth();
    brickWidth = 80;
    brickHeight = 40;
    bricksPerRow = gridWidth/brickWidth + 1;
    bricksPerCol = gridHeight/brickHeight + 1;
    brickPadding = 1;
    
}


void MPUBrixelGrid::update() {
    bricksPerRow = gridWidth/brickWidth + 1;
    bricksPerCol = gridHeight/brickHeight + 1;
}


void MPUBrixelGrid::draw(){
    ofPushStyle();
    ofNoFill();
    ofSetColor(255);
    ofSetLineWidth(brickPadding);
    
    //Rows
    for(int i=0; i<bricksPerRow; i++) {
        ofPoint p1, p2;
        p1.set(i*brickWidth, 1);
        p2.set(i*brickWidth, gridHeight);
        ofLine(p1,p2);
    }

    //Cols
    for(int i=0; i<bricksPerCol; i++) {
        ofPoint p1, p2;
        p1.set(1, i*brickHeight);
        p2.set(gridWidth, i*brickHeight);
        ofLine(p1,p2);
    }
    
    ofPopStyle();
}


//------------------Setters------------------\\

void MPUBrixelGrid::setBrickWidth(float val) { brickWidth = val; }

void MPUBrixelGrid::setBrickHeight(float val) { brickHeight = val; }

void MPUBrixelGrid::setBrickPadding(float val) { brickPadding = val; }



//------------------Getters------------------\\

float MPUBrixelGrid::getBrickWidth() { return brickWidth; }

float MPUBrixelGrid::getBrickHeight() { return brickHeight; }

int MPUBrixelGrid::getGridWidth() { return gridWidth; }

int MPUBrixelGrid::getGridHeight() { return gridHeight; }

float MPUBrixelGrid::getBrickPadding() { return brickPadding; }


