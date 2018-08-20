//
//  image_brush.cpp
//  imageBrush
//
//  Created by Brian McGee on 8/16/18.
//

#include "image_brush.hpp"
#include "ofApp.h"

imageBrush::imageBrush( string _path ) {
	path = _path;
	image.load(path);
	
	
}

void imageBrush::setup() {
	
}

void imageBrush::update() {
	
}

void imageBrush::draw(int _x, int _y) {
	ofSetRectMode(OF_RECTMODE_CENTER);
	image.draw(_x, _y);
	
}
