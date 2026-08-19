/*
-----------------------------------------------------------------------------
Scrivere un programma che dato un vettore di interi restituisca la media, 
la somma e il prodotto degli elementi presenti nell’array 
-----------------------------------------------------------------------------
*/

#include <stdio.h>
#define N 5
int main(void){
	int A[N];
	int i;
	
	//Inserisco i valori all'interno del Vettore
	printf("Inserisci i Valori del Vettore: \n");
	for(i=0;i<N;i++){
		printf("Inserisci valore %d: ",i);
		scanf("%d",&A[i]);
	}
	
	//Stampo il Vettore inserito
	printf("\nStampo il Vettore inserito: \n");
	for(i=0;i<N;i++){
		printf("%d\n",A[i]);
    }
    
    // Calcolo la SOMMA di tutti gli elementi all'interno del Vettore
    int Somma;
    Somma=0;
	for(i=0;i<N;i++){
		Somma=Somma+A[i];
	}
	
	//Stampo la SOMMA di tutti gli elementi all'interno del Vettore
	printf("\nLa SOMMA di tutti i valori all'interno del vettore e': %d\n",Somma);


    //Calcolo la Media di tutti gli elementi all'interno del Vettore
    int Media;
    Media=Somma/N;
    
	//Stampo la MEDIA di tutti gli elementi all'interno del Vettore
    printf("\nLa MEDIA di tutti i valori all'interno del vettore e': %d\n",Media);
    
}


