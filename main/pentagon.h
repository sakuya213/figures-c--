#ifndef Pentagon_h
#define Pentagon_h

class Pentagon: public Figure
{
private:
	Point points[4];
public:
	Pentagon(Point _a, Point _b, Point _c, Point _d, Point _e);
	double getCircumference();
	double getArea();
};
#endif