 /* SPECIFICA
  * Input: Una sequenza s di interi e la sua lunghezza l
  * Pre-condizione: l � la lunghezza di s 
  * Output: Un intero divisibili
  * Post-condizione: divisibili � pari a 1 se ogni due elementi consecutivi nella sequenza
  * sono uno divisibile per l'altro, � pari a 0 altrimenti.
  * 
  * TIPO DI PROBLEMA: Verifica universale */

#include <stdio.h>

/* funzione che prende come parametro un array di interi (e la sua lunghezza) e verifica 
 * se ogni due elementi consecutivi nella sequenza sono uno divisibile per l'altro. */
int consecutiviDivisibili(int interi[], int lunghezza) {
	// pre: lunghezza � la lunghezza di interi
	int divisibili;			// variabile di universalit�
	int i;						// variabile contatore
	
	/* inizialmente tutte le coppie di elementi verificate sono buone */
	divisibili = 1;
	
	/* guarda tutte le coppie di elementi consecutivi, fino a che non finisci la sequenza o 
	 * trovi due elementi che non sono uno divisibile per l'altro */
	i=0;
	while(i<lunghezza-1 && divisibili) {
		/* i due elementi correnti soddisfano la propriet�? */
		if(interi[i]%interi[i+1]!=0 && interi[i+1]%interi[i]!=0)
			divisibili = 0;
		else 
			i++; 							// passa ai prossimi due elementi
	}
	return divisibili;
}
 
/* funzione principale */
int main() {
	int lunghezza;		// numero di elementi dell'array
	
	/* INPUT */
	printf("Ciao utente, sono un programma che legge una sequenza di interi e verifica se ");
	printf("ogni due elementi consecutivi nella sequenza sono uno divisibile per l'altro.\n\n");
	
	printf("Quanti interi vuoi introdurre? ");
	scanf("%d", &lunghezza);
	
	int sequenza[lunghezza];
	printf("\n");
	for(int i=0; i<lunghezza; i++) {
		printf("Introduci un intero: ");
		scanf("%d", &sequenza[i]);
	}

	/* OUTPUT */
	if(consecutiviDivisibili(sequenza,lunghezza))
		printf("\nOgni due elementi consecutivi nella sequenza sono uno divisibile per l'altro.\n");
	else 	
		printf("\nEsistono due elementi consecutivi nella sequenza che non sono uno divisibile per l'altro.\n");
}  
