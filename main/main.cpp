#include "library.h"




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
