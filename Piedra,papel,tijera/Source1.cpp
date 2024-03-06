#include "Header.h"
Juego::Juego() : puntajeJugador1(0), puntajeJugador2(0) {}

void Juego::seleccionar()
{
	cout << " " << endl;
	cout << "Elija una opcion\n";
	cout << "Piedra = 1\n";
	cout << "Tijera = 2\n";
	cout << "Papel = 3\n" << endl;
	cin >> opcion1;
}
void Juego::evaluar(int opcion2)
{
	
	if (opcion1 == opcion2) {
		cout << "Empate" << endl;
	}
	else if ((opcion1 == 1 && opcion2 == 2) || (opcion1 == 2 && opcion2 == 3) || (opcion1 == 3 && opcion2 == 1))
	{
		cout << "Jugador 1 Gana" << endl;
		puntajeJugador1++;
	}
	else 
	{
		cout << "Jugador 2 Gana" << endl;
		puntajeJugador2++;
	}
}
void Juego::Puntajes()
{
	cout << "Jugador 1: " << puntajeJugador1 << "\n";
	cout << "Jugador 2: " << puntajeJugador2 << "\n";

	if (puntajeJugador1 > puntajeJugador2) {
		cout << "Jugador 1 gana el juego\n";
	}
	else if (puntajeJugador2 > puntajeJugador1) {
		cout << "Jugador 2 gana el juego\n";
	}
	else {
		cout << "Empate en el juego\n";
	}
}





