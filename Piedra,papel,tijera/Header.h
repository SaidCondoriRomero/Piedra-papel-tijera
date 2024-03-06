#pragma once
#include <iostream>
#include <string>
using namespace std;
class Juego 
{
private:
	int puntajeJugador1;
	int puntajeJugador2;
public:
	void Puntajes();
	Juego();
	int opcion1;
	void seleccionar();
	void evaluar(int opcion2) ;

};