#include "Tablero.h"
#include<iostream>
#include "Ficha.h"
using namespace std;


Tablero::Tablero() {}


void Tablero::inicializarTablero(){//inicia el tablero designandole un espacio
	for(int i =0;i<3;i++){
		for(int j =0;j<3;j++){
			tabla[i][j]=' ';
		}
	}
}


void Tablero::mostrarTablero(){//imprime el tablero
	cout<<"     A   B   C  "<<endl;;
	cout<<"   ============="<<endl;
	int largo = 1;
	for(int i = 0;i<3;i++){
		cout<<largo;
		largo ++;
		for(int j =0;j<3;j++){
			cout<<"  |";
			cout<<tabla[i][j].getFicha();
		}
		cout<<"  |";
		cout<<endl;
		cout<<"   ============="<<endl;
	}
}

bool Tablero::colocarFicha(int x, int y, char c){//En caso que se agregue una ficha en el espacio, devuelve true.
	if(tabla[x][y].getFicha()== ' '){
		tabla[x][y]= c;
		return true;
	}else{
		return false;
	}
}


