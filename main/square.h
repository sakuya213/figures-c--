#ifndef square_h
#define square_h
#include "figure.h"
#include "point.h"

class Square: public Figure
{
private:
	Point points[4];
public:
	Square(Point _a, Point _b, Point _c, Point _d);
	virtual double getCircumference();
	virtual double getArea();
};
#endif