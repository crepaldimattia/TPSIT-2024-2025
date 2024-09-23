/*Progettare un algoritmo che effettui la lettura da tastiera di una serie di coppie di valori numerici.
L’algoritmo deve calcolare e stampare il rapporto tra il valore minore e quello maggiore dei due. Il
programma termina quando uno dei due valori o entrambi sono uguali a zero.*/
#include <stdio.h>
int main(){
	//dichiarazione e inizializzazione delle variuabili
	double numero1=0, numero2=0, min=0, max=0, risultato=0;
	
	//ciclo do-while
	do{
	//output e input per l'inserimento dei numeri
	printf("Inserisci il primo numero: ");
	scanf("%lf", &numero1);
	printf("Inserisci il secondo numero: ");
	scanf("%lf", &numero2);
	
	//se il primo numero è > del secondo
	if(numero1>numero2){
		//assegno il primo numero come massimo e il secondo come minimo
		max=numero1;
		min=numero2;
	} else{
		//assegno il primo numero come minimo e il secondo come massimo
		max=numero2;
		min=numero1;
	}
	
	//calcolo della divisione tra il numero minimo e massimo
	risultato=min/max;
	//output
	printf("Il risultato è: %lf\n", risultato);
	
}while(numero1!=0&&numero2!=0);
return 0;	
}
