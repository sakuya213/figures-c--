#include "Pentagon.h"
#include "point.h"
#include "figure.h"

Pentagon::Pentagon(Point _a, Point _b, Point _c, Point _d, Point _e){
	this->points[0] = _a;
	this->points[1] = _b;
	this->points[2] = _c;
	this->points[3] = _d;
	this->points[4] = _e;
}
double Pentagon::getCircumference()
{
	double cir = 0;
	for(int i=0;i<5;i++){ 
		cir += sqrt(
			( points[(i)%5].getX() -  points[(i+1)%5].getX() ) * ( points[(i)%5].getX() - points[(i+1)%5].getX() ) + 
			( points[(i)%5].getY() -  points[(i+1)%5].getY() ) * ( points[(i)%5].getY() - points[(i+1)%5].getY() )
			); 
	}
	return cir;
}
double Pentagon::getArea()
{
	double area = 0; 
	area = sqrt(
		( points[0].getX() -  points[1].getX() ) * ( points[0].getX() - points[1].getX() ) + 
		( points[0].getY() -  points[1].getY() ) * ( points[0].getY() - points[1].getY() )
		); 
	return area * area * sqrt(double(25 + 10 * sqrt(double(5)))) / 4;
}
};