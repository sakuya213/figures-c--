#ifndef trapeze_h
#define trapeze_h
#include "figure.h"
#include "point.h"

class Trapeze: public Figure
{
private: 
	Point points[3];

public:
	Trapeze(Point _a, Point _b, Point _c, Point _d);
	double getCircumference();
	double getArea();
};
#endif