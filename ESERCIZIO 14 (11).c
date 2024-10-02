/*Dati due numeri interi positivi N1 ed N2 calcolare, mediante la somma
ripetuta, il prodotto dei due numeri e visualizzarli.*/
#include <stdio.h>
int main(int argc, char *argv[]){
	//dichiarazione e inizalizzazione delle variabili
	int n1, n2, i = 0, prodotto = 0;
	//ciclo do-while per verificare che il primo numero sia maggiore o uguale a 1
	do{
		//inserimento del primo numero
		printf("Inserisci il primo numero che deve essere maggiore o ugaule a 1: ");
		scanf("%d", &n1);
	} while (n1 < 1);

	//ciclo do-while per verificare che il secondo numero sia maggiore o uguale a 1
	do{
		//inserimento del secondo numero
		printf("Inserisci il secondo numero che deve essere maggiore o ugaule a 1: ");
		scanf("%d", &n2);
	} while (n2 < 1);

	//ciclo do-while per verificare che la variabile i sia maggiore o ugaule a 0
	do{
		//calcolo del prodotto
		prodotto = prodotto + n1;
		//aggiornamento del contatore
		i = i + 1;
	} while (i < n2);

	//output
	printf("Il prodotto fra i due numeri è: %d\n\n", prodotto);
	
	return 0;
}
