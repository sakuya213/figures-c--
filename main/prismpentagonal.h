#ifndef prismpentagonal_h
#define prismpentagonal_h
#include "figurespatial.h"
#include "pointspatial.h"

class PrismPentagonal: public FigureSpatial
{
private:
	PointSpatial points[9];
public:
	PrismPentagonal(PointSpatial _a, PointSpatial _b, PointSpatial _c, PointSpatial _d, PointSpatial _e, PointSpatial _f, PointSpatial _g, PointSpatial _h, PointSpatial _i, PointSpatial _j);
	double getCircumference();
	double getVolume();
};
#endif