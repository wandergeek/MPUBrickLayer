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


void MPUBrixelRow::setup(int _numBlocks, int _yCoord, float _width, int _height,float _thickness ) {
    height = _height;
    yCoord = _yCoord;
    width = _width;
    numBlocks = _numBlocks;
    float blockWidth = _width/_numBlocks;


    blocks = new MPUBrixelBlock*[numBlocks];
    for(int i=0; i<width; i+=blockWidth) {
        blocks[i] = new MPUBrixelBlock();
        blocks[i]->setup(i,yCoord, blockWidth, height,_thickness);
    }

}


void MPUBrixelRow::update() {
    
}


void MPUBrixelRow::draw(){

    for(int i=0; i<numBlocks; i++ ) {
        blocks[i]->draw();
    }

}
