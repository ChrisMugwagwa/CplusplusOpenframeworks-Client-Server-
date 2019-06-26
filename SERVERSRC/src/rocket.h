#pragma once
#include "spark.h"

#include <vector>

class rocket {
public:
	rocket(float _x, float _explodeY);
	void update();
	void draw();
private:
	float x;
	float y;
	float dx;
	float dy;
	float r;
	float g;
	float b;
	float explodeY;
	std::vector <spark*> sparks;

};
