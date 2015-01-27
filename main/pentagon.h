#ifndef pentagon_h
#define pentagon_h
#include "figure.h"
#include "point.h"

class Pentagon: public Figure
{
private:
	Point points[5];
public:
	Pentagon(Point _a, Point _b, Point _c, Point _d, Point _e);
	virtual double getCircumference();
	virtual double getArea();
};
#endif