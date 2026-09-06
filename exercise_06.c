/*
---------------------------------------------------------------------------------------------------------------
Siano dati due vettori di interi inseriti da tastiera. La lunghezza dei due vettori è inserita 
dall’utente da tastiera. 
I due vettori possono avere lunghezze diverse, ma possono contenere al massimo 30 numeri. 
Si scriva un programma in linguaggio C per generare un terzo vettore che contiene l’intersezione tra due 
vettori. 
Tale vettore deve contenere i numeri presenti in entrambi i vettori dati. 
 
Ad esempio, si assuma che siano stati inseriti i due vettori: 
1 6 15 20 25
2 20 18 6 
Il programma deve visualizzare la sequenza 6 20
----------------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
int main(void){
	
	// SI INSERISCE LA DIMENSIONE DEI DUE VETTORI
	
	// Vettore A
	int N;
	printf("Inserisci la Dimensione (Massimo 30) del Vettore A: ");
	do{
		scanf("%d",&N);
		if(N>30){
			printf("Errore! Il Valore e' MAGGIORE di 30. Inserisci un altro valore: ");
			scanf("%d",&N);
		}
	} while(N>30);
	
	// Vettore B
	int M;
	printf("\nInserisci la Dimensione (Massimo 30) del Vettore B: ");
	do{
		scanf("%d",&M);
		if(M>30){
			printf("Errore! Il Valore e' MAGGIORE di 30. Inserisci un altro valore: ");
			scanf("%d",&M);
		}
	} while(M>30);
	

	// SI INSERISCONO I VALORI NEI DUE VETTORI
	
	// Vettore A
	int A[N];
	int i;
	printf("\nInserisci i Valori nel Vettore A.\n");
	for(i=0; i<N; i++){
		printf("Inserisci Valore %d: ",i);
		scanf("%d",&A[i]);
	}
	
	// Vettore B
	int B[M];
	int k;
	printf("\nInserisci i Valori nel Vettore B.\n");
	for(k=0; k<M; k++){
		printf("Inserisci Valore %d: ",k);
		scanf("%d",&B[k]);
	}
	
	
	// SI STAMPANO I VALORI DEI DUE VETTORI
	
	// Vettore A
	printf("\nStampo i Valori del Vettore A.\n");
	for(i=0; i<N; i++){
		printf("%d\t",A[i]);
	}
	
	// Vettore B
	printf("\n\nStampo i Valori del Vettore B.\n");
	for(k=0; k<M; k++){
		printf("%d\t",B[k]);
	}
    
    // CONFRONTO DIMENSIONI DEI DUE VETTORI
    int S;
    if(N>M){
    	S=N;
	}else{
		S=M;
	}

	// SI GENERA IL VETTORE C
	int C[S];
	int DIM=0;
	
	for(i=0; i<N; i++){
		for(k=0; k<M; k++){
			if(A[i]==B[k]){
				C[DIM]=B[k];
				DIM++;
			}		
		}
	}
	
	printf("\n\nStampo il Vettore C\n");
	for(i=0; i<DIM; i++){
		printf("%d\n",C[i]);
	}
}


