#ifndef factoryfigure_h
#define factoryfigure_h
#include "figure.h"
#include "point.h"
#include "triangle.h"
#include "diamond.h"
#include "square.h"
#include "tetragon.h"
#include "trapeze.h"
#include "circle.h"
#include "pentagon.h"


enum figureType
{
	circle,
	diamond,
	pentagon,
	square,
	tetragon,
	trapeze,
	triangle
};

class FactoryFigure
{
public:
	Figure *a;
	FactoryFigure(figureType f,Point _a,Point _b,Point _c);
	FactoryFigure(figureType f,Point _a,Point _b,Point _c,Point _d);
	FactoryFigure(figureType f,Point _a,double _r);
	FactoryFigure(figureType f,Point _a,Point _b,Point _c,Point _d,Point _e);
};

#endif
