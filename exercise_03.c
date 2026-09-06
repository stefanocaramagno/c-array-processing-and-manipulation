/*
--------------------------------------------------------------------------------------------------
Scrivere un programma in linguaggio C che, acquisito da tastiera un vettore di N numeri, ne ruoti
circolarmente il contenuto (verso destra o verso sinistra) di M posizioni e visualizzi la configurazione finale. 
Il verso della rotazione ed il valore di M sono richiesti come input. 
  
Esempio: 
Vettore iniziale: 1 2 3 4 5 6 7 8 9 10 
Verso di rotazione? (1 = Sinistra, 2 = Destra) 
=> 1 Numero di Shift 
=> 2 Vettore Finale (ruotato a sinistra di 2 posizioni): 3 4 5 6 7 8 9 10 1 2
----------------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
int main(void){
	
	// Si definisce la Dimensione del Vettore
	int N;
	printf("Inserisci la Dimensione del Vettore: ");
	scanf("%d",&N);
	
	int A[N];
	int i;
	
	// Si Inseriscono i Valori nel Vettore 
	printf("Inserisci i Valori del Vettore: \n");
	for(i=0;i<N;i++){
		printf("Inserisci valore %d: ",i);
		scanf("%d",&A[i]);
	}
	
	// Si Stampa il Vettore inserito da tastiera
	printf("\nStampo il Vettore Inserito: \n");
	for(i=0;i<N;i++){
		printf("%d\n",A[i]);
    }
    
        int m; // Numero di Posizioni da traslare
        int Verso; // Verso di Rotazione
        
	    printf("\nInserisci il Verso di Rotazione del Vettore (1 = Sinistra & 2 = Destra): ");
	    scanf("%d",&n);
	    
	    // Si Trasla il Vettore verso SINISTRA
	    if(Verso==1){
	    	printf("\nIL VETTORE TRASLA A SINISTRA");
	    	printf("\nDi quante posizioni vuoi far traslare il Vettore? ");
	    	scanf("%d",&m);
	    	
	    	for(int k=0; k<m; k++){
	    		int Temporanea = A[0];
	    		for(i=0; i<N-1; i++){
					A[i] = A[i+1];	    			
				}
				A[N-1] = Temporanea;		    		   		
            }
            printf("\nStampo il Vettore traslato a Sinistra: \n");
            for(i=0; i<N; i++){
		    printf("%d\n",A[i]);	
	        }
	    }
	    
	    // Si Trasla il Vettore verso DESTRA
	    if(Verso==2){
	    	printf("\nIL VETTORE TRASLA A DESTRA");
	    	printf("\nDi quante posizioni vuoi far traslare il Vettore? ");
	    	scanf("%d",&m);
	    	
	    	for(int k=0; k<m; k++){
				int Temporanea = A[N-1];
				for(i=N-1; i>=0; i--){
					A[i] = A[i-1];
				}
				A[0] = Temporanea;	
            }
            
            printf("\nStampo il Vettore traslato a Destra: \n");
            for(i=0; i<N; i++){
		    printf("%d\n",A[i]);	
		    }
		
        }
}
    
    
    
    
    
    
    
    
    
    
    





