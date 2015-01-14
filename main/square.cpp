#include "square.h"
#include "point.h"
#include "figure.h"

Square::Square(Point _a, Point _b, Point _c, Point _d){
	this->points[0] = _a;
	this->points[1] = _b;
	this->points[2] = _c;
	this->points[3] = _d;
}
double Square::getCircumference()
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
double Square::getArea()
{
	double area = 0; 
	area = sqrt(
		( points[0].getX() -  points[1].getX() ) * ( points[0].getX() - points[1].getX() ) + 
		( points[0].getY() -  points[1].getY() ) * ( points[0].getY() - points[1].getY() )
		); 
	return area * area;
}
};