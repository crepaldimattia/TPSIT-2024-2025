/*Progettare un algoritmo che effettui la lettura da tastiera di una serie di coppie di valori numerici.
L’algoritmo deve calcolare e stampare il rapporto tra il valore minore e quello maggiore dei due. Il
programma termina quando uno dei due valori o entrambi sono uguali a zero.*/
#include <stdio.h>
int main(){
	double numero1=0, numero2=0, min=0, max=0, risultato=0;
	
	do{
	printf("Inserisci il primo numero: ");
	scanf("%lf", &numero1);
	printf("Inserisci il secondo numero: ");
	scanf("%lf", &numero2);
	
	if(numero1>numero2){
		max=numero1;
		min=numero2;
	} else{
		max=numero2;
		min=numero1;
	}
	
	risultato=min/max;
	printf("Il risultato è: %lf\n", risultato);
	
}while(numero1!=0&&numero2!=0);
return 0;	
}
