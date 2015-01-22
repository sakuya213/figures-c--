#ifndef prismtriangular_h
#define prismtriangular_h
#include "figurespatial.h"
#include "pointspatial.h"

class PrismTriangular: public FigureSpatial
{
private:
	PointSpatial points[6];
public:
	PrismTriangular(PointSpatial _a, PointSpatial _b, PointSpatial _c, PointSpatial _d, PointSpatial _e, PointSpatial _f);
	virtual double getCircumference();
	virtual double getVolume();

};
#endif