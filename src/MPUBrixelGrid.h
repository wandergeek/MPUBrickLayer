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
    
    //------------------Setters------------------\\
    void setBrickWidth(float val);
    void setBrickHeight(float val);
    void setBrickPadding(float val);
    void setOddRowOffset(float val);
    void setEvenRowOffset(float val);
    
    //------------------Getters------------------\\
    float getEvenRowOffset();
    float getOddRowOffset();
    float getBrickPadding();
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
    float lineWidth;
    float oddRowOffset;
    float evenRowOffset;
    float brickPadding;
    
};
