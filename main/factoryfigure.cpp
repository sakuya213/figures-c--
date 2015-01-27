#include "factoryfigure.h"


FactoryFigure::FactoryFigure(figureType f,Point _a,Point _b,Point _c){
	if(f==triangle){
		this->a= new Triangle(_a,_b,_c);
	} 
}
FactoryFigure::FactoryFigure(figureType f,Point _a,Point _b,Point _c,Point _d){
	switch(f){
	case diamond:
		this->a= new Diamond(_a,_b,_c,_d);
		break;
	case square:
		this->a= new Square(_a,_b,_c,_d);
		break;
	case tetragon:
		this->a= new Tetragon(_a,_b,_c,_d);
		break;
	case trapeze:
		this->a= new Trapeze(_a,_b,_c,_d);
		break;
	} 
}
FactoryFigure::FactoryFigure(figureType f,Point _a,double _r){
	if(f==circle){
		this->a= new Circle(_a,_r);
	} 
}
FactoryFigure::FactoryFigure(figureType f,Point _a,Point _b,Point _c,Point _d,Point _e){
	if(f==pentagon){
		this->a= new Pentagon(_a,_b,_c,_d,_e);
	} 
}
