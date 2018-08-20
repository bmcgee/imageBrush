//
//  image_brush.hpp
//  imageBrush
//
//  Created by Brian McGee on 8/16/18.
//

#ifndef image_brush_hpp
#define image_brush_hpp

#include <stdio.h>

#pragma once

#include "ofMain.h"

#endif /* image_brush_hpp */

class imageBrush {
	
	public:
	
	void setup();
	void update();
	void draw(int x, int y);
	
	string path;
	ofPoint pos;
	vector<ofPoint> positions;
	vector<int> radii;
	
	ofImage image;
	
	imageBrush( string path );
};


