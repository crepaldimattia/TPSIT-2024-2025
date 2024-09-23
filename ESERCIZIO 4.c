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
	//dichiarazione e inizializzazione delle variabili
    double n1=0, n2=0, risultato=0;

    //ciclo do-while
    do{
    	//output e input per l'inserimento dei numeri
        printf("Inserisci il primo numero: ");
        scanf("%lf", &n1);
        printf("Inserisci il secondo numero: ");
        scanf("%lf", &n2);
        
        //se il primo numero è > del secondo
        if(n1>n2){
       	//calcolo divisione tra il primo numero e il secondo
		risultato=n1/n2;
	    } else{
    	//calcolo divisione tra il secondo numero e il primo
		risultato=n2/n1;
	    }
	    
	  
	//se il primo o il secondo numero sono uguali a 0
	if(n1==0||n2==0){
		//output
	    printf("Divisione per 0 impossibile!");
	    //uscita dal ciclo
	    break;
	}
	
	//se il risultato è <0
	if(risultato<0){
		//output
	    printf("Non è possibile calcolare la radice di un numero negativo!");
	    //uscita dal ciclo
	    break;
	}

	//se il risultato è >0
	if(risultato>0){
		//calcolo della radice  del rapporto tra il valore maggiore e quello minore dei due numeri
	    risultato=sqrt(risultato);
	    //output
	    printf("Radice quadrata del rapporto tra i due numeri: %lf\n", risultato);
	}
	
    }while(risultato>0);
    
    

	return 0;
}
