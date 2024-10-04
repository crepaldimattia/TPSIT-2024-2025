/*Dato un numero N calcolare e visualizzare tutte le coppie di numeri minori di N che
danno per somma il numero stesso. Non considerare la proprietà commutativa. */
#include <stdio.h>
int main(int argc, char *argv[]){
	//dichiarazione e inizializzazione delle variabili
	int n, j = 1, i;

	//ciclo do-while per verificare che il numero sia maggiore di 0
	do
	{
		//inserimento numero
		printf("Inserisci un numero maggiore di 0: ");
		scanf("%d", &n);
		
		//se il numero è minore di 0
		if(n<0)
		//output
		printf("Il numero deve essere maggiore di 0!\n");
	} while (n < 0);

	//calcolo di i
	i = n - 1;

	//ciclo do-while per calcolare la somma dei numeri
	do
	{
		//output
		printf("%d+%d=%d\n", j, i, n);
		//aggiornamento di j
		j++;
		//aggiornamento di i
		i--;
	} while (j <= n);

	return 0;
}
