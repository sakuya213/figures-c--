#ifndef trapeze_h
#define trapeze_h
#include "figure.h"
#include "point.h"

class Trapeze: public Figure
{
private: 
	Point points[4];

public:
	Trapeze(Point _a, Point _b, Point _c, Point _d);
	virtual double getCircumference();
	virtual double getArea();
};
#endif