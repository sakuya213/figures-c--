#ifndef point_h
#define point_h

class Point
{
private: 
	double x,y;
 
public:
	Point(double _x, double _y);
	Point();
	Point(const Point &_p);
 
	void setX(double _x);
	void setY(double _y);
	double getX();
	double getY();
};

#endif