#ifndef pyramidtriangular_h
#define pyramidtriangular_h
#include "figurespatial.h"
#include "pointspatial.h"

class PyramidTriangular: public FigureSpatial
{
private:
	PointSpatial points[4];
public:
	PyramidTriangular(PointSpatial _a, PointSpatial _b, PointSpatial _c, PointSpatial _d);
	virtual double getCircumference();
	virtual double getVolume();
};
#endif
