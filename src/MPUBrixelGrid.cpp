//
//  MPUBrixelGrid.cpp
//  emptyExample
//
//  Created by Nick on 2/17/13.
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//


#include "MPUBrixelGrid.h"
#include "MPUBrixelRow.h"

#define MAX_BLOCKS_PER_ROW 500
#define MAX_BLOCKS_PER_COL 500


MPUBrixelGrid::MPUBrixelGrid() {


    
}

MPUBrixelGrid::~MPUBrixelGrid() {
    
}


void MPUBrixelGrid::setup(int _gridHeight, int _gridWidth, int _blockHeight, int _blockWidth, float _blockPadding ) {
    
    gridHeight = _gridHeight;
    gridWidth = _gridWidth;
    blockWidth = _blockWidth;
    blockHeight = _blockHeight;
    blockPadding = _blockPadding;
    oddRowOffset = 0;
    evenRowOffset = 0;
    bricksPerRow = gridWidth/ blockWidth + 1;
    bricksPerCol = gridHeight/ blockHeight + 1;

    for (int i=0; i < MAX_BLOCKS_PER_COL; i++) {
        MPUBrixelRow row;
        row.setup(MAX_BLOCKS_PER_ROW, blockHeight*i, blockWidth, blockHeight, blockPadding);
        rows.push_back(row);
    }

    for (int i=0; i<rows.size(); i++){
        rows[i].getInfo();
    }
    
}


void MPUBrixelGrid::update() {
    bricksPerRow = gridWidth/ blockWidth + 1;
    bricksPerCol = gridHeight/ blockHeight + 1;
}


void MPUBrixelGrid::draw(){
//    ofPushStyle();
//    ofNoFill();
//    ofSetColor(255);
//    ofSetLineWidth(brickPadding);
//
//    //Rows
//    for(int i=0; i<bricksPerRow; i++) {
//        ofPoint p1, p2;
//        p1.set(i*blockWidth, 1);
//        p2.set(i*blockWidth, gridHeight);
//        ofLine(p1,p2);
//    }
//
//    //Cols
//
//    for(int i=0; i<bricksPerCol; i++) {
//        ofPoint p1, p2;
//        p1.set(1, i*blockHeight);
//        p2.set(gridWidth, i*blockHeight);
//        ofPushMatrix();
//        if(i % 2 == 0) {
//            ofTranslate(evenRowOffset, 0);
//        } else {
//            ofTranslate(oddRowOffset, 0);
//        }
//        ofLine(p1,p2);
//        ofPopMatrix();
//    }
//
//    ofPopStyle();
}


//------------------Setters------------------


void MPUBrixelGrid::setBrickWidth(float val) { blockWidth = val;  }

void MPUBrixelGrid::setBrickHeight(float val) { blockHeight = val; }

void MPUBrixelGrid::setBrickPadding(float val) { blockPadding = val; }

void MPUBrixelGrid::setOddRowOffset(float val) { oddRowOffset = val; }

void MPUBrixelGrid::setEvenRowOffset(float val) { evenRowOffset = val; }



//------------------Getters------------------


float MPUBrixelGrid::getBrickWidth() { return blockWidth; }

float MPUBrixelGrid::getBrickHeight() { return blockHeight; }

int MPUBrixelGrid::getGridWidth() { return gridWidth; }

int MPUBrixelGrid::getGridHeight() { return gridHeight; }

float MPUBrixelGrid::getBrickPadding() { return blockPadding; }

float MPUBrixelGrid::getEvenRowOffset() { return evenRowOffset; }

float MPUBrixelGrid::getOddRowOffset() { return oddRowOffset; } 



