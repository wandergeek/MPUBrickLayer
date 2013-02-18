//
//  MPUBrixelGrid.h
//  emptyExample
//
//  Created by Nick on 2/17/13.
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#pragma once
#include "ofMain.h"

class MPUBrixelGrid {
    
    
public:
    
    MPUBrixelGrid();
    ~MPUBrixelGrid();
    void setup();
    void update();
    void draw();
    void setBrickWidth(float brickWidth);
    void setBrickHeight(float brickHeight);
    float getBrickWidth();
    float getBrickHeight();
    int getGridWidth();
    int getGridHeight();
    
private:

    int gridWidth;
    int gridHeight;
    float brickWidth;
    float brickHeight;
    int bricksPerRow;
    int bricksPerCol;

};
