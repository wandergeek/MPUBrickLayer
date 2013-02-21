//
//  MPUBrixelBlock.cpp
//  emptyExample
//
//  Created by Nick on 2/17/13.
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#include "MPUBrixelBlock.h"


MPUBrixelBlock::MPUBrixelBlock() {


}

MPUBrixelBlock::~MPUBrixelBlock() {
    
}


void MPUBrixelBlock::setup(int _x, int _y, int _width, int _height,float _thickness) {

    x = _x;
    y = _y;
    width = _width;
    height = _height;
    thickness=_thickness;

}


void MPUBrixelBlock::update() {
    
}


void MPUBrixelBlock::draw(){
    ofPushStyle();
    glLineWidth(thickness);
    ofRect(x, y, width, height);
    ofPopStyle();
}