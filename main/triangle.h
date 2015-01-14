#ifndef triangle_h
#define triangle_h

class Triangle: public Figure
{
private:
	Point points[2];

public:	Triangle(Point _a, Point _b, Point _c);
		double getCircumference();
		double getArea();
};
#endif
