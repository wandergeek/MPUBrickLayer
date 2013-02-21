//
//  MPUBrixelBlock.h
//  emptyExample
//
//  Created by Nick on 2/17/13.
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//


#pragma once
#include "ofMain.h"

class MPUBrixelBlock {
    
    
public:
    
    MPUBrixelBlock();
    ~MPUBrixelBlock();
    void setup(int _x, int _y, int _width, int _height,float thickness);
    void update();
    void draw();

private:
    int x;
    int y;
    bool activated;
    float height;
    float width;
    float thickness;

    
};
