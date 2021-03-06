#include "trapeze.h"
#include "point.h"
#include "figure.h"
#include <cmath>

Trapeze::Trapeze(Point _a, Point _b, Point _c, Point _d){
	this->points[0] = _a;
	this->points[1] = _b;
	this->points[2] = _c;
	this->points[3] = _d;
}
double Trapeze::getCircumference()
{
	double cir = 0; 
	for(int i=0;i<4;i++){
		cir += sqrt(
			( points[(i)%4].getX() -  points[(i+1)%4].getX() ) * ( points[(i)%4].getX() - points[(i+1)%4].getX() ) + 
			( points[(i)%4].getY() -  points[(i+1)%4].getY() ) * ( points[(i)%4].getY() - points[(i+1)%4].getY() )
			); 
	}
	return cir;
}
double Trapeze::getArea()
{
	double area = 0; 
	area = sqrt(
		( points[0].getX() -  points[1].getX() ) * ( points[0].getX() - points[1].getX() ) + 
		( points[0].getY() -  points[1].getY() ) * ( points[0].getY() - points[1].getY() )
		); 
	double area2 = 0; 
	area2 = sqrt(
		( points[2].getX() -  points[3].getX() ) * ( points[2].getX() - points[3].getX() ) + 
		( points[2].getY() -  points[3].getY() ) * ( points[2].getY() - points[3].getY() )
		);

	double h = 0;
	h = points[3].getY() - points[0].getY();

	return (area + area2) * h / 2;
}