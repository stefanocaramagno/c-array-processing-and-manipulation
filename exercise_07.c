/*
---------------------------------------------------------------------------------------------------------------
Scrivere un programma in linguaggio C che esegue la fusione di due vettori di	interi ordinati in	
modo crescente.
Il programma deve eseguire le	seguenti operazioni:	
1. leggere due vettori di N interi.
	Il numero N viene inserito dall’utente ed è minore	di 20. 
	I due vettori possono avere lunghezza diversa.
	I due vettori si suppongono già ordinati in maniera crescente.
2. creare un terzo vettore di lunghezza pari alla somma delle lunghezze dei due vettori dati.
	Il	vettore	dovrà contenere i numeri contenuti nei due vettori di partenza. 
	I	numeri nel vettore devono essere ordinati in modo crescente.
3. stampare il vettore generato.

Ad esempio, si assuma che siano stati inseriti i due vettori
1	 6	15	20	25
2	 8	18	19.
Il programma dovrà visualizzare la sequenza:	1	2	6	8	15	18	19	20	25
----------------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
int main(void){
	
	
    // ----> PUNTO 1 <----
	
	// SI INSERISCE LA DIMENSIONE DEI DUE VETTORI
	
	// Vettore A
	int N;
	printf("Inserisci la Dimensione (Minore di 20) del Vettore A: ");
	do{
		scanf("%d",&N);
		if(N>20)
		    printf("Errore! Il Valore e' MAGGIORE di 20. Inserisci un altro valore: ");
	} while(N>20);

	// Vettore B
	int M;
	printf("\nInserisci la Dimensione (Minore di 20) del Vettore B: ");
	do{
		scanf("%d",&M);
		if(M>20)
		    printf("Errore! Il Valore e' MAGGIORE di 20. Inserisci un altro valore: ");
	} while(M>20);
		
	// SI INSERISCONO I VALORI NEI DUE VETTORI
	
	// Vettore A
	int A[N];
	int i;
	printf("\nInserisci Valori nel Vettore A.\n");
	for(i=0; i<N; i++){
		printf("Inserisci Valore %d: ",i);
		scanf("%d",&A[i]);
	}
	   
 	// Vettore B
	int B[M];
	int k;
	printf("\nInserisci Valori nel Vettore B.\n");
	for(k=0; k<M; k++){
		printf("Inserisci Valore %d: ",k);
		scanf("%d",&B[k]);
	}
	
	// SI STAMPANO I DUE VETTORI
	
    // Vettore A
    printf("\nStampo il Vettore A\n");
 	for(i=0; i<N; i++){
		printf("%d\n",A[i]);
	}   
    
    // Vettore B
    printf("\nStampo il Vettore B\n");
 	for(k=0; k<M; k++){
		printf("%d\n",B[k]);
	}      
    
	// SI ORDINANO I DUE VETTORI
	
    // Si Ordina il Vettore A
    int j;
    int Temp1;
    for(i=0; i<N-1; i++){
    	for(j=0; j<N-i-1; j++){
    		if(A[j]>A[j+1]){
    			Temp1 = A[j];
    			A[j] = A[j+1];
    			A[j+1] = Temp1;                    
			}
		}
	}
	
	// Si Ordina il Vettore B
	int z;
	int Temp2;
	for(k=0; k<M-1; k++){
		for(z=0; z<M-k-1; z++){
			if(B[z]>B[z+1]){
				Temp2 = B[z];
				B[z] = B[z+1];
				B[z+1] = Temp2;
			}
		}
	}
	
	// SI STAMPANO I DUE VETTORI ORDINATI	
	
	// Vettore A
    printf("\nStampo il Vettore A Ordinato: \n");
 	for(i=0; i<N; i++){
		printf("%d\n",A[i]);
	}   
		
    // Vettore B
    printf("\nStampo il Vettore B Ordinato: \n");
 	for(k=0; k<M; k++){
		printf("%d\n",B[k]);
	}    
	
    // ----> PUNTO 1 <----
    
    // SI GENERA UN TERZO VETTORE (Di Dimensioni Pari alla Somma degli altri due)  
    int C[N+M];
    
    // SI INSERISCONO I VALORI ALL'INTERNO DEL VETTORE C
    int q=0;
    
    // Si Inseriscono i valore del Vettore A
    for(i=0; i<N; i++){
    	C[q]=A[i];
    	q++;
	}
		
    // Si Inseriscono i valore del Vettore B
    for(k=0; k<M; k++){
    	C[q]=B[k];
    	q++;
	}
	
	// SI STAMPA IL VETTORE C
    printf("\nStampo il Vettore C\n");
 	for(q=0; q<(N+M); q++){
		printf("%d\n",C[q]);
	}   
	
	// SI ORDINA IL VETTORE C
	int s;
	int Temp3;
	for(q=0; q<(N+M)-1; q++){
		for(s=0; s<(N+M)-q-1; s++){
			if(C[s]>C[s+1]){
				Temp3 = C[s];
				C[s] = C[s+1];
				C[s+1] = Temp3;				
			}
		}
	}
	
	// SI STAMPA IL VETTORE C ORDINATO
    printf("\nStampo il Vettore C Ordinato: \n");
 	for(q=0; q<(N+M); q++){
		printf("%d\n",C[q]);
	}   
}
	

	
	
	
	
	
	


