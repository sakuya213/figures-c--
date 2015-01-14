#include <iostream>
#include <cmath>
#include "point.h"
#include "pointspatial.h"
#include "circle.h"
#include "diamond.h"
#include "Pentagon.h"
#include "square.h"
#include "tetragon.h"
#include "trapeze.h"
#include "triangle.h"
#include "figure.h"
#include "figurespatial.h"
#include "piramidtriangular.h"
#include "pyramidtetragonal.h"
#include "pyramidpentagonal.h"
#include "prismpentagonal.h"
#include "prismtetragonal.h"
#include "prismtriangular.h"




//using namespace std;




int main()
{

	Point _a(5,0);
	Point _b(10,0);
	Point _c(0,5);
	Triangle  test(_a,_b,_c);

	std::cout<<test.getArea()<<std::endl;
	system("pause");

	return 0;
}
