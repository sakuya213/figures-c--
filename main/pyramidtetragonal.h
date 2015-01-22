#ifndef pyramidtetragonal_h
#define pyramidtetragonal_h
#include "figurespatial.h"
#include "pointspatial.h"
#include <cmath>

class PyramidTetragonal: public FigureSpatial
{
private:
	PointSpatial points[5];
public:
	PyramidTetragonal(PointSpatial _a, PointSpatial _b, PointSpatial _c, PointSpatial _d, PointSpatial _e);
	virtual double getCircumference();
	virtual double getVolume();

};
#endif
