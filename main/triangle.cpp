#include "triangle.h"
#include "point.h"
#include "figure.h"

Triangle::Triangle(Point _a, Point _b, Point _c){
	this->points[0] = _a;
	this->points[1] = _b;
	this->points[2] = _c;
}
double Triangle::getCircumference()
{
	double cir = 0;
	for(int i=0;i<3;i++){ // cir triangle
		cir += sqrt(
			( points[(i)%3].getX() -  points[(i+1)%3].getX() ) * ( points[(i)%3].getX() - points[(i+1)%3].getX() ) + 
			( points[(i)%3].getY() -  points[(i+1)%3].getY() ) * ( points[(i)%3].getY() - points[(i+1)%3].getY() )
			); 
	}
	return cir;
}
double Triangle::getArea()
{
	double area = 0;
	area = sqrt(
		( points[0].getX() -  points[1].getX() ) * ( points[0].getX() - points[1].getX() ) + 
		( points[0].getY() -  points[1].getY() ) * ( points[0].getY() - points[1].getY() )
		); 
	return area * area * sqrt(double(3)) /4;
}
};