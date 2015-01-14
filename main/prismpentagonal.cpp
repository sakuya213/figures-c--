#include "prismpentagonal.h"
#include "pointspatial.h"
#include "figurespatial.h"


PrismPentagonal::PrismPentagonal(PointSpatial _a, PointSpatial _b, PointSpatial _c, PointSpatial _d, PointSpatial _e, PointSpatial _f, PointSpatial _g, PointSpatial _h, PointSpatial _i, PointSpatial _j){
	this->points[0] = _a;
	this->points[1] = _b;
	this->points[2] = _c;
	this->points[3] = _d;
	this->points[4] = _e;
	this->points[5] = _f;
	this->points[6] = _g;
	this->points[7] = _h;
	this->points[8] = _i;
	this->points[9] = _j;
}
double PrismPentagonal::getCircumference()
{
	double cir = 0; // getCircumference
	for(int i=0;i<5;i++){ // base of the prism
		cir += sqrt(
			( points[(i)%5].getX() -  points[(i+1)%5].getX() ) * ( points[(i)%5].getX() - points[(i+1)%5].getX() ) + 
			( points[(i)%5].getY() -  points[(i+1)%5].getY() ) * ( points[(i)%5].getY() - points[(i+1)%5].getY() ) +
			( points[(i)%5].getZ() -  points[(i+1)%5].getZ() ) * ( points[(i)%5].getZ() - points[(i+1)%5].getZ() )
			); 
	}
	for(int i=5;i<10;i++){ // second base of the prism
		cir += sqrt(
			( points[(i)%5+5].getX() -  points[(i+1)%5+5].getX() ) * ( points[(i)%5+5].getX() - points[(i+1)%5+5].getX() ) + 
			( points[(i)%5+5].getY() -  points[(i+1)%5+5].getY() ) * ( points[(i)%5+5].getY() - points[(i+1)%5+5].getY() ) +
			( points[(i)%5+5].getZ() -  points[(i+1)%5+5].getZ() ) * ( points[(i)%5+5].getZ() - points[(i+1)%5+5].getZ() )
			); 
	}
	for(int i=0;i<5;i++){ //the side walls of the prism
		cir += sqrt(
			( points[i].getX() -  points[i+5].getX() ) * ( points[i].getX() - points[i+5].getX() ) + 
			( points[i].getY() -  points[i+5].getY() ) * ( points[i].getY() - points[i+5].getY() ) +
			( points[i].getZ() -  points[i+5].getZ() ) * ( points[i].getZ() - points[i+5].getZ() ));
	}

	return cir;
}
double PrismPentagonal::getVolume()
{
	double a = 0;
	a = sqrt(
		( points[0].getX() -  points[1].getX() ) * ( points[0].getX() - points[1].getX() ) + 
		( points[0].getY() -  points[1].getY() ) * ( points[0].getY() - points[1].getY() ) +
		( points[0].getZ() -  points[1].getZ() ) * ( points[0].getZ() - points[1].getZ() )); 

	double h = 0;
	h = sqrt(
		( points[0].getX() -  points[5].getX() ) * ( points[0].getX() - points[5].getX() ) + 
		( points[0].getY() -  points[5].getY() ) * ( points[0].getY() - points[5].getY() ) +
		( points[0].getZ() -  points[5].getZ() ) * ( points[0].getZ() - points[5].getZ() )); 

	double vol = 0;

	vol = a * a * sqrt(double(25 + 10 * sqrt(double(5)))) * h /4;

	return vol;
}
};