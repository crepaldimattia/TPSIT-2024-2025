/*Dato N un numero intero positivo, generare e visualizzare in ordine
decrescente i primi N numeri interi positivi.*/
#include <stdio.h>
int main(int argc, char *argv[]){
	//dichiarazione e inizializzazione delle variabili
    int numero=0;
    
    //ciclo do-while per verificare che il numero è maggiore di 0
    do{
   	//inserimento del numero
    printf("Inserisci un numero intero e positivo: ");
    scanf("%d", &numero);
    
    //se il numero è minore o uguale a 0
    if(numero<=0)
    printf("Il numero deve essere intero e positivo!");
    }while(numero<=0);
    
    //output
    printf("Numeri minori in ordine decrescente interi e positivi del numero %d: \n", numero);
    
    //ciclo for per visualizzare i numeri 
    for(int i=numero; i>0; i--){
    	//output
        printf("%d\n", i);
    }
    
    return 0;
    }

