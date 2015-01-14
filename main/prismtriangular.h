#ifndef prismtriangular_h
#define prismtriangular_h

class PrismTriangular: public FigureSpatial
{
private:
	PointSpatial points[5];
public:
	PrismTriangular(PointSpatial _a, PointSpatial _b, PointSpatial _c, PointSpatial _d, PointSpatial _e, PointSpatial _f);
	double getCircumference();
	double getVolume();

};
