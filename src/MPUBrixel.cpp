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
    
    grid.setup();
    
}


void MPUBrixel::update() {
    grid.update();
    
}


void MPUBrixel::draw(){
    
    grid.draw();
    
}

void MPUBrixel::setAllBlockWidths(float val) {
    
    grid.setBrickWidth(val);
    
}

void MPUBrixel::setAllBlockHeights(float val) {
    
    grid.setBrickHeight(val);
    
}

void MPUBrixel::setBrickPadding(float val) {
    
    grid.setBrickPadding(val);
    
}