#include "ofMain.h"
#include "ofApp.h"
#include "GuiApp.h"
#include "ofAppGLFWWindow.h"
#include "State.h"

//========================================================================
int main( ){
    ofGLFWWindowSettings settings;

    settings.setSize(600, 600);
    settings.setPosition(ofVec2f(600,0));
    settings.resizable = true;
    shared_ptr<ofAppBaseWindow> mainWindow = ofCreateWindow(settings);

    settings.setSize(600, 600);
    settings.setPosition(ofVec2f(0,0));
    settings.resizable = false;
    shared_ptr<ofAppBaseWindow> guiWindow = ofCreateWindow(settings);

    shared_ptr<ofApp> mainApp(new ofApp);
    shared_ptr<GuiApp> guiApp(new GuiApp);

    shared_ptr<State> sharedState(new State);
    mainApp->sharedState = sharedState;
    guiApp->sharedState = sharedState;
    //mainApp->gui = guiApp;

    ofRunApp(guiWindow, guiApp);
    ofRunApp(mainWindow, mainApp);
    ofRunMainLoop();

}
