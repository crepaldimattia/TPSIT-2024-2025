/*Dato N un numero intero positivo maggiore di 1, generare e visualizzare
il numero precedente. */
#include <stdio.h>
int main(int argc, char *argv[]){
	//dichiarazione e inizializzazione delle variabili
    int numero=0, numeroFinale=0;
    
    //ciclo do-while per verificare che il numero sia maggiore di 1
    do{
   	//inserimento numero
    printf("Inserisci un numero maggiore di 1: ");
    scanf("%d", &numero);
    
    //se il numero è minore o uguale a 0
    if(numero<=1)
      //output
      printf("Il numero deve essere  maggiore di 1!\n");
    }while(numero<=1);
    
    //calcolo del numero precedente
    numeroFinale=numero-1;
    //output
    printf("Il numero precedente al numero %d e': %d", numero, numeroFinale);
    
    return 0;
}

