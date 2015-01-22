#include <iostream>
#include "factoryfigure.h"
#include "factoryfiguresspatial.h"






using namespace std;




int main()
{

	PointSpatial _a(0,0,0);
	PointSpatial _b(5,0,0);
	PointSpatial _c(2.5,5,0);
	PointSpatial _d(2.5,2.5,5);
	FactoryFigureSpatial test(pyramidtriangular,_a,_b,_c,_d);

	cout<<test.a->getCircumference()<<endl;
	system("pause");

	return 0;
}
