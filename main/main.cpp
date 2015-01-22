#include <iostream>
#include "library.h"





using namespace std;




int main()
{

	Point _a(5,0);
	Point _b(10,0);
	Point _c(0,5);
	Figure *test=new Triangle(_a,_b,_c);

	cout<<test->getCircumference()<<endl;
	system("pause");

	return 0;
}
