//
//  MPUBrixelRow.cpp
//  emptyExample
//
//  Created by Nick on 2/17/13.
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#include "MPUBrixelRow.h"



MPUBrixelRow::MPUBrixelRow() {



}

MPUBrixelRow::~MPUBrixelRow() {
    
}

//this is hideous
void MPUBrixelRow::setup(int _numBlocks, int _yCoord, int _xCoord, float _width, int _height, float _blockPadding, int _gridHeight, int _gridWidth ) {
    width = _width;
    height = _height;
    gridWidth = _gridWidth;
    gridHeight = _gridHeight;
    yCoord = _yCoord;
    xCoord = _xCoord;
    numBlocks = _numBlocks;
    xOffset = 0;

    blockPadding = _blockPadding;
    blockWidth = _width/_numBlocks;
    selected = false;
}


void MPUBrixelRow::update() {
    
}


void MPUBrixelRow::draw(){

    ofPushStyle();
    ofNoFill();

    if(selected) {
        ofSetColor(255,0,0);
    } else {
        ofSetColor(255);
    }

    ofSetLineWidth(blockPadding);
    ofRect(xCoord, yCoord, width, height);
    for (int i=0; i<width; i+=blockWidth) {
        ofPoint p1, p2;
        p1.set(i+xOffset, yCoord);
        p2.set(i+xOffset, yCoord+height);
        ofLine(p1, p2);
    }
    ofPopStyle();

}




void MPUBrixelRow::getInfo() {
    cout << "I am a row, my height is: " << height << ", yCoord: " << yCoord << ", numblocks: " << numBlocks << "\n";
}

void MPUBrixelRow::setBlockWidth(int val) {

    blockWidth = val;

}

void MPUBrixelRow::setBlockHeight(int val) {

    height = val;

}

void MPUBrixelRow::setBlockPadding(int val) { blockPadding = val; }

void MPUBrixelRow::setOffset(int val) {
    xOffset = val;
}

void MPUBrixelRow::selectRow(int y) {

    if(y > yCoord && y < yCoord + height) {
        if(!selected) {
            selected = true;   
        } else {
            selected = false;  //toggle
        }
    } else {
        selected = false;
    }
}

void MPUBrixelRow::dragRow(int x) {
    if(selected) {
        xOffset += x;
    }
}