#pragma once

#include "ofMain.h"
#include "ofxGui.h"
#include "State.h"
#include "ofApp.h"



class GuiApp: public ofBaseApp {
public:
    void setup();
    void update();
    void draw();

    ofParameterGroup parameters;
    
    ofxPanel gui;

    shared_ptr<State> sharedState;
};


