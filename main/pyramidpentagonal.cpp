#include "pyramidpentagonal.h"
#include "pointspatial.h"
#include "figurespatial.h"

PyramidPentagonal::PyramidPentagonal(PointSpatial _a, PointSpatial _b, PointSpatial _c, PointSpatial _d, PointSpatial _e, PointSpatial _f){
	this->points[0] = _a;
	this->points[1] = _b;
	this->points[2] = _c;
	this->points[3] = _d;
	this->points[4] = _e;
	this->points[5] = _f;
}
double PyramidPentagonal::getCircumference()
{
	double cir = 0; // getCircumference
	for(int i=0;i<5;i++){ // base of the pyramid
		cir += sqrt(
			( points[(i)%5].getX() -  points[(i+1)%5].getX() ) * ( points[(i)%5].getX() - points[(i+1)%5].getX() ) + 
			( points[(i)%5].getY() -  points[(i+1)%5].getY() ) * ( points[(i)%5].getY() - points[(i+1)%5].getY() ) +
			( points[(i)%5].getZ() -  points[(i+1)%5].getZ() ) * ( points[(i)%5].getZ() - points[(i+1)%5].getZ() )
			); 
	}
	for(int i=0;i<5;i++){ //the side walls of the pyramid
		cir += sqrt(
			( points[i].getX() -  points[5].getX() ) * ( points[i].getX() - points[5].getX() ) + 
			( points[i].getY() -  points[5].getY() ) * ( points[i].getY() - points[5].getY() ) +
			( points[i].getZ() -  points[5].getZ() ) * ( points[i].getZ() - points[5].getZ() ));
	}
	return cir;
}
double PyramidPentagonal::getVolume()
{
	double a = 0;
	a = sqrt(
		( points[0].getX() -  points[1].getX() ) * ( points[0].getX() - points[1].getX() ) + 
		( points[0].getY() -  points[1].getY() ) * ( points[0].getY() - points[1].getY() ) +
		( points[0].getZ() -  points[1].getZ() ) * ( points[0].getZ() - points[1].getZ() )); 

	double k = 0;
	k = sqrt(
		( points[0].getX() -  points[5].getX() ) * ( points[0].getX() - points[5].getX() ) + 
		( points[0].getY() -  points[5].getY() ) * ( points[0].getY() - points[5].getY() ) +
		( points[0].getZ() -  points[5].getZ() ) * ( points[0].getZ() - points[5].getZ() )); 

	double h = 0;
	h = sqrt ((k * k) - (a/2) * (a/2));

	double y = 0;
	y = a;

	double H = 0;
	H = sqrt(h * h - y * y);

	double vol = 0;
	vol = (a * a * sqrt(double(25 + 10 * sqrt(double(5)))) * H) / 12;

	return vol;

}

};