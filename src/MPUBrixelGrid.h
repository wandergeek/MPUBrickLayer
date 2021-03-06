//
//  MPUBrixelGrid.h
//  emptyExample
//
//  Created by Nick on 2/17/13.
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#pragma once
#include "ofMain.h"
#include "MPUBrixelRow.h"
#define NOROWSELECTED -1

class MPUBrixelGrid {
    
    
public:
    
    MPUBrixelGrid();
    ~MPUBrixelGrid();
    void setup(int _gridHeight, int _gridWidth, int _blockHeight, int _blockWidth, float _blockPadding );
    void update();
    void draw();
    void selectRow(int y);
    void dragRow(int x);
    void dragSelectedGroup(int dist);
    int ptrRowTest();
    
    
    //------------------Setters------------------\\

    void setAllBlockWidths(float val);
    void setAllBlockHeights(float val);
    void setAllBlockPadding(float val);
    void setOddRowOffset(float val);
    void setEvenRowOffset(float val);
    void setRowBlockHeight(float val);
    void setRowBlockWidth(float val);
    void setRowBrickPadding(float val);
    void setRowOffset(float val);
    void setBlockHeight(float val);
    
    //------------------Getters------------------\\

    float getEvenRowOffset();
    float getOddRowOffset();
    float getBrickPadding();
    float getBrickWidth();
    float getBrickHeight();
    int getGridWidth();
    int getGridHeight();
    int getSelectedRow();
    MPUBrixelRow* getPtrRow();

    
private:


    vector <MPUBrixelRow> rows;
    int gridWidth;
    int gridHeight;
    float blockWidth;
    float blockHeight;
    int bricksPerRow;
    int bricksPerCol;
    float lineWidth;
    float oddRowOffset;
    float evenRowOffset;
    float blockPadding;
    int rowWidth;
    int selectedRow;
};
