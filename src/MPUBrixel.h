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
    void setBrickPadding(float val);
    
};
