#ifndef diamond_h
#define diamond_h


class Diamond: public Figure
{
private: 
	Point points[3];

public:
	Diamond(Point _a, Point _b, Point _c, Point _d);
	double getCircumference();
	double getArea();
};

#endif