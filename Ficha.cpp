#include "Ficha.h"


Ficha::Ficha() {}

Ficha::Ficha(char _figura){
	figura = _figura;
}

void Ficha::setFicha(char _figura){
	figura = _figura;
}

char Ficha::getFicha(){
	return figura;
}
