/*Dato N un numero intero positivo, calcolare e visualizzare la
somma dei primi N numeri pari.
*/
#include <stdio.h>
int main(int argc, char *argv[]){
	//dichiarazione e inizializzazione delle variabili
    int numero=0, somma=0;
    
    //ciclo do-while per verificare se il numero inserito è maggiore di 0
    do{
    	//inserimento del numero
        printf("Inserisci un numero intero e positivo: ");
        scanf("%d", &numero);
        
        //se il numero è minore o uguale a 0
        if(numero<=0)
        //output
        printf("Il numero deve essere intero e positivo!\n");
    }while(numero<=0);
    
	//ciclo for per calcolare la somma dei numeri pari
    for(int i=0; i<=numero; i++){
    	//se il numero è pari
        if(i%2==0){
        	//calcolo della somma
            somma+=i;
        }
    }
    
	 //output
     printf("La somma dei numeri pari è: %d", somma);
    
    return 0;
}
