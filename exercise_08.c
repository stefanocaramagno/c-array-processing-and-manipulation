/*
---------------------------------------------------------------------------------------------------------------
Scrivere un programma	in linguaggio C	che	esegue la fusione di due vettori di	interi ordinati	in	
modo crescente.	 
Il programma deve eseguire le seguenti operazioni:	
1. leggere due vettori di N interi.	 
	Il numero N viene inserito dall’utente ed è minore di 20.	 
	I due vettori possono avere lunghezza diversa.	 
	I due vettori si suppongono già ordinati in maniera crescente.
2. creare	un terzo vettore di	lunghezza pari alla	somma delle	lunghezze dei due vettori dati.	
	Il vettore	dovrà contenere	i numeri contenuti nei due vettori di partenza nel quale sono eliminati	i doppioni.	 
	I numeri nel vettore devono essere	ordinati in	modo crescente.	
3. Stampare il vettore generato.	

Ad esempio, si assuma	che siano stati	inserit	i due vettori: 1  6	 15	 20	 25  e	2  8  15  19.	
Il programma dovrà visualizzare la sequenza:	 1	 2	 6	 8	 15	 19	 20	 25	
Si supponga che i	vettori di partenza non contengano doppioni. 
Effettuare tale controllo al momento della lettura.	
----------------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
int main(void){
	
	// ---> Punto 1 <---
	
	// SI INSERISCE LA DIMENSIONE DEL VETTORE 
	int N;
	printf("Inserisci la Dimensione (minore di 20) del Vettore A: ");
	do{
		scanf("%d",&N);
		if(N>20){
			printf("Errore! Il Valore e' Maggiore di 20. Inserire un altro valore: ");
		}
	} while(N>20);
	
	// SI INSERISCE LA DIMENSIONE DEL VETTORE B
	int M;
	printf("\nInserisci la Dimensione (minore di 20) del Vettore B: ");
	do{
		scanf("%d",&M);
		if(M>20){
			printf("Errore! Il Valore e' Maggiore di 20. Inserire un altro valore: ");
		}
	} while(M>20);
	
	
	int i;
	
	// SI INSERISCONO I VALORI NEL VETTORE A
	int A[N];
	printf("\nInserisci i valori all'interno del Vettore A\n");
	for(i=0; i<N; i++){
		printf("Inserisci Valore %d: ",i);
		scanf("%d",&A[i]);
	}
	
	// SI INSERISCONO I VALORI NEL VETTORE B
	int B[M];
	printf("\nInserisci i valori all'interno del Vettore B\n");
	for(i=0; i<M; i++){
		printf("Inserisci Valore %d: ",i);
		scanf("%d",&B[i]);
	}
	
	// SI STAMPA IL VETTORE A
	printf("\nStampo i valori del Vettore A:\n");
	for(i=0; i<N; i++){
		printf("%d\n",A[i]);
	}	
	
	// SI STAMPA IL VETTORE B
	printf("\nStampo i valori del Vettore B:\n");
	for(i=0; i<M; i++){
		printf("%d\n",B[i]);
	}		
	
    int j;
    int Temp;
    
    // SI ORDINA IL VETTORE A
    for(i=0; i<N-1; i++){
    	for(j=0; j<N-i-1; j++){
    		if(A[j]>A[j+1]){
    			Temp = A[j];
    			A[j] = A[j+1];
    			A[j+1] = Temp;
			}
		}
	}

    // SI ORDINA IL VETTORE B
    for(i=0; i<M-1; i++){
    	for(j=0; j<M-i-1; j++){
    		if(B[j]>B[j+1]){
    			Temp = B[j];
    			B[j] = B[j+1];
    			B[j+1] = Temp;
			}
		}
	}

	// SI STAMPA IL VETTORE A ORDINATO
	printf("\nStampo i valori del Vettore A Ordinato:\n");
	for(i=0; i<N; i++){
		printf("%d\n",A[i]);
	}	
	
	// SI STAMPA IL VETTORE B ORDINATO
	printf("\nStampo i valori del Vettore B Ordinato:\n");
	for(i=0; i<M; i++){
		printf("%d\n",B[i]);
	}	


	// ---> Punto 2 <---

	int dimC=0;
	int found=0;
	int C[N+M];

    // SI AGGIUNGONO IN C I VALORI DI A NON DUPLICATI	
	for(i=0; i<N; i++){
		found=0;
		for(j=0; j<dimC && found == 0; j++){
			if (C[j]==A[i]) 
				found=1;	
		}
		if (found == 0) {
			C[j]=A[i];
			dimC++;
			}
	}
	
    // SI AGGIUNGONO IN C I VALORI DI B NON DUPLICATI		
	for(i=0; i<M; i++){
		found=0;
		for(j=0; j<dimC && found == 0; j++){
			if (C[j]==B[i]) 
				found=1;	
		}
		if (found == 0) {
			C[j]=B[i];
			dimC++;
			}
	}
	
	// ---> Punto 3 <---
	
    // SI ORDINA IL VETTORE A
    for(i=0; i<N-1; i++){
    	for(j=0; j<N-i-1; j++){
    		if(C[j]>C[j+1]){
    			Temp = C[j];
    			C[j] = C[j+1];
    			C[j+1] = Temp;
			}
		}
	}	
	
	// SI STAMPA IL VETTORE C ORDINATO
	printf("\nStampo i valori del Vettore C compattato:\n");
	for(i=0; i<dimC; i++){
		printf("%d\n",C[i]);
	}
}

	
	
	
	
	
	


