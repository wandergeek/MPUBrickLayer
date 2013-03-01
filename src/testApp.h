#pragma once

#include "ofMain.h"
#include "MPUBrixel.h"
#include "ofxGui.h"

class testApp : public ofBaseApp{
	public:
		void setup();
		void update();
		void draw();
		
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y);
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
        MPUBrixel brixel;    
        float blockHeight;
        float blockWidth;
        float blockPadding;
        float oddOffset;
        float evenOffset;

    
    //Control panel
        ofxPanel gui;
        ofxFloatSlider blockHeightSlider;
        ofxFloatSlider blockWidthSlider;
        ofxFloatSlider blockPaddingSlider;
        ofxFloatSlider oddOffsetSlider;
        ofxFloatSlider evenOffsetSlider;
    bool bHide;




    private:
        void setupControlPanel();
        void updateFromControlPanel();
        int lastDragged;
};
