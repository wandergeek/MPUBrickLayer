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

//this is hideous -- maybe setup with minimal params and use sets to set rest?
void MPUBrixelRow::setup(int _numBlocks, int _yCoord, int _xCoord, float _width, int _height, float _blockPadding, int _gridHeight, int _gridWidth, bool _isEven ) {
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

    isEven = _isEven;

}


void MPUBrixelRow::update() { }


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


bool MPUBrixelRow::contains(int y) {

    if(y > yCoord && y < yCoord + height) {
        if(!selected) {
            selected = true;
        } else {
            selected = false;  //toggle
        }
    } else {
        selected = false;
    }

    if (selected)
        return true;
    else
        return false;

}

void MPUBrixelRow::dragRow(int x) {
        xOffset += x;
}



void MPUBrixelRow::setOffset(int val) { xOffset = val; }

void MPUBrixelRow::setBlockWidth(int val) { blockWidth = val; }

void MPUBrixelRow::setBlockHeight(int val) { height = val; }

void MPUBrixelRow::setBlockPadding(int val) { blockPadding = val; }