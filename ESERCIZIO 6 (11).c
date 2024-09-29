/*Dato N un numero intero positivo, generare e visualizzare in ordine
crescente i numeri compresi maggiori uguali di -N e minori uguali di N.*/
#include <stdio.h>
int main(int argc, char *argv[]){
	//dichiarazione e inizializzazione delle variabili
    int numero=0;
    
    //ciclo do-while per verificare che il numero sia maggiore di 0 
    do{
    	//inserimento numero
        printf("Inserisci un numero intero e positivo: ");
        scanf("%d", &numero);
        
        //se il numero è minore o uguale a 0
        if(numero<=0)
            printf("Il numero deve essere intero e positivo!\n");
    }while(numero<=0);
    
    //output
    printf("Numeri compresi maggiori e uguali del negativo del numero e minori e uguali del numero: ");
    
    //ciclo for per i numeri compresi maggiori e uguali del negativo del numero e minori e uguali del numero
    for(int i=-numero; i<=numero; i++){
    	//se il numero è compreso tra -numero e numero
        if(i>-numero&&i<=numero){
        	//output
            printf("%d  ", i);
        }
    }
    
    return 0;
}
