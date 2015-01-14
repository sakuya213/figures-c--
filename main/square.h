#ifndef square_h
#define square_h
class Square: public Figure
{
private:
	Point points[3];
public:
	Square(Point _a, Point _b, Point _c, Point _d);
	double getCircumference();
	double getArea();
};
#endif