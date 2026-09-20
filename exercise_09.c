/*
------------------------------------------------------------------
Scrivere un	programma che dato una sequenza di N valori reali
(con N definito	come costante), carica i valori	in	un	vettore	e
copia in un secondo	vettore	tutti i valori	maggiori di	0 e	ne	
stampa il contenuto.
------------------------------------------------------------------
*/

#include <stdio.h>
#define N 5
int main(void){
	float A[N];
	float B[N];
	int i;
	int DimensioneVettoreB;
    DimensioneVettoreB=0;
	
	//Inserisco i valori all'interno del Vettore A.
	printf("Inserisci i Valori del Vettore: \n");
	for(i=0;i<N;i++){
		printf("Inserisci valore %d: ",i);
		scanf("%f",&A[i]);
		if(A[i]>0){
			B[DimensioneVettoreB]=A[i];
			DimensioneVettoreB++;
		}
	}
	
	//Stampo il Vettore A inserito.
	printf("\nStampo il Vettore inserito: \n");
	for(i=0;i<N;i++){
		printf("%.3f\n",A[i]);
	}
	
	//Stampo il Vettore B con i soli valori del Vettore A maggiori di 0.
	printf("\nStampo il Vettore B con i soli valori del Vettore A maggiori di 0: \n");
	for(i=0;i<DimensioneVettoreB;i++){
		printf("%.3f\n",B[i]);	
	}
}




