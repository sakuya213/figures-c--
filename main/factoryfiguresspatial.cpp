#include "factoryfiguresspatial.h"


FactoryFigureSpatial::FactoryFigureSpatial(figureSpatialType f,PointSpatial _a,PointSpatial _b,PointSpatial _c,PointSpatial _d)

{
	if ( f == pyramidtriangular ) 
	{
		this->a = new PyramidTriangular(_a,_b,_c,_d);
	}


}
FactoryFigureSpatial::FactoryFigureSpatial(figureSpatialType f,PointSpatial _a,PointSpatial _b,PointSpatial _c,PointSpatial _d,PointSpatial _e)
{
	if ( f == pyramidtetragonal )
	{
		this->a = new PyramidTetragonal(_a,_b,_c,_d,_e);
	}



}
FactoryFigureSpatial::FactoryFigureSpatial(figureSpatialType f,PointSpatial _a,PointSpatial _b,PointSpatial _c,PointSpatial _d,PointSpatial _e,PointSpatial _f)
{
	if ( f == pyramidpentagonal )
	{
		this->a = new PyramidPentagonal(_a,_b,_c,_d,_e,_f);
	}
	else if ( f == prismtriangular )
	{

		this->a = new PrismTriangular(_a,_b,_c,_d,_e,_f);
	}


}
FactoryFigureSpatial::FactoryFigureSpatial(figureSpatialType f,PointSpatial _a,PointSpatial _b,PointSpatial _c,PointSpatial _d,PointSpatial _e,PointSpatial _f, PointSpatial _g,PointSpatial _h)
{

	if ( f == prismtetragonal )
	{
		this->a = new PrismTetragonal(_a,_b,_c,_d,_e,_f,_g,_h);
	}

}

FactoryFigureSpatial::FactoryFigureSpatial(figureSpatialType f,PointSpatial _a,PointSpatial _b,PointSpatial _c,PointSpatial _d,PointSpatial _e,PointSpatial _f, PointSpatial _g,PointSpatial _h,PointSpatial _i,PointSpatial _j)
{

	if ( f == prismpentagonal )
	{
		this->a = new PrismPentagonal(_a,_b,_c,_d,_e,_f,_g,_h,_i,_j);
	}

}
