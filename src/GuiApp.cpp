/*
 * GuiApp.cpp
 *
 *  Created on: Oct 28, 2014
 *      Author: arturo
 */

#include "GuiApp.h"

void GuiApp::setup(){
    parameters.setName("parameters");
    parameters.add(sharedState->radius.set("radius",50,1,100));
    parameters.add(sharedState->color.set("color",100,ofColor(0,0),255));
    gui.setup(parameters);
    ofBackground(0);
    ofSetVerticalSync(false);
}

void GuiApp::update(){

}

void GuiApp::draw(){
    ofSetColor(sharedState->color);
    ofDrawCircle(ofGetWidth()*0.5, ofGetWidth()*0.5, sharedState->radius);

    gui.draw();
}
