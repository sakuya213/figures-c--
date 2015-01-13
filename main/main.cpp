#include <iostream>
#include <cmath>
#include "point.h"
#include "pointspatial.h"


//using namespace std;

class Figure
{
	virtual double getCircumference(){
		return 0;
	}
	virtual double getArea(){
		return 0;
	}
};

class Triangle: public Figure
{
private:
	Point points[2];

public:	Triangle(Point _a, Point _b, Point _c){
			this->points[0] = _a;
			this->points[1] = _b;
			this->points[2] = _c;
		}
		double getCircumference()
		{
			double cir = 0;
			for(int i=0;i<3;i++){ // cir triangle
				cir += sqrt(
					( points[(i)%3].getX() -  points[(i+1)%3].getX() ) * ( points[(i)%3].getX() - points[(i+1)%3].getX() ) + 
					( points[(i)%3].getY() -  points[(i+1)%3].getY() ) * ( points[(i)%3].getY() - points[(i+1)%3].getY() )
					); 
			}
			return cir;
		}
		double getArea()
		{
			double area = 0;
			area = sqrt(
				( points[0].getX() -  points[1].getX() ) * ( points[0].getX() - points[1].getX() ) + 
				( points[0].getY() -  points[1].getY() ) * ( points[0].getY() - points[1].getY() )
				); 
			return area * area * sqrt(double(3)) /4;
		}
};
class Tetragon: public Figure // inherits quadrilateral figure
{
private: 
	Point points[3];

public:
	Tetragon(Point _a, Point _b, Point _c, Point _d){
		this->points[0] = _a;
		this->points[1] = _b;
		this->points[2] = _c;
		this->points[3] = _d;
	}
	double getCircumference()
	{
		double cir = 0; 
		for(int i=0;i<4;i++){
			cir += sqrt(
				( points[(i)%4].getX() -  points[(i+1)%4].getX() ) * ( points[(i)%4].getX() - points[(i+1)%4].getX() ) + 
				( points[(i)%4].getY() -  points[(i+1)%4].getY() ) * ( points[(i)%4].getY() - points[(i+1)%4].getY() )
				); 
		}
		return cir;
	}
	double getArea()
	{
		double area = 0; 
		area = sqrt(
			( points[0].getX() -  points[1].getX() ) * ( points[0].getX() - points[1].getX() ) + 
			( points[0].getY() -  points[1].getY() ) * ( points[0].getY() - points[1].getY() )
			); 
		double area2 = 0; 
		area2 = sqrt(
			( points[1].getX() -  points[2].getX() ) * ( points[1].getX() - points[2].getX() ) + 
			( points[1].getY() -  points[2].getY() ) * ( points[1].getY() - points[2].getY() )
			);
		return area * area2;
	}
};

class Trapeze: public Figure
{
private: 
	Point points[3];

public:
	Trapeze(Point _a, Point _b, Point _c, Point _d){
		this->points[0] = _a;
		this->points[1] = _b;
		this->points[2] = _c;
		this->points[3] = _d;
	}
	double getCircumference()
	{
		double cir = 0; 
		for(int i=0;i<4;i++){
			cir += sqrt(
				( points[(i)%4].getX() -  points[(i+1)%4].getX() ) * ( points[(i)%4].getX() - points[(i+1)%4].getX() ) + 
				( points[(i)%4].getY() -  points[(i+1)%4].getY() ) * ( points[(i)%4].getY() - points[(i+1)%4].getY() )
				); 
		}
		return cir;
	}
	double getArea()
	{
		double area = 0; 
		area = sqrt(
			( points[0].getX() -  points[1].getX() ) * ( points[0].getX() - points[1].getX() ) + 
			( points[0].getY() -  points[1].getY() ) * ( points[0].getY() - points[1].getY() )
			); 
		double area2 = 0; 
		area2 = sqrt(
			( points[2].getX() -  points[3].getX() ) * ( points[2].getX() - points[3].getX() ) + 
			( points[2].getY() -  points[3].getY() ) * ( points[2].getY() - points[3].getY() )
			);

		double h = 0;
		h = points[3].getY() - points[0].getY();

		return (area + area2) * h / 2;
	}
};
class Square: public Figure
{
private:
	Point points[3];
public:
	Square(Point _a, Point _b, Point _c, Point _d){
		this->points[0] = _a;
		this->points[1] = _b;
		this->points[2] = _c;
		this->points[3] = _d;
	}
	double getCircumference()
	{
		double cir = 0;
		for(int i=0;i<4;i++){
			cir += sqrt(
				( points[(i)%4].getX() -  points[(i+1)%4].getX() ) * ( points[(i)%4].getX() - points[(i+1)%4].getX() ) + 
				( points[(i)%4].getY() -  points[(i+1)%4].getY() ) * ( points[(i)%4].getY() - points[(i+1)%4].getY() )
				); 
		}
		return cir;
	}
	double getArea()
	{
		double area = 0; 
		area = sqrt(
			( points[0].getX() -  points[1].getX() ) * ( points[0].getX() - points[1].getX() ) + 
			( points[0].getY() -  points[1].getY() ) * ( points[0].getY() - points[1].getY() )
			); 
		return area * area;
	}
};

class Pentagon: public Figure
{
private:
	Point points[4];
public:
	Pentagon(Point _a, Point _b, Point _c, Point _d, Point _e){
		this->points[0] = _a;
		this->points[1] = _b;
		this->points[2] = _c;
		this->points[3] = _d;
		this->points[4] = _e;
	}
	double getCircumference()
	{
		double cir = 0;
		for(int i=0;i<5;i++){ 
			cir += sqrt(
				( points[(i)%5].getX() -  points[(i+1)%5].getX() ) * ( points[(i)%5].getX() - points[(i+1)%5].getX() ) + 
				( points[(i)%5].getY() -  points[(i+1)%5].getY() ) * ( points[(i)%5].getY() - points[(i+1)%5].getY() )
				); 
		}
		return cir;
	}
	double getArea()
	{
		double area = 0; 
		area = sqrt(
			( points[0].getX() -  points[1].getX() ) * ( points[0].getX() - points[1].getX() ) + 
			( points[0].getY() -  points[1].getY() ) * ( points[0].getY() - points[1].getY() )
			); 
		return area * area * sqrt(double(25 + 10 * sqrt(double(5)))) / 4;
	}
};
class FigureSpatial : public PointSpatial
{
	virtual double getCircumference(){
		return 0;
	}
	virtual double getVolume(){
		return 0;
	}
};

class PyramidTriangular: public FigureSpatial
{
private:
	PointSpatial points[3];
public:
	PyramidTriangular(PointSpatial _a, PointSpatial _b, PointSpatial _c, PointSpatial _d){
		this->points[0] = _a;
		this->points[1] = _b;
		this->points[2] = _c;
		this->points[3] = _d;
	}
	double getCircumference()
	{
		double cir = 0;
		for(int i=0;i<3;i++){ // base of the pyramid
			cir += sqrt(
				( points[(i)%3].getX() -  points[(i+1)%3].getX() ) * ( points[(i)%3].getX() - points[(i+1)%3].getX() ) + 
				( points[(i)%3].getY() -  points[(i+1)%3].getY() ) * ( points[(i)%3].getY() - points[(i+1)%3].getY() ) +
				( points[(i)%3].getZ() -  points[(i+1)%3].getZ() ) * ( points[(i)%3].getZ() - points[(i+1)%3].getZ() )
				); 
		}
		for(int i=0;i<3;i++){ //the side walls of the pyramid
			cir += sqrt(
				( points[i].getX() -  points[3].getX() ) * ( points[i].getX() - points[3].getX() ) + 
				( points[i].getY() -  points[3].getY() ) * ( points[i].getY() - points[3].getY() ) +
				( points[i].getZ() -  points[3].getZ() ) * ( points[i].getZ() - points[3].getZ() ));
		}
		return cir;
	}
	double getVolume()
	{
		double a = 0;
		a = sqrt(
			( points[0].getX() -  points[1].getX() ) * ( points[0].getX() - points[1].getX() ) + 
			( points[0].getY() -  points[1].getY() ) * ( points[0].getY() - points[1].getY() ) +
			( points[0].getZ() -  points[1].getZ() ) * ( points[0].getZ() - points[1].getZ() )); 

		double k = 0;
		k = sqrt(
			( points[0].getX() -  points[3].getX() ) * ( points[0].getX() - points[3].getX() ) + 
			( points[0].getY() -  points[3].getY() ) * ( points[0].getY() - points[3].getY() ) +
			( points[0].getZ() -  points[3].getZ() ) * ( points[0].getZ() - points[3].getZ() )); 

		double h = 0;
		h = sqrt (k * k + (a/2) * (a/2));

		double y = 0;
		y = a * sqrt(double(3)) / 6;

		double H = 0;
		H = sqrt(h * h - y * y);

		double vol = 0;
		vol = (a * a * sqrt(double(3)) * H) / 12;

		return vol;

	}
};
class PyramidTetragonal: public FigureSpatial
{
private:
	PointSpatial points[4];
public:
	PyramidTetragonal(PointSpatial _a, PointSpatial _b, PointSpatial _c, PointSpatial _d, PointSpatial _e){
		this->points[0] = _a;
		this->points[1] = _b;
		this->points[2] = _c;
		this->points[3] = _d;
		this->points[4] = _e;
	}
	double getCircumference()
	{
		double cir = 0; // getCircumference
		for(int i=0;i<4;i++){ // base of the pyramid
			cir += sqrt(
				( points[(i)%4].getX() -  points[(i+1)%4].getX() ) * ( points[(i)%4].getX() - points[(i+1)%4].getX() ) + 
				( points[(i)%4].getY() -  points[(i+1)%4].getY() ) * ( points[(i)%4].getY() - points[(i+1)%4].getY() ) +
				( points[(i)%4].getZ() -  points[(i+1)%4].getZ() ) * ( points[(i)%4].getZ() - points[(i+1)%4].getZ() )
				); 
		}
		for(int i=0;i<4;i++){ //the side walls of the pyramid
			cir += sqrt(
				( points[i].getX() -  points[4].getX() ) * ( points[i].getX() - points[4].getX() ) + 
				( points[i].getY() -  points[4].getY() ) * ( points[i].getY() - points[4].getY() ) +
				( points[i].getZ() -  points[4].getZ() ) * ( points[i].getZ() - points[4].getZ() ));
		}
		return cir;
	}
	double getVolume()
	{
		double a = 0;
		a = sqrt(
			( points[0].getX() -  points[1].getX() ) * ( points[0].getX() - points[1].getX() ) + 
			( points[0].getY() -  points[1].getY() ) * ( points[0].getY() - points[1].getY() ) +
			( points[0].getZ() -  points[1].getZ() ) * ( points[0].getZ() - points[1].getZ() )); 

		double k = 0;
		k = sqrt(
			( points[0].getX() -  points[4].getX() ) * ( points[0].getX() - points[4].getX() ) + 
			( points[0].getY() -  points[4].getY() ) * ( points[0].getY() - points[4].getY() ) +
			( points[0].getZ() -  points[4].getZ() ) * ( points[0].getZ() - points[4].getZ() )); 

		double h = 0;
		h = sqrt ((k * k) - (a/2) * (a/2));

		double y = 0;
		y = a / 2;

		double H = 0;
		H = sqrt(h * h - y * y);

		double vol = 0;
		vol = (a * a * H) / 3;

		return vol;

	}

};
class PyramidPentagonal: public FigureSpatial
{
private:
	PointSpatial points[5];
public:
	PyramidPentagonal(PointSpatial _a, PointSpatial _b, PointSpatial _c, PointSpatial _d, PointSpatial _e, PointSpatial _f){
		this->points[0] = _a;
		this->points[1] = _b;
		this->points[2] = _c;
		this->points[3] = _d;
		this->points[4] = _e;
		this->points[5] = _f;
	}
	double getCircumference()
	{
		double cir = 0; // getCircumference
		for(int i=0;i<5;i++){ // base of the pyramid
			cir += sqrt(
				( points[(i)%5].getX() -  points[(i+1)%5].getX() ) * ( points[(i)%5].getX() - points[(i+1)%5].getX() ) + 
				( points[(i)%5].getY() -  points[(i+1)%5].getY() ) * ( points[(i)%5].getY() - points[(i+1)%5].getY() ) +
				( points[(i)%5].getZ() -  points[(i+1)%5].getZ() ) * ( points[(i)%5].getZ() - points[(i+1)%5].getZ() )
				); 
		}
		for(int i=0;i<5;i++){ //the side walls of the pyramid
			cir += sqrt(
				( points[i].getX() -  points[5].getX() ) * ( points[i].getX() - points[5].getX() ) + 
				( points[i].getY() -  points[5].getY() ) * ( points[i].getY() - points[5].getY() ) +
				( points[i].getZ() -  points[5].getZ() ) * ( points[i].getZ() - points[5].getZ() ));
		}
		return cir;
	}
	double getVolume()
	{
		double a = 0;
		a = sqrt(
			( points[0].getX() -  points[1].getX() ) * ( points[0].getX() - points[1].getX() ) + 
			( points[0].getY() -  points[1].getY() ) * ( points[0].getY() - points[1].getY() ) +
			( points[0].getZ() -  points[1].getZ() ) * ( points[0].getZ() - points[1].getZ() )); 

		double k = 0;
		k = sqrt(
			( points[0].getX() -  points[5].getX() ) * ( points[0].getX() - points[5].getX() ) + 
			( points[0].getY() -  points[5].getY() ) * ( points[0].getY() - points[5].getY() ) +
			( points[0].getZ() -  points[5].getZ() ) * ( points[0].getZ() - points[5].getZ() )); 

		double h = 0;
		h = sqrt ((k * k) - (a/2) * (a/2));

		double y = 0;
		y = a;

		double H = 0;
		H = sqrt(h * h - y * y);

		double vol = 0;
		vol = (a * a * sqrt(double(25 + 10 * sqrt(double(5)))) * H) / 12;

		return vol;

	}

};
class PrismTriangular: public FigureSpatial
{
private:
	PointSpatial points[5];
public:
	PrismTriangular(PointSpatial _a, PointSpatial _b, PointSpatial _c, PointSpatial _d, PointSpatial _e, PointSpatial _f){
		this->points[0] = _a;
		this->points[1] = _b;
		this->points[2] = _c;
		this->points[3] = _d;
		this->points[4] = _e;
		this->points[5] = _f;
	}
	double getCircumference()
	{
		double cir = 0; // getCircumference
		for(int i=0;i<3;i++){ // base of the prism
			cir += sqrt(
				( points[(i)%3].getX() -  points[(i+1)%3].getX() ) * ( points[(i)%3].getX() - points[(i+1)%3].getX() ) + 
				( points[(i)%3].getY() -  points[(i+1)%3].getY() ) * ( points[(i)%3].getY() - points[(i+1)%3].getY() ) +
				( points[(i)%3].getZ() -  points[(i+1)%3].getZ() ) * ( points[(i)%3].getZ() - points[(i+1)%3].getZ() )
				); 
		}
		for(int i=3;i<6;i++){ // second base of the prism
			cir += sqrt(
				( points[(i)%3+3].getX() -  points[(i+1)%3+3].getX() ) * ( points[(i)%3+3].getX() - points[(i+1)%3+3].getX() ) + 
				( points[(i)%3+3].getY() -  points[(i+1)%3+3].getY() ) * ( points[(i)%3+3].getY() - points[(i+1)%3+3].getY() ) +
				( points[(i)%3+3].getZ() -  points[(i+1)%3+3].getZ() ) * ( points[(i)%3+3].getZ() - points[(i+1)%3+3].getZ() )
				); 
		}
		for(int i=0;i<3;i++){ //the side walls of the prism
			cir += sqrt(
				( points[i].getX() -  points[i+3].getX() ) * ( points[i].getX() - points[i+3].getX() ) + 
				( points[i].getY() -  points[i+3].getY() ) * ( points[i].getY() - points[i+3].getY() ) +
				( points[i].getZ() -  points[i+3].getZ() ) * ( points[i].getZ() - points[i+3].getZ() ));
		}
		return cir;
	}
	double getVolume()
	{
		double a = 0;
		a = sqrt(
			( points[0].getX() -  points[1].getX() ) * ( points[0].getX() - points[1].getX() ) + 
			( points[0].getY() -  points[1].getY() ) * ( points[0].getY() - points[1].getY() ) +
			( points[0].getZ() -  points[1].getZ() ) * ( points[0].getZ() - points[1].getZ() )); 

		double h = 0;
		h = sqrt(
			( points[0].getX() -  points[3].getX() ) * ( points[0].getX() - points[3].getX() ) + 
			( points[0].getY() -  points[3].getY() ) * ( points[0].getY() - points[3].getY() ) +
			( points[0].getZ() -  points[3].getZ() ) * ( points[0].getZ() - points[3].getZ() )); 

		double vol = 0;

		vol = a * a * sqrt(double(3)) * h /4;

		return vol;
	}

};
class PrismTetragonal: public FigureSpatial
{
private:
	PointSpatial points[7];
public:
	PrismTetragonal(PointSpatial _a, PointSpatial _b, PointSpatial _c, PointSpatial _d, PointSpatial _e, PointSpatial _f, PointSpatial _g, PointSpatial _h){
		this->points[0] = _a;
		this->points[1] = _b;
		this->points[2] = _c;
		this->points[3] = _d;
		this->points[4] = _e;
		this->points[5] = _f;
		this->points[6] = _g;
		this->points[7] = _h;
	}
	double getCircumference()
	{
		double cir = 0; // getCircumference
		for(int i=0;i<4;i++){ // base of the prism
			cir += sqrt(
				( points[(i)%4].getX() -  points[(i+1)%4].getX() ) * ( points[(i)%4].getX() - points[(i+1)%4].getX() ) + 
				( points[(i)%4].getY() -  points[(i+1)%4].getY() ) * ( points[(i)%4].getY() - points[(i+1)%4].getY() ) +
				( points[(i)%4].getZ() -  points[(i+1)%4].getZ() ) * ( points[(i)%4].getZ() - points[(i+1)%4].getZ() )
				); 
		}
		for(int i=4;i<8;i++){ // second base of the prism
			cir += sqrt(
				( points[(i)%4+4].getX() -  points[(i+1)%4+4].getX() ) * ( points[(i)%4+4].getX() - points[(i+1)%4+4].getX() ) + 
				( points[(i)%4+4].getY() -  points[(i+1)%4+4].getY() ) * ( points[(i)%4+4].getY() - points[(i+1)%4+4].getY() ) +
				( points[(i)%4+4].getZ() -  points[(i+1)%4+4].getZ() ) * ( points[(i)%4+4].getZ() - points[(i+1)%4+4].getZ() )
				); 
		}
		for(int i=0;i<4;i++){ //the side walls of the prism
			cir += sqrt(
				( points[i].getX() -  points[i+4].getX() ) * ( points[i].getX() - points[i+4].getX() ) + 
				( points[i].getY() -  points[i+4].getY() ) * ( points[i].getY() - points[i+4].getY() ) +
				( points[i].getZ() -  points[i+4].getZ() ) * ( points[i].getZ() - points[i+4].getZ() ));
		}

		return cir;
	}
	double getVolume()
	{
		double a = 0;
		a = sqrt(
			( points[0].getX() -  points[1].getX() ) * ( points[0].getX() - points[1].getX() ) + 
			( points[0].getY() -  points[1].getY() ) * ( points[0].getY() - points[1].getY() ) +
			( points[0].getZ() -  points[1].getZ() ) * ( points[0].getZ() - points[1].getZ() )); 

		double h = 0;
		h = sqrt(
			( points[0].getX() -  points[4].getX() ) * ( points[0].getX() - points[4].getX() ) + 
			( points[0].getY() -  points[4].getY() ) * ( points[0].getY() - points[4].getY() ) +
			( points[0].getZ() -  points[4].getZ() ) * ( points[0].getZ() - points[4].getZ() )); 

		double vol = 0;

		vol = a * a * h;

		return vol;
	}
};
class PrismPentagonal: public FigureSpatial
{
private:
	PointSpatial points[9];
public:
	PrismPentagonal(PointSpatial _a, PointSpatial _b, PointSpatial _c, PointSpatial _d, PointSpatial _e, PointSpatial _f, PointSpatial _g, PointSpatial _h, PointSpatial _i, PointSpatial _j){
		this->points[0] = _a;
		this->points[1] = _b;
		this->points[2] = _c;
		this->points[3] = _d;
		this->points[4] = _e;
		this->points[5] = _f;
		this->points[6] = _g;
		this->points[7] = _h;
		this->points[8] = _i;
		this->points[9] = _j;
	}
	double getCircumference()
	{
		double cir = 0; // getCircumference
		for(int i=0;i<5;i++){ // base of the prism
			cir += sqrt(
				( points[(i)%5].getX() -  points[(i+1)%5].getX() ) * ( points[(i)%5].getX() - points[(i+1)%5].getX() ) + 
				( points[(i)%5].getY() -  points[(i+1)%5].getY() ) * ( points[(i)%5].getY() - points[(i+1)%5].getY() ) +
				( points[(i)%5].getZ() -  points[(i+1)%5].getZ() ) * ( points[(i)%5].getZ() - points[(i+1)%5].getZ() )
				); 
		}
		for(int i=5;i<10;i++){ // second base of the prism
			cir += sqrt(
				( points[(i)%5+5].getX() -  points[(i+1)%5+5].getX() ) * ( points[(i)%5+5].getX() - points[(i+1)%5+5].getX() ) + 
				( points[(i)%5+5].getY() -  points[(i+1)%5+5].getY() ) * ( points[(i)%5+5].getY() - points[(i+1)%5+5].getY() ) +
				( points[(i)%5+5].getZ() -  points[(i+1)%5+5].getZ() ) * ( points[(i)%5+5].getZ() - points[(i+1)%5+5].getZ() )
				); 
		}
		for(int i=0;i<5;i++){ //the side walls of the prism
			cir += sqrt(
				( points[i].getX() -  points[i+5].getX() ) * ( points[i].getX() - points[i+5].getX() ) + 
				( points[i].getY() -  points[i+5].getY() ) * ( points[i].getY() - points[i+5].getY() ) +
				( points[i].getZ() -  points[i+5].getZ() ) * ( points[i].getZ() - points[i+5].getZ() ));
		}

		return cir;
	}
	double getVolume()
	{
		double a = 0;
		a = sqrt(
			( points[0].getX() -  points[1].getX() ) * ( points[0].getX() - points[1].getX() ) + 
			( points[0].getY() -  points[1].getY() ) * ( points[0].getY() - points[1].getY() ) +
			( points[0].getZ() -  points[1].getZ() ) * ( points[0].getZ() - points[1].getZ() )); 

		double h = 0;
		h = sqrt(
			( points[0].getX() -  points[5].getX() ) * ( points[0].getX() - points[5].getX() ) + 
			( points[0].getY() -  points[5].getY() ) * ( points[0].getY() - points[5].getY() ) +
			( points[0].getZ() -  points[5].getZ() ) * ( points[0].getZ() - points[5].getZ() )); 

		double vol = 0;

		vol = a * a * sqrt(double(25 + 10 * sqrt(double(5)))) * h /4;

		return vol;
	}
};

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
