//
//  MPUBrixel.h
//  emptyExample
//
//  Created by Nick on 2/17/13.
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#pragma once
#include "ofMain.h"
#include "MPUBrixelGrid.h"

class MPUBrixel {
    
    
public:
    
    MPUBrixel();
    ~MPUBrixel();
    void setup();
    void update();
    void draw();
    MPUBrixelGrid grid;
    void setAllBlockWidths(float val);
    void setAllBlockHeights(float val);
    void setAllBrickPadding(float val);
    void setOddRowOffset(float val);
    void setEvenRowOffset(float val);
    void selectRow(int y);
    void dragRow(int x);
    void dragSelectedGroup(int dist);
    int getSelectedRow();

    bool isRowSelected();
    
    
    MPUBrixelRow* getPtrRow();
    
    void setRowBlockHeight(float val);
    void setRowBlockWidth(float val);
    void setRowBrickPadding(float val);
    void setRowOffset(float val);
    
    

};
