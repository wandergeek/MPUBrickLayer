//
//  MPUBrixelGrid.cpp
//  emptyExample
//
//  Created by Nick on 2/17/13.
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//


#include "MPUBrixelGrid.h"
#include "MPUBrixelRow.h"

#define MAX_BLOCKS_PER_ROW 100
#define MAX_BLOCKS_PER_COL 100


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
    rowWidth = MAX_BLOCKS_PER_ROW * blockWidth;

    int xOffset = -( (MAX_BLOCKS_PER_ROW * blockWidth) - gridWidth ) / 2;

    for (int i=0; i < MAX_BLOCKS_PER_COL; i++) {
        MPUBrixelRow row;
        row.setup(MAX_BLOCKS_PER_ROW, blockHeight*i, xOffset, rowWidth, blockHeight, blockPadding, gridHeight, gridWidth);
        rows.push_back(row);
    }
    
}


void MPUBrixelGrid::update() {
    bricksPerRow = gridWidth/ blockWidth + 1;
    bricksPerCol = gridHeight/ blockHeight + 1;
}


void MPUBrixelGrid::draw(){


    for (int i=0; i<rows.size(); i++){
        rows[i].draw();
    }

}

void MPUBrixelGrid::selectRow(int y) {

    for (int i=0; i<rows.size(); i++){
        rows[i].selectRow(y);
    }

}

void MPUBrixelGrid::dragRow(int x) {
    for (int i=0; i<rows.size(); i++){
        rows[i].dragRow(x);
    }
}


//------------------Setters------------------


void MPUBrixelGrid::setAllBrickWidths(float val) {

    for (int i=0; i<rows.size(); i++){
        rows[i].setBlockWidth(val);
    }

}

void MPUBrixelGrid::setAllBrickHeights(float val) {

    for (int i=0; i<rows.size(); i++){
        rows[i].setBlockHeight(val);
    }
}

void MPUBrixelGrid::setAllBlockPadding(float val) {

    for (int i=0; i<rows.size(); i++){
        rows[i].setBlockPadding(val);
    }

}

void MPUBrixelGrid::setOddRowOffset(float val) {

    for (int i=0; i<rows.size(); i++){
         if(i % 2 != 0 ) {
             rows[i].setOffset(val);
         }
    }
}

void MPUBrixelGrid::setEvenRowOffset(float val) {

    for (int i=0; i<rows.size(); i++){
        if(i % 2 == 0 ) {
            rows[i].setOffset(val);
        }
    }
}




//------------------Getters------------------


float MPUBrixelGrid::getBrickWidth() { return blockWidth; }

float MPUBrixelGrid::getBrickHeight() { return blockHeight; }

int MPUBrixelGrid::getGridWidth() { return gridWidth; }

int MPUBrixelGrid::getGridHeight() { return gridHeight; }

float MPUBrixelGrid::getBrickPadding() { return blockPadding; }

float MPUBrixelGrid::getEvenRowOffset() { return evenRowOffset; }

float MPUBrixelGrid::getOddRowOffset() { return oddRowOffset; } 



