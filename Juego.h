#ifndef JUEGO_H
#define JUEGO_H

#include "Tablero.h"
class Juego {
private:
	char jugador;
	Tablero mitablero;
	void presentacionjuego();
	int turno(int);
	void posicionficha();
	void muestraopciones();
	bool checktateti();
public:
	Juego();
	void iniciaJuego();
};

#endif

