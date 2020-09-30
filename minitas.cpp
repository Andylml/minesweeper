#include "classTab.h"
#include <stdlib.h>
#include <string.h>
#include <iostream>
using namespace std;

int rdtsc(){
	__asm__ __volatile__("rdtsc");
}

int random(int a,int b){
	int num;
	srand(rdtsc());
	num= a + rand()%b;
	return(num);
}

tablero::tablero(int n){
	this->n=n;
	tab = new int*[n];
	int a,i,j;
	for(a=0; a<n; a++){
		tab[a]=new int[n];
	}
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			tab[i][j]=0;
		}
	}
}
void tablero::imprimetab(){
	int i,j;
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%d",tab[i][j]);
		}
		printf("\n");
	}
}
/*
void tablero::filltab(int r, int c, int valor){
	tab[r][c]=0;
}

int tablero::recibevalor(int r, int c){
	return this->tab[r][c];
}

int tablero::getSize(){
	return this->n;
}*/

void tablero::bomberman(int r, int c){
	int bombitas,num;
	int a=0;
	bombitas= random(0,n*2);
	int i,j;
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			while(a<bombitas){
				num=random(0,4);
				if(num==4){
					tab[i][j]=-1;
					
				}a++;
			}
		}	
	}
}	

