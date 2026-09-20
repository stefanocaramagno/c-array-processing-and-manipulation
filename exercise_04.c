/*
---------------------------------------------------------------------------------------------------------------
- Scrivere un programma in linguaggio C che riceve in ingresso una sequenza di N numeri interi. 
  Il valore N è inserito dall’utente. I numeri sono memorizzati in un vettore. Il programma esegue le 
  seguenti operazioni: 
  
  1. visualizza il vettore.
  2. esegue uno spostamento (shift) a sinistra di una posizione del contenuto del vettore. Pertanto ogni 
     elemento del vettore deve assumere il valore dell’elemento immediatamente successivo 
     all’interno del vettore. L’elemento di indice N-1 deve assumere il valore zero. Ad esempio dato 
     il vettore: 1 10 15 18 Il programma deve generare il vettore: 10 15 18 0. 
	 Il programma visualizza il vettore ottenuto. 
  3. esegue uno spostamento (shift) a destra di una posizione del contenuto del vettore ottenuto nel passo 
     precedente. Pertanto ogni elemento del vettore deve assumere il valore 
     dell’elemento immediatamente precedente all’interno del vettore. L’elemento di indice 0 deve 
     assumere il valore zero. 
     
  Ad esempio dato il vettore: 10 15 18 0 Il programma deve generare il vettore: 0 10 15 18.
  Il programma visualizza il vettore ottenuto. 
----------------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
int main(void){
	
	//Si Inserisce la Dimensione del Vettore
	int N;
	printf("Inserisci la Dimensione del Vettore: ");
	scanf("%d",&N);
	
	// Si Inseriscono i Valori nel Vettore
	int A[N];
	int i;
	printf("\nInserisci i Valori all'interno del Vettore: \n");
	for(i=0; i<N; i++){
		printf("Inserisci Valore %d: ",i);
		scanf("%d",&A[i]);
	}
    
    // Punto 1: Si Stampa il Vettore con i Valori Inseriti
    printf("\nIl Vettore con i valori inseriti e' il seguente: \n");
  	for(i=0; i<N; i++){
		printf("%d\n",A[i]);
	}  
	
	// Punto 2
	for(i=0; i<N-1; i++){
		A[i] = A[i+1];
	}
	A[N-1] = 0;

	
	printf("\nStampo il Vettore Traslato verso SINISTRA di una Posizione\n");
	for(i=0;i<N; i++){
		printf("%d\n",A[i]);
	}
	
	// Punto 3
	for(i=N; i>0; i--){
		A[i] = A[i-1];
	}
	A[0] = 0;
	
	printf("\nStampo il Vettore Traslato verso DESTRA di una Posizione\n");
	for(i=0;i<N; i++){
		printf("%d\n",A[i]);
	}
}
    





