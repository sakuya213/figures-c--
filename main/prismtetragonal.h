#ifndef prismtetragonal_h
#define prismtetragonal_h
#include "figurespatial.h"
#include "pointspatial.h"

class PrismTetragonal: public FigureSpatial
{
private:
	PointSpatial points[8];
public:
	PrismTetragonal(PointSpatial _a, PointSpatial _b, PointSpatial _c, PointSpatial _d, PointSpatial _e, PointSpatial _f, PointSpatial _g, PointSpatial _h);
	virtual double getCircumference();
	virtual double getVolume();
};
#endif
