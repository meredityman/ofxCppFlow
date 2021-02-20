#include "ofApp.h"


using namespace ofxCppFlow;

//--------------------------------------------------------------
void ofApp::setup(){
    int camWidth = 320;  // try to grab at this size.
    int camHeight = 240;

    string modelPath = ofFilePath::getAbsolutePath("posenet_mobilenet_v1_100_257x257_multi_kpt_stripped.tflite");
    model = new Model(modelPath);
    model->init();

    // Tensor input_a{model, "input_a"};
    // Tensor input_b{model, "input_b"};
    // Tensor output{model, "result"};

    // std::vector<float> data(100);
    // std::iota(data.begin(), data.end(), 0);

    // input_a.set_data(data);
    // input_b.set_data(data);

    // model.run({&input_a, &input_b}, output);
    // for (float f : output.get_data<float>()) {
    //     std::cout << f << " ";
    // }

    vidGrabber.setDeviceID(0);
    vidGrabber.setDesiredFrameRate(60);
    vidGrabber.initGrabber(camWidth, camHeight);
}

//--------------------------------------------------------------
void ofApp::update(){
    vidGrabber.update();


    if(vidGrabber.isFrameNew()){

    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    vidGrabber.draw(20, 20);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
