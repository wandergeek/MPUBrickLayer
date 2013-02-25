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
    void setup(int _numBlocks, int _yCoord, int _xCoord, float _width, int _height,float _blockPadding, int _gridHeight, int _gridWidth, bool _isEven );
    void update();
    void draw();
    void setBlockWidth(int val);
    void setBlockHeight(int val);
    void setBlockPadding(int val);
    void setOffset(int val);
    bool contains(int y);
    void dragRow(int x);
    bool isEven;
    bool selected;
    void getInfo();

private:
    int numBlocks;
    int yCoord;
    int xCoord;
    int width;
    int height;
    int blockPadding;
    int blockWidth;
    int gridHeight;
    int gridWidth;
    int xOffset;
    int ID;
  

};
