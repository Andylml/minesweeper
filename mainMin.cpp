#include "classTab.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int tam,i,j;
	cout<<"Ingresa el tamaño del tablero: ";
	cin>>tam;
	tablero matriz(tam);
	/*for(i=0; i<tam; i++){
		for(j=0; j<tam; j++){
			matriz.filltab(i,j,tam);
		}
	}*/
	matriz.bomberman(i,j);
	matriz.imprimetab();
}
