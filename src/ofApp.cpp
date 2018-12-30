#include "ofApp.h"

float x;

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundColor(78,25,187);  //背景 r,g,b
    x = 0.0;
    ofSetBackgroundAuto(false); // 軌跡を残す = アニメーションで線を描ける

}

//--------------------------------------------------------------
void ofApp::update(){ // 変数の更新 = アニメーション
    
    if (x < 800) {
        x += 0.2;
    }else if(x >= 800) {
        x = 0.0;
    }
    


}

//--------------------------------------------------------------
void ofApp::draw(){ // 図形の描写
    ofDrawBitmapStringHighlight("Everything works!", 20, 20);
    ofDrawLine(10,10,100,100);
    ofDrawCircle(200,200,100); //円 x,y,半径
    ofEnableAlphaBlending();
    ofDrawRectRounded( 10 + x, 10, 100, 100, 50 ); //角丸 x,y,width,height,radius
    
    ofEnableAlphaBlending();    // turn on alpha blending
    ofSetColor(255,0,0,50);    // red, 50% transparent
    ofDrawRectangle(20,20,100,100);
    ofDisableAlphaBlending();   // アルファブレンディングを特定の図形にだけ適応させる(これ消すと全図形にアルファブレンディング適応)
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
