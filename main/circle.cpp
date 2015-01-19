#include "circle.h"	
#include "point.h"
#include "figure.h"


	Circle::Circle(Point _a, double _r){
		this->r = _r;
		this->a = _a;
}
		void Circle::setA(Point _a){
			this->a = _a;
		}
		void Circle::setR(double _r){
			this->r = _r;
		}
		Point Circle::getA(){
			return this->a;
		}
		double Circle::getR(){
			return this->r;
		}

		double Circle::getArea()
		{
			double areaC = 0;
			areaC = (M_PI * r * r);  
		
		return areaC;
		}

