#ifndef TABLERO_H
#define TABLERO_H

#include "Ficha.h"

class Tablero {
private:
	Ficha tabla[3][3];
public:
	Tablero();
	void inicializarTablero();
	void mostrarTablero();
	bool colocarFicha(int,int,char);
};

#endif

