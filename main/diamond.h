#ifndef diamond_h
#define diamond_h
#include "figure.h"
#include "point.h"

class Diamond: public Figure
{
private: 
	Point points[4];

public:
	Diamond(Point _a, Point _b, Point _c, Point _d);
	virtual double getCircumference();
	virtual double getArea();
};

#endif