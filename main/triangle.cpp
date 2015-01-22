#include "triangle.h"
#include "point.h"
#include "figure.h"
#include <cmath>

Triangle::Triangle(Point _a, Point _b, Point _c){
	this->points[0] = _a;
	this->points[1] = _b;
	this->points[2] = _c;
}
double Triangle::getCircumference()
{
	double cir = 0;
	int a,b;
	for(int i=0;i<3;i++){ // cir triangle
		a = (i%3);
		b = ((i+1)%3);
		cir += sqrt(
			( points[a].getX() -  points[b].getX() ) * ( points[a].getX() - points[b].getX() ) + 
			( points[a].getY() -  points[b].getY() ) * ( points[a].getY() - points[b].getY() )
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
	return area * area * sqrt(double(3)) /((double)4);
}