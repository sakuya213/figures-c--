#include <iostream>
#include <cstring>
#include <string.h>
#include <cassert>
#include <stdlib.h>
#include "factoryfigure.h"
#include "factoryfiguresspatial.h"
#include "tools.h"






using namespace std;



int main( int argc, char *argv[] )
{
	if ( argc >= 2 ) 
	{
		if ( !strcmp(argv[1],"triangle") && ( argc == 6) )
		{
			if ( !strcmp(argv[2],"area") )
            {
               char **part;
			   Point points[3];

			   part=str_split(argv[3], ';');  
			   points[0] = Point(atof(part[0]),atof(part[1]));
			   part=str_split(argv[4], ';');  
			   points[1] = Point(atof(part[0]),atof(part[1]));
			   part=str_split(argv[5], ';');  
			   points[2] = Point(atof(part[0]),atof(part[1]));
			   FactoryFigure test(triangle,points[0],points[1],points[2]);

				cout<<test.a->getArea()<<endl;

            }
			if ( !strcmp(argv[2],"circumference") )
			{
				char **part;
			   Point points[3];

			   part=str_split(argv[3], ';');  
			   points[0] = Point(atof(part[0]),atof(part[1]));
			   part=str_split(argv[4], ';');  
			   points[1] = Point(atof(part[0]),atof(part[1]));
			   part=str_split(argv[5], ';');  
			   points[2] = Point(atof(part[0]),atof(part[1]));
			   FactoryFigure test(triangle,points[0],points[1],points[2]);

				cout<<test.a->getCircumference()<<endl;

			}
		}
		else if ( !strcmp(argv[1],"square") && ( argc == 7) )
		 {
               char **part;
			   Point points[4];

			   part=str_split(argv[3], ';');  
			   points[0] = Point(atof(part[0]),atof(part[1]));
			   part=str_split(argv[4], ';');  
			   points[1] = Point(atof(part[0]),atof(part[1]));
			   part=str_split(argv[5], ';');  
			   points[2] = Point(atof(part[0]),atof(part[1]));
			   part=str_split(argv[6], ';');  
			   points[3] = Point(atof(part[0]),atof(part[1]));
			   FactoryFigure test(square,points[0],points[1],points[2],points[3]);

				cout<<test.a->getArea()<<endl;

            }
		if ( !strcmp(argv[2],"circumference") )
			{
			  char **part;
			   Point points[4];

			   part=str_split(argv[3], ';');  
			   points[0] = Point(atof(part[0]),atof(part[1]));
			   part=str_split(argv[4], ';');  
			   points[1] = Point(atof(part[0]),atof(part[1]));
			   part=str_split(argv[5], ';');  
			   points[2] = Point(atof(part[0]),atof(part[1]));
			   part=str_split(argv[6], ';');  
			   points[3] = Point(atof(part[0]),atof(part[1]));
			   FactoryFigure test(square,points[0],points[1],points[2],points[3]);

				cout<<test.a->getCircumference()<<endl;

			}
		else if ( !strcmp(argv[1],"tetragon") && ( argc == 7) )
		{
               char **part;
			   Point points[4];

			   part=str_split(argv[3], ';');  
			   points[0] = Point(atof(part[0]),atof(part[1]));
			   part=str_split(argv[4], ';');  
			   points[1] = Point(atof(part[0]),atof(part[1]));
			   part=str_split(argv[5], ';');  
			   points[2] = Point(atof(part[0]),atof(part[1]));
			   part=str_split(argv[6], ';');  
			   points[3] = Point(atof(part[0]),atof(part[1]));
			   FactoryFigure test(tetragon,points[0],points[1],points[2],points[3]);

				cout<<test.a->getArea()<<endl;

            }
		if ( !strcmp(argv[2],"circumference") )
			{
			  char **part;
			   Point points[4];

			   part=str_split(argv[3], ';');  
			   points[0] = Point(atof(part[0]),atof(part[1]));
			   part=str_split(argv[4], ';');  
			   points[1] = Point(atof(part[0]),atof(part[1]));
			   part=str_split(argv[5], ';');  
			   points[2] = Point(atof(part[0]),atof(part[1]));
			   part=str_split(argv[6], ';');  
			   points[3] = Point(atof(part[0]),atof(part[1]));
			   FactoryFigure test(tetragon,points[0],points[1],points[2],points[3]);

				cout<<test.a->getCircumference()<<endl;

			}


	}



	return 0;
}