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


void MPUBrixelRow::setup(int _numBlocks, int _yCoord, float _width, int _height,float blockPadding) {
    height = _height;
    yCoord = _yCoord;
    numBlocks = _numBlocks;
    width = _width;
    float blockWidth = _width/_numBlocks;


    blocks = new MPUBrixelBlock*[numBlocks];
    for(int i=0; i<numBlocks; i++) {
        blocks[i] = new MPUBrixelBlock();
        blocks[i]->setup(i*height,yCoord, blockWidth, height, blockPadding);
    }

}


void MPUBrixelRow::update() {
    
}


void MPUBrixelRow::draw(){

    for(int i=0; i<numBlocks; i++ ) {
        blocks[i]->draw();
    }

}


void MPUBrixelRow::getInfo() {

    cout << "I am a row, my height is: " << height << ", yCoord: " << yCoord << ", numblocks: " << numBlocks << "\n";

}