#ifndef tetragon_h
#define tetragon_h
class Tetragon: public Figure
{
private: 
	Point points[3];

public:
	Tetragon(Point _a, Point _b, Point _c, Point _d);
	double getCircumference();
	double getArea();
};
