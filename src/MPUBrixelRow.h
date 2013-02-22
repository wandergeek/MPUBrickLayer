//
//  MPUBrixelRow.h
//  emptyExample
//
//  Created by Nick on 2/17/13.
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#pragma once
#include "ofMain.h"
#include "MPUBrixelBlock.h"

class MPUBrixelRow {
    
    
public:

    MPUBrixelRow();
    ~MPUBrixelRow();
    void setup(int _numBlocks, int _yCoord, float _width, int _height,float blockPadding);
    void update();
    void draw();
    void getInfo();



private:
    MPUBrixelBlock** blocks;
    int numBlocks;
    int yCoord;
    int width;
    int height;
};
