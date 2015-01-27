#include "point.h"


	Point::Point(double _x, double _y){
		this->x = _x;
		this->y = _y;
	}
	Point::Point(){
		this->x = 0;
        this->y = 0;
	}
	Point::Point(const Point &_p){
        this->x = _p.x;
        this->y = _p.y;
    }
 
	void Point::setX(double _x){
		this->x = _x;
	}
	void Point::setY(double _y){
		this->y = _y;
	}
	double Point::getX(){
		return this->x;
	}
	double Point::getY(){
		return this->y;
	}