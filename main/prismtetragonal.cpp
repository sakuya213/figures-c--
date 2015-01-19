#include "prismtetragonal.h"
#include "pointspatial.h"
#include "figurespatial.h"
#include <cmath>

PrismTetragonal::PrismTetragonal(PointSpatial _a, PointSpatial _b, PointSpatial _c, PointSpatial _d, PointSpatial _e, PointSpatial _f, PointSpatial _g, PointSpatial _h){
	this->points[0] = _a;
	this->points[1] = _b;
	this->points[2] = _c;
	this->points[3] = _d;
	this->points[4] = _e;
	this->points[5] = _f;
	this->points[6] = _g;
	this->points[7] = _h;
}
double PrismTetragonal::getCircumference()
{
	double cir = 0; // getCircumference
	for(int i=0;i<4;i++){ // base of the prism
		cir += sqrt(
			( points[(i)%4].getX() -  points[(i+1)%4].getX() ) * ( points[(i)%4].getX() - points[(i+1)%4].getX() ) + 
			( points[(i)%4].getY() -  points[(i+1)%4].getY() ) * ( points[(i)%4].getY() - points[(i+1)%4].getY() ) +
			( points[(i)%4].getZ() -  points[(i+1)%4].getZ() ) * ( points[(i)%4].getZ() - points[(i+1)%4].getZ() )
			); 
	}
	for(int i=4;i<8;i++){ // second base of the prism
		cir += sqrt(
			( points[(i)%4+4].getX() -  points[(i+1)%4+4].getX() ) * ( points[(i)%4+4].getX() - points[(i+1)%4+4].getX() ) + 
			( points[(i)%4+4].getY() -  points[(i+1)%4+4].getY() ) * ( points[(i)%4+4].getY() - points[(i+1)%4+4].getY() ) +
			( points[(i)%4+4].getZ() -  points[(i+1)%4+4].getZ() ) * ( points[(i)%4+4].getZ() - points[(i+1)%4+4].getZ() )
			); 
	}
	for(int i=0;i<4;i++){ //the side walls of the prism
		cir += sqrt(
			( points[i].getX() -  points[i+4].getX() ) * ( points[i].getX() - points[i+4].getX() ) + 
			( points[i].getY() -  points[i+4].getY() ) * ( points[i].getY() - points[i+4].getY() ) +
			( points[i].getZ() -  points[i+4].getZ() ) * ( points[i].getZ() - points[i+4].getZ() ));
	}

	return cir;
}
double PrismTetragonal::getVolume()
{
	double a = 0;
	a = sqrt(
		( points[0].getX() -  points[1].getX() ) * ( points[0].getX() - points[1].getX() ) + 
		( points[0].getY() -  points[1].getY() ) * ( points[0].getY() - points[1].getY() ) +
		( points[0].getZ() -  points[1].getZ() ) * ( points[0].getZ() - points[1].getZ() )); 

	double h = 0;
	h = sqrt(
		( points[0].getX() -  points[4].getX() ) * ( points[0].getX() - points[4].getX() ) + 
		( points[0].getY() -  points[4].getY() ) * ( points[0].getY() - points[4].getY() ) +
		( points[0].getZ() -  points[4].getZ() ) * ( points[0].getZ() - points[4].getZ() )); 

	double vol = 0;

	vol = a * a * h;

	return vol;
}