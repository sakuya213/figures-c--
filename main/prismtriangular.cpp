#include "prismtriangular.h"
#include <cmath>

PrismTriangular::PrismTriangular(PointSpatial _a, PointSpatial _b, PointSpatial _c, PointSpatial _d, PointSpatial _e, PointSpatial _f){
	this->points[0] = _a;
	this->points[1] = _b;
	this->points[2] = _c;
	this->points[3] = _d;
	this->points[4] = _e;
	this->points[5] = _f;
}
double PrismTriangular::getCircumference()
{
	double cir = 0; // getCircumference
	for(int i=0;i<3;i++){ // base of the prism
		cir += sqrt(
			( points[(i)%3].getX() -  points[(i+1)%3].getX() ) * ( points[(i)%3].getX() - points[(i+1)%3].getX() ) + 
			( points[(i)%3].getY() -  points[(i+1)%3].getY() ) * ( points[(i)%3].getY() - points[(i+1)%3].getY() ) +
			( points[(i)%3].getZ() -  points[(i+1)%3].getZ() ) * ( points[(i)%3].getZ() - points[(i+1)%3].getZ() )
			); 
	}
	for(int i=3;i<6;i++){ // second base of the prism
		cir += sqrt(
			( points[(i)%3+3].getX() -  points[(i+1)%3+3].getX() ) * ( points[(i)%3+3].getX() - points[(i+1)%3+3].getX() ) + 
			( points[(i)%3+3].getY() -  points[(i+1)%3+3].getY() ) * ( points[(i)%3+3].getY() - points[(i+1)%3+3].getY() ) +
			( points[(i)%3+3].getZ() -  points[(i+1)%3+3].getZ() ) * ( points[(i)%3+3].getZ() - points[(i+1)%3+3].getZ() )
			); 
	}
	for(int i=0;i<3;i++){ //the side walls of the prism
		cir += sqrt(
			( points[i].getX() -  points[i+3].getX() ) * ( points[i].getX() - points[i+3].getX() ) + 
			( points[i].getY() -  points[i+3].getY() ) * ( points[i].getY() - points[i+3].getY() ) +
			( points[i].getZ() -  points[i+3].getZ() ) * ( points[i].getZ() - points[i+3].getZ() ));
	}
	return cir;
}
double PrismTriangular::getVolume()
{
	double a = 0;
	a = sqrt(
		( points[0].getX() -  points[1].getX() ) * ( points[0].getX() - points[1].getX() ) + 
		( points[0].getY() -  points[1].getY() ) * ( points[0].getY() - points[1].getY() ) +
		( points[0].getZ() -  points[1].getZ() ) * ( points[0].getZ() - points[1].getZ() )); 

	double h = 0;
	h = sqrt(
		( points[0].getX() -  points[3].getX() ) * ( points[0].getX() - points[3].getX() ) + 
		( points[0].getY() -  points[3].getY() ) * ( points[0].getY() - points[3].getY() ) +
		( points[0].getZ() -  points[3].getZ() ) * ( points[0].getZ() - points[3].getZ() )); 

	double vol = 0;

	vol = a * a * sqrt(double(3)) * h /4;

	return vol;
}

