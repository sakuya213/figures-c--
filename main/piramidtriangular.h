#ifndef piramidtriangular_h
#define piramidtriangular_h
#include "figurespatial.h"
#include "pointspatial.h"

class PyramidTriangular: public FigureSpatial
{
private:
	PointSpatial points[3];
public:
	PyramidTriangular(PointSpatial _a, PointSpatial _b, PointSpatial _c, PointSpatial _d);
	double getCircumference();
	double getVolume();
};
#endif
