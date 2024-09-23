/*Progettare un algoritmo che effettui la lettura da tastiera di una serie
di coppie di valori numerici reali (sia positivi che negativi che zero).
Per ciascuna coppia, l’algoritmo deve calcolare e stampare il valore
della radice quadrata del rapporto tra il valore maggiore e quello
minore dei due. Il programma termina quando vengono inseriti dei valori
che non permettono di svolgere il calcolo nel dominio dei numeri reali.
Prima di terminare si richiede di stampare un messaggio che indichi la
ragione per cui non è stato possibile svolgere il calcolo.*/
#include <stdio.h>
#include <math.h>
int main(){
    double n1=0, n2=0, risultato=0;

    
    do{
        printf("Inserisci il primo numero: ");
        scanf("%lf", &n1);
        printf("Inserisci il secondo numero: ");
        scanf("%lf", &n2);
        
        if(n1>n2){
		risultato=n1/n2;
	    } else{
		risultato=n2/n1;
	    }
	    
	    
	if(n1==0||n2==0){
	    printf("Divisione per 0 impossibile!");
	    break;
	}
	
	if(risultato<0){
	    printf("Non è possibile calcolare la radice di un numero negativo!");
	    break;
	}

	
	if(risultato>0){
	    risultato=sqrt(risultato);
	    printf("Radice quadrata del rapporto tra i due numeri: %lf\n", risultato);
	}
	
    }while(risultato>0);
    
    

	return 0;
}
