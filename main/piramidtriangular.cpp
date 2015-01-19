#include "piramidtriangular.h"
#include <cmath>

PyramidTriangular::PyramidTriangular(PointSpatial _a, PointSpatial _b, PointSpatial _c, PointSpatial _d){
	this->points[0] = _a;
	this->points[1] = _b;
	this->points[2] = _c;
	this->points[3] = _d;
}
double PyramidTriangular::getCircumference()
{
	double cir = 0;
	for(int i=0;i<3;i++){ // base of the pyramid
		cir += sqrt(
			( points[(i)%3].getX() -  points[(i+1)%3].getX() ) * ( points[(i)%3].getX() - points[(i+1)%3].getX() ) + 
			( points[(i)%3].getY() -  points[(i+1)%3].getY() ) * ( points[(i)%3].getY() - points[(i+1)%3].getY() ) +
			( points[(i)%3].getZ() -  points[(i+1)%3].getZ() ) * ( points[(i)%3].getZ() - points[(i+1)%3].getZ() )
			); 
	}
	for(int i=0;i<3;i++){ //the side walls of the pyramid
		cir += sqrt(
			( points[i].getX() -  points[3].getX() ) * ( points[i].getX() - points[3].getX() ) + 
			( points[i].getY() -  points[3].getY() ) * ( points[i].getY() - points[3].getY() ) +
			( points[i].getZ() -  points[3].getZ() ) * ( points[i].getZ() - points[3].getZ() ));
	}
	return cir;
}
double PyramidTriangular::getVolume()
{
	double a = 0;
	a = sqrt(
		( points[0].getX() -  points[1].getX() ) * ( points[0].getX() - points[1].getX() ) + 
		( points[0].getY() -  points[1].getY() ) * ( points[0].getY() - points[1].getY() ) +
		( points[0].getZ() -  points[1].getZ() ) * ( points[0].getZ() - points[1].getZ() )); 

	double k = 0;
	k = sqrt(
		( points[0].getX() -  points[3].getX() ) * ( points[0].getX() - points[3].getX() ) + 
		( points[0].getY() -  points[3].getY() ) * ( points[0].getY() - points[3].getY() ) +
		( points[0].getZ() -  points[3].getZ() ) * ( points[0].getZ() - points[3].getZ() )); 

	double h = 0;
	h = sqrt (k * k + (a/2) * (a/2));

	double y = 0;
	y = a * sqrt(double(3)) / 6;

	double H = 0;
	H = sqrt(h * h - y * y);

	double vol = 0;
	vol = (a * a * sqrt(double(3)) * H) / 12;

	return vol;

}