#include "ofApp.h"

using namespace ofxCppFlow;

//--------------------------------------------------------------
void ofApp::setup(){
    string modelPath = ofFilePath::getAbsolutePath("model.pb");
    Model model(modelPath);
    model.init();

    Tensor input_a{model, "input_a"};
    Tensor input_b{model, "input_b"};
    Tensor output{model, "result"};

    std::vector<float> data(100);
    std::iota(data.begin(), data.end(), 0);

    input_a.set_data(data);
    input_b.set_data(data);

    model.run({&input_a, &input_b}, output);
    for (float f : output.get_data<float>()) {
        std::cout << f << " ";
    }
    std::cout << std::endl;
}
//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
