#ifndef pointspatial_h
#define pointspatial_h
#include "point.h"

class PointSpatial: public Point
{
private:
	double z;
public:
	PointSpatial(double _x, double _y, double _z);
	PointSpatial();
	void setZ(double _z);
	double getZ();
};

#endif