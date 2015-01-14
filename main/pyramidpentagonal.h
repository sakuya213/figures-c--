#ifndef pyramidpentagonal_h
#define pyramidpentagonal_h

class PyramidPentagonal: public FigureSpatial
{
private:
	PointSpatial points[5];
public:
	PyramidPentagonal(PointSpatial _a, PointSpatial _b, PointSpatial _c, PointSpatial _d, PointSpatial _e, PointSpatial _f);
	double getCircumference();
	double getVolume();

};
#endif
