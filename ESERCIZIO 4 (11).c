/*Dato N un numero intero positivo, generare e visualizzare in ordine
crescente i numeri pari minori o uguali a N.*/
#include <stdio.h>
int main(int argc, char *argv[]){
	//dichiarazione e inizializzazione delle variabili
    int numero=0;
    
    //ciclo do-while per verificare che il numero è positivo
    do{
    	//inserimento del numero
        printf("Inserisci un numero intero e positivo: ");
        scanf("%d", &numero);
        
        //se il numero è negativo o uguale a 0
        if(numero<=0)
            //output
            printf("Inserisci un numero intero e positivo!\n");
    }while(numero<=0);
    
    //output
    printf("Numeri pari minori o uguali a %d:\n", numero);
    //ciclo for per i numeri pari e minori o uguali al numero inserito
    for(int i=0; i<=numero; i++){
    	//se il numero è pari
        if(i%2==0){
        	//output
            printf("%d\n", i);
        }
    }
    
    return 0;
}
