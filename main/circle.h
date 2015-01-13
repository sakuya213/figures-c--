#ifndef circle_h
#define circle_h
#define M_PI 3.14159265358979323846

class Circle: public Figure
{
private:
	double r; // r = radius
	Point a;
public:
	Circle(Point _a, double _r);
		void setA(Point _a);
		void setR(double _r);
		Point getA();
		double getR();
		double getArea();
		
};

#endif