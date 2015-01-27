#ifndef factoryfigurespatial_h
#define factoryfigurespatial_h
#include "figurespatial.h"
#include "pointspatial.h"
#include "prismpentagonal.h"
#include "prismtetragonal.h"
#include "prismtriangular.h"
#include "pyramidtetragonal.h"
#include "pyramidpentagonal.h"
#include "pyramidtriangular.h"


enum figureSpatialType
{
	pyramidtriangular,
	prismpentagonal,
	prismtetragonal,
	prismtriangular,
	pyramidpentagonal,
	pyramidtetragonal
};


class FactoryFigureSpatial
{
public:
	FigureSpatial *a;
	FactoryFigureSpatial(figureSpatialType f,PointSpatial _a,PointSpatial _b,PointSpatial _c,PointSpatial _d);
	FactoryFigureSpatial(figureSpatialType f,PointSpatial _a,PointSpatial _b,PointSpatial _c,PointSpatial _d,PointSpatial _e);
	FactoryFigureSpatial(figureSpatialType f,PointSpatial _a,PointSpatial _b,PointSpatial _c,PointSpatial _d,PointSpatial _e,PointSpatial _f);
	FactoryFigureSpatial(figureSpatialType f,PointSpatial _a,PointSpatial _b,PointSpatial _c,PointSpatial _d,PointSpatial _e,PointSpatial _f, PointSpatial _g,PointSpatial _h);
	FactoryFigureSpatial(figureSpatialType f,PointSpatial _a,PointSpatial _b,PointSpatial _c,PointSpatial _d,PointSpatial _e,PointSpatial _f, PointSpatial _g,PointSpatial _h,PointSpatial _i,PointSpatial _j);

};

#endif