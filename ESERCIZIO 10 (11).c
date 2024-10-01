/*Dato N un numero intero positivo, calcolare e visualizzare la somma dei
primi N numeri interi. */
#include <stdio.h>
int main(int argc, char *argv[]){
	//dichiarazione e inizializzazione delle variabili
    int numero=0, somma=0;
    
    //ciclo do-while per verificare che il numero inserito sia maggiore di 0
    do{
   	//inserimento del numero
    printf("Inserisci un numero intero e positivo: ");
    scanf("%d", &numero);
    
    //se il numero inserito è minore o uguale a 0
    if(numero<=0)
    //output
    printf("Il numero deve essere intero e positivo!\n");
    }while(numero<=0);
    
    //ciclo for per calcolare la somma dei numeri interi
    for(int i=0; i<numero; i++){
    	//calcolo somma
        somma+=i;     //somma = somma + i;
    }
    
    //output
    printf("La somma dei numeri interi e minori del numero inserito e': %d", somma);
    
    return 0;
}    


