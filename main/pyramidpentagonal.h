#ifndef pyramidpentagonal_h
#define pyramidpentagonal_h
#include "figurespatial.h"
#include "pointspatial.h"

class PyramidPentagonal: public FigureSpatial
{
private:
	PointSpatial points[6];
public:
	PyramidPentagonal(PointSpatial _a, PointSpatial _b, PointSpatial _c, PointSpatial _d, PointSpatial _e, PointSpatial _f);
	virtual double getCircumference();
	virtual double getVolume();

};
#endif
