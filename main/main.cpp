#include <iostream>
#include <cstring>
#include <string.h>
#include <cassert>
#include <stdlib.h>
#include "factoryfigure.h"
#include "factoryfiguresspatial.h"






using namespace std;

char** str_split(char* a_str, const char a_delim)
{
    char** result    = 0;
    size_t count     = 0;
    char* tmp        = a_str;
    char* last_comma = 0;
    char delim[2];
    delim[0] = a_delim;
    delim[1] = 0;

    /* Count how many elements will be extracted. */
    while (*tmp)
    {
        if (a_delim == *tmp)
        {
            count++;
            last_comma = tmp;
        }
        tmp++;
    }

    /* Add space for trailing token. */
    count += last_comma < (a_str + strlen(a_str) - 1);

    /* Add space for terminating null string so caller
       knows where the list of returned strings ends. */
    count++;

    result = (char**)malloc(sizeof(char*) * count);

    if (result)
    {
        size_t idx  = 0;
        char* token = strtok(a_str, delim);

        while (token)
        {
            assert(idx < count);
            *(result + idx++) = strdup(token);
            token = strtok(0, delim);
        }
        assert(idx == count - 1);
        *(result + idx) = 0;
    }

    return result;
}



int main( int argc, char *argv[] )
{
	if ( argc >= 2 ) 
	{
		if ( !strcmp(argv[1],"triangle") )
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
			   cout<<points[0].getX()<<" "<<points[0].getY()<<endl<<points[1].getX()<<" "<<points[1].getY()<<endl<<points[2].getX()<<" "<<points[2].getY()<<endl;
			   FactoryFigure test(triangle,points[0],points[1],points[2]);

				cout<<test.a->getArea()<<endl;

            }
			if ( !strcmp(argv[2],"circumference") )
			{

			}
		}
		else if ( !strcmp(argv[1],"circle") )
		{

		}
		else if ( !strcmp(argv[1],"diamond") )
		{

		}
		else if ( !strcmp(argv[1],"pentagon") )
		{

		}
		else if ( !strcmp(argv[1],"square") )
		{

		}
		else if ( !strcmp(argv[1],"tetragon") )
		{

		}
		else if ( !strcmp(argv[1],"trapeze") )
		{

		}
		else if ( !strcmp(argv[1],"pyramidtriangular") )
		{

		}
		else if ( !strcmp(argv[1],"pyramidtetragonal") )
		{

		}
		else if ( !strcmp(argv[1],"pyramidpentagonal") )
		{

		}
		else if ( !strcmp(argv[1],"prismtriangular") )
		{

		}
		else if ( !strcmp(argv[1],"prismtetragonal") )
		{

		}
		else if ( !strcmp(argv[1],"prismpentagonal") )
		{

		}

	}
	else 
	{
		cout<<"Podaj czynnosc: "<<endl;
	}


	/*PointSpatial _a(0,0,0);
	PointSpatial _b(5,0,0);
	PointSpatial _c(2.5,5,0);
	PointSpatial _d(2.5,2.5,5);
	FactoryFigureSpatial test(pyramidtriangular,_a,_b,_c,_d);

	cout<<test.a->getCircumference()<<endl;
	*/

	// cout<< argc << endl;

	return 0;
}