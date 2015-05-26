/**
 *  Description: 
 *				 
 *  Trail.h, created by Jamers Bentley on 07/05/2014.
 */

#pragma once
#include "ofMain.h"

class Ticker {
public:
	Ticker(int _fontSize = 20, float _speed = 0.5f, int width = ofGetWidth(), int height = 40);
	void draw(int _x, int _y);
	void update();
	bool loadFromFile(string _dataLoc);

private:
	unsigned long timer;
	float stepsPerMilli;
	int getFullTextWidth();
	ofImage graphic;
	int fullTextWidth;
	float step;
	float speed;
	ofFbo buffer;
	ofBuffer textBuffer;
	vector<string> events;
	ofTrueTypeFont font;
};
