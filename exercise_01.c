/*
-------------------------------------------------------------
Scrivere un programma che stampa in ordine inverso una	
sequenza di numeri inseriti dall’utente  
-------------------------------------------------------------
*/

#include <stdio.h>
#define N 5
int main(void){
	int A[N];
	int i;
	
	printf("Inserisci i Valori del Vettore: \n");
	for(i=0;i<N;i++){
		printf("Inserisci valore %d: ",i);
		scanf("%d",&A[i]);
	}
	
	printf("\nStampo il Vettore inserito: \n");
	for(i=0;i<N;i++){
		printf("%d\n",A[i]);
    }

	printf("\nStampo il Vettore inserito, ma in ordine inverso: \n");
	for(i=N-1;i>=0;i--){
		printf("%d\n",A[i]);
	}

}


