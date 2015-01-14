#include "pyramidtetragonal.h"
#include "pointspatial.h"
#include "figurespatial.h"

PyramidTetragonal::PyramidTetragonal(PointSpatial _a, PointSpatial _b, PointSpatial _c, PointSpatial _d, PointSpatial _e){
	this->points[0] = _a;
	this->points[1] = _b;
	this->points[2] = _c;
	this->points[3] = _d;
	this->points[4] = _e;
}
double PyramidTetragonal::getCircumference()
{
	double cir = 0; // getCircumference
	for(int i=0;i<4;i++){ // base of the pyramid
		cir += sqrt(
			( points[(i)%4].getX() -  points[(i+1)%4].getX() ) * ( points[(i)%4].getX() - points[(i+1)%4].getX() ) + 
			( points[(i)%4].getY() -  points[(i+1)%4].getY() ) * ( points[(i)%4].getY() - points[(i+1)%4].getY() ) +
			( points[(i)%4].getZ() -  points[(i+1)%4].getZ() ) * ( points[(i)%4].getZ() - points[(i+1)%4].getZ() )
			); 
	}
	for(int i=0;i<4;i++){ //the side walls of the pyramid
		cir += sqrt(
			( points[i].getX() -  points[4].getX() ) * ( points[i].getX() - points[4].getX() ) + 
			( points[i].getY() -  points[4].getY() ) * ( points[i].getY() - points[4].getY() ) +
			( points[i].getZ() -  points[4].getZ() ) * ( points[i].getZ() - points[4].getZ() ));
	}
	return cir;
}
double PyramidTetragonal::getVolume()
{
	double a = 0;
	a = sqrt(
		( points[0].getX() -  points[1].getX() ) * ( points[0].getX() - points[1].getX() ) + 
		( points[0].getY() -  points[1].getY() ) * ( points[0].getY() - points[1].getY() ) +
		( points[0].getZ() -  points[1].getZ() ) * ( points[0].getZ() - points[1].getZ() )); 

	double k = 0;
	k = sqrt(
		( points[0].getX() -  points[4].getX() ) * ( points[0].getX() - points[4].getX() ) + 
		( points[0].getY() -  points[4].getY() ) * ( points[0].getY() - points[4].getY() ) +
		( points[0].getZ() -  points[4].getZ() ) * ( points[0].getZ() - points[4].getZ() )); 

	double h = 0;
	h = sqrt ((k * k) - (a/2) * (a/2));

	double y = 0;
	y = a / 2;

	double H = 0;
	H = sqrt(h * h - y * y);

	double vol = 0;
	vol = (a * a * H) / 3;

	return vol;

}

};
