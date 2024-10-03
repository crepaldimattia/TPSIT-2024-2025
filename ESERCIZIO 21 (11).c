//Dato un numero intero positivo N verificare se N � un numero primo.
#include <stdio.h>
int main(int argc, char *argv[]){
	//dichiarazione e inizializzazione delle variabili
    int numero=0, i=0, resto=0;
    
    //ciclo do-while per verificare che il numero sia maggiore o uguale a 2 
    do{
    	//inserimento del numero
        printf("Inserisci un numero maggiore di 1: ");
        scanf("%d", &numero);
        
        //se il numero � minore di 2
        if(numero<2)
        //output
        printf("Il numero deve essere maggiore di 1!\n")
    }while(numero<2);
    
    //calcolo di i per individuare i possibili divisori
    i=numero-1;
    
    //ciclo do-while per verificare che il numero ha divisori compresi tra 2 e i
    do{
    	//calcolo del resto
        resto=numero%i;
        //se il resto � uguale a 0
        if(resto==0){
        	//output
            printf("Il numero non � primo!\n");
            //termina l'esecuzione del programma
            return 0;
        }
        //decrementazione di i per trovare il prossimo possibile divisore
        i=i-1;
    }while(i>1);
    
    //output
    printf("Numero primo!\n");
    
    return 0;
}
    
