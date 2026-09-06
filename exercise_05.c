/*
---------------------------------------------------------------------------------------------------------------
Scrivere un programma in linguaggio C che legge N numeri interi da tastiera e li memorizza in un vettore. 
Il numero N viene inserito dall’utente ed è minore di 20. 
Il programma deve generare un secondo vettore che compatta i numeri contenuti nel primo vettore. 
In particolare: 
• ogni numero che compare ripetuto nel primo vettore, deve comparire una sola volta nel secondo vettore 
• ogni numero uguale a zero presente nel primo vettore non deve comparire nel secondo vettore. 
Il programma deve visualizzare il contenuto del secondo vettore. 

Ad esempio, si supponga N=8 e si consideri la sequenza di numeri 1 18 3 0 24 3 6 0 inseriti da tastiera. 
Il programma deve visualizzare 1 18 3 24 6
----------------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
int main(void){
	
	// SI INSERISCE LA DIMENSIONE DEL VETTORE A
	int N;
	printf("Inserisci la Dimensione (minore di 20) del Vettore A: ");
	do{
		scanf("%d",&N);
		if(N>20){
			printf("Errore: Il Valore inserito e' MAGGIORE DI 20. Inserire un Nuovo Valore: ");
			scanf("%d",&N);
		}
	} while (N>20);

	
	// SI INSERISCONO I VALORI ALL'INTERNO DEL VETTORE A
	int A[N];
	int i;
	printf("\nSi Inseriscono i Valori all'interno de Vettore A:\n");
	for(i=0; i<N; i++){
		printf("Inserisci Valore %d: ",i);
		scanf("%d",&A[i]);
	}
	
	// SI STAMPA IL VETTORE A
	printf("\nSi Stampano i valori del Vettore A a Video: \n");
	for(i=0; i<N; i++){
		printf("%d\n",A[i]);
	}
	
	// SI GENERA IL VETTORE B
	int k=0;
	int j=0;
	int B[N];
	int Flag=0;
	for(i=0; i<N; i++){
		if(A[i]!=0){
			for (k=0; k<N; k++){
				if(A[i]==B[k]){
					Flag=1;
				}
			}
			if (Flag == 0) {
				B[j]=A[i];
				j++;
			}
		}
		Flag=0;
	}
	
	// SI STAMPA IL VETTORE B
	printf("\nSi Stampa il Vettore B: \n");
	for(i=0; i<=j; i++){
		printf("%d\n",B[i]);
	}
	
}





