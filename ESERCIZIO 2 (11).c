/*Dato N un numero intero positivo, generare e visualizzare in ordine crescente i primi N numeri
interi positivi.*/
#include <stdio.h>
int main(int argc, char *argv[]){
	//dichiarazione e inizializzazione delle variabili
    int numero=0;
    
    //ciclo do-while per verificare che il numero sia positivo
    do{
    	//inserimento nuemro
        printf("Inserisci un numero intero positivo: ");
        scanf("%d", &numero);
        
        //se il numero inserito è negativo
        if(numero<=0)
  			//output
            printf("Inserisci un numero intero e positivo!\n");
    }while(numero<0);
    
    //output
    printf("Numeri interi positivi minori e uguali di %d:\n", numero);
    
    //ciclo for per i numeri
    for(int i=1; i<=numero; i++){
    	//output
        printf("%d\n", i);
    }
    
    return 0;
}
