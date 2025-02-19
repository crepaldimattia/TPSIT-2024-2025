/*Dato N un numero intero positivo, calcolare e visualizzare la somma dei
primi N numeri dispari.*/
#include <stdio.h>
int main(int argc, char *argv[]){
	//dichiarazione e inizalizzazione delle variabili
    int numero=0, somma=0;
    
    //ciclo do-while per verificare che il numero inserito sia maggiore di 0
    do{
       //inserimento numero
       printf("Inserisci un numero intero e positivo: ");
       scanf("%d", &numero);
       
       //se il numero inserito è minore o uguale a 0
       if(numero<=0)
       printf("Il numero deve essere intero e positivo!\n");
    }while(numero<=0);
    
    //ciclo for per calcolare la somma dei numeri dispari
    for(int i=0; i<numero; i++){
    	//se il numero è dispari
        if(i%2!=0){
        	//calcolo della somma
            somma+=i;
        }
    }
    
    //output
    printf("La somma dei numeri dispari è: %d", somma);
    
    return 0;
}
