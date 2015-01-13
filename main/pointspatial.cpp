#include "pointspatial.h"


	PointSpatial::PointSpatial(double _x, double _y, double _z):Point(_x,_y){
		this->z = _z;
	}
	PointSpatial::PointSpatial():Point(){
		this->z = 0;
	}
	void PointSpatial::setZ(double _z){
		this->z = _z;
	}
	double PointSpatial::getZ(){
		return this->z;
	}