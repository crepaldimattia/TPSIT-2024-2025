/*Progettare un algoritmo che risolve il seguente problema. Si desidera 
calcolare la somma delle radici quadrate di N valori numerici inseriti 
dall’utente, con N inserito in input. 
L’algoritmo deve stampare la somma calcolata. L’algoritmo deve terminare
con un messaggio di errore quando viene inserito un numero che non
permette di effettuare il calcolo (nel dominio dei numeri reali).*/

#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[]){
	//dichiarazione e inizializzazione delle variabili
	double numero=0, somma=0, radice=0; 
	int quantità=0, posizione=0; 
	
	//chiaedo quanti numeri vuole inserire l'utente
	printf("Quanti valori vuoi inserire? ");
	scanf("%d", &quantità);
	
	//ciclo for
	for(int i=0; i<quantità; i++){
		//contatore
		posizione++;
		//inserimento numeri
		printf("Inserisci il %d° numero: ", posizione);
		scanf("%lf", &numero);
		
		//se il numero è <0
		if(numero<0){
		//output
	    printf("Non è possibile calcolare la radice di un numero negativo!");
	    //uscita dal ciclo
	    break;
	    } else{
	    	//calcolo radice 
	        radice=sqrt(numero);
	        //calcolo somma
	        somma=somma+radice;
	       
	    }
    }
    
    //output
    printf("\nLa somma delle radici dei numeri inseriti è: %lf", somma);
	
	return 0;
}


