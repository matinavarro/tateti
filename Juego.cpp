#include "Juego.h"
#include<iostream>
#include <cstdlib>
#include <conio.h>
#include "Tablero.h"
#include <iomanip>
using namespace std;

Juego::Juego(){}


void Juego::presentacionjuego(){
	cout<<"=====Bienvenidos al Ta-Te-Ti=====";
	cout<<endl;
	cout<<"======Que comience el juego====="<<endl;
}

int Juego::turno(int x){
	if(x%2 == 0){
	jugador = 'X';
	cout<<endl;	
	cout<<"Es el turno del JUGADOR 1 - FICHA = X"<<endl;
	}
	if(x%2 != 0){
		jugador = 'O';
		cout<<endl;
		cout<<"Es el turno del JUGADOR 2 - FICHA = O"<<endl;
	}
}
void Juego::posicionficha(){
	int pos;
	cout<<"\nElige una opcion:";
	cin>>pos;
		switch(pos){
		case 1:
			if(jugador == 'X'){
				mitablero.colocarFicha(0,0,jugador);
				mitablero.mostrarTablero();
				muestraopciones();
				break;
			}
			if(jugador == 'O'){
				mitablero.colocarFicha(0,0,jugador);
				mitablero.mostrarTablero();
				muestraopciones();
				break;
			}
		case 2:
			if(jugador == 'X'){
				mitablero.colocarFicha(0,1,jugador);
				mitablero.mostrarTablero();
				muestraopciones();
				break;
			}
			if(jugador == 'O'){
				mitablero.colocarFicha(0,1,jugador);
				mitablero.mostrarTablero();
				muestraopciones();
				break;
			}   
		case 3:
			if(jugador == 'X'){
				mitablero.colocarFicha(0,2,jugador);
				mitablero.mostrarTablero();
				muestraopciones();
				break;
			}
			if(jugador == 'O'){
				mitablero.colocarFicha(0,2,jugador);
				mitablero.mostrarTablero();
				muestraopciones();
				break;
			}
		case 4:
			if(jugador == 'X'){
				mitablero.colocarFicha(1,0,jugador);
				mitablero.mostrarTablero();
				muestraopciones();
				break;
			}
			if(jugador == 'O'){
				mitablero.colocarFicha(1,0,jugador);
				mitablero.mostrarTablero();
				muestraopciones();
				break;
			}
		case 5:
			if(jugador == 'X'){
				mitablero.colocarFicha(1,1,jugador);
				mitablero.mostrarTablero();
				muestraopciones();
				break;
			}
			if(jugador == 'O'){
				mitablero.colocarFicha(1,1,jugador);
				mitablero.mostrarTablero();
				muestraopciones();
				break;
			}
		case 6:
			if(jugador == 'X'){
				mitablero.colocarFicha(1,2,jugador);
				mitablero.mostrarTablero();
				muestraopciones();
				break;
			}
			if(jugador == 'O'){
				mitablero.colocarFicha(1,2,jugador);
				mitablero.mostrarTablero();
				muestraopciones();
				break;
			}
		case 7:
			if(jugador == 'X'){
				mitablero.colocarFicha(2,0,jugador);
				mitablero.mostrarTablero();
				muestraopciones();
				break;
			}
			if(jugador == 'O'){
				mitablero.colocarFicha(2,0,jugador);
				mitablero.mostrarTablero();
				muestraopciones();
				break;
			}
		case 8:
			if(jugador == 'X'){
				mitablero.colocarFicha(2,1,jugador);
				mitablero.mostrarTablero();
				muestraopciones();
				break;
			}
			if(jugador == 'O'){
				mitablero.colocarFicha(2,1,jugador);
				mitablero.mostrarTablero();
				muestraopciones();
				break;
			}
		case 9:
			if(jugador == 'X'){
				mitablero.colocarFicha(2,2,jugador);
				mitablero.mostrarTablero();
				muestraopciones();
				break;
			}
			if(jugador == 'O'){
				mitablero.colocarFicha(2,2,jugador);
				mitablero.mostrarTablero();
				muestraopciones();
				break;
			}		
		}
		
}

void Juego::muestraopciones(){
	if(mitablero.colocarFicha(0,0,' ')== true){
		cout<<"A1 presiona 1"<<endl;
	}
	if(mitablero.colocarFicha(0,1,' ')== true){
		cout<<"B1 presiona 2"<<endl;
	}
	if(mitablero.colocarFicha(0,2,' ')== true){
		cout<<"C1 presiona 3"<<endl;
	}
	if(mitablero.colocarFicha(1,0,' ')== true){
		cout<<"A2 presiona 4"<<endl;
	}
	if(mitablero.colocarFicha(1,1,' ')== true){
		cout<<"B2 presiona 5"<<endl;
	}
	if(mitablero.colocarFicha(1,2,' ')== true){
		cout<<"C2 presiona 6"<<endl;
	}
	if(mitablero.colocarFicha(2,0,' ')== true){
		cout<<"A3 presiona 7"<<endl;
	}
	if(mitablero.colocarFicha(2,1,' ')== true){
		cout<<"B3 presiona 8"<<endl;
	}
	if(mitablero.colocarFicha(2,2,' ')== true){
		cout<<"C3 presiona 9"<<endl;
	}
}
bool Juego::checktateti(){
	for(int i =0;i<3;i++){
		if (mitablero.colocarFicha(0,i,'X')==mitablero.colocarFicha(0,i+1,'X')&& mitablero.colocarFicha(0,i+1,'X')==mitablero.colocarFicha(2,i+2,'X')){
				cout<<endl;
				cout<<"El ganador es Jugador 1, Felicitaciones!"<<endl;
				return true;
			}else{
				if (mitablero.colocarFicha(0,i,'O')==mitablero.colocarFicha(0,i+1,'O')&& mitablero.colocarFicha(0,i+1,'O')==mitablero.colocarFicha(2,i+2,'O')){
				cout<<endl;
				cout<<"El ganador es Jugador 2, Felicitaciones!"<<endl;
				return true;
				}
			}
		}
	for(int j =0;j<3;j++){
		if (mitablero.colocarFicha(j,0,'X')== mitablero.colocarFicha(j+1,1,'X') && mitablero.colocarFicha(j+1,1,'X')==mitablero.colocarFicha(j+2,2,'X')){
				cout<<endl;
				cout<<"El ganador es Jugador 1, Felicitaciones!"<<endl;
				return true;
			}else{
				if (mitablero.colocarFicha(j,0,'X')== mitablero.colocarFicha(j+1,1,'X') && mitablero.colocarFicha(j+1,1,'X')==mitablero.colocarFicha(j+2,2,'X')){
				cout<<endl;
				cout<<"El ganador es Jugador 2, Felicitaciones!"<<endl;
				return true;
				}
			}
		}
	if (mitablero.colocarFicha(0,0,'X')== mitablero.colocarFicha(1,1,'X') && mitablero.colocarFicha(1,1,'X')==mitablero.colocarFicha(2,2,'X')){
		cout<<endl;
		cout<<"El ganador es Jugador 1, Felicitaciones!"<<endl;
		return true;
	}else{
		if (mitablero.colocarFicha(0,0,'X')== mitablero.colocarFicha(1,1,'X') && mitablero.colocarFicha(1,1,'X')==mitablero.colocarFicha(2,2,'X')){
		cout<<endl;
		cout<<"El ganador es Jugador 2, Felicitaciones!"<<endl;
		return true;
		}
	}
	if (mitablero.colocarFicha(0,2,'X')== mitablero.colocarFicha(1,1,'X') && mitablero.colocarFicha(1,1,'X')==mitablero.colocarFicha(2,0,'X')){
		cout<<endl;
		cout<<"El ganador es Jugador 1, Felicitaciones!"<<endl;
		return true;
	}else{
		if (mitablero.colocarFicha(0,2,'X')== mitablero.colocarFicha(1,1,'X') && mitablero.colocarFicha(1,1,'X')==mitablero.colocarFicha(2,0,'X')){
		cout<<endl;
		cout<<"El ganador es Jugador 2, Felicitaciones!"<<endl;
		return true;
		}
	}
}

void Juego::iniciaJuego(){
	int jugadas=0;
	bool inicio = true;
	presentacionjuego();
	mitablero.inicializarTablero();
	mitablero.mostrarTablero();
	cout<<"A1 presiona 1:\nB1 presiona 2:\nC1 presiona 3:\nA2 presiona 4:\nB2 presiona 5:\nC2 presiona 6:\nA3 presiona 7:\nB3 presiona 8:\nC3 presiona 9:"<<endl;;
	while(inicio == true){
		turno(jugadas);
		posicionficha();
		jugadas ++;
		if(jugadas >=9){
			inicio = false;
			checktateti();
		}
	}
}



