#include <iostream>
#include "Header.h"
//#include "Source.h"
using namespace std;
int main() 
{
	Juego j1, j2;
	for (int i = 0; i < 3; i++)
	{
		j1.seleccionar();
		j2.seleccionar();
		j1.evaluar(j2.opcion1);
	};
	j1.Puntajes();
	

}