/*Dato N un numero intero positivo, generare e visualizzare in ordine crescente i numeri dispari
minori o uguali a N.*/
#include <stdio.h>
int main(int argc, char *argv[]){
	//dichiarazione e inizializzazione delle variabili
    int numero=0;
    
    //ciclo do-while per verificare che il numero sia positivo
    do{
    	//inserimento del numero
        printf("Inserisci un numero intero e positivo: ");
        scanf("%d", &numero);
        
        //se il numero è negativo
        if(numero<=0)
            //output
            printf("Il numero deve essere intero e positivo!\n");
    }while(numero<=0);
    
    //output
    printf("Numeri dispari minori o uguali a %d:\n", numero);
    
    //ciclo for per i numeri
    for(int i=0; i<=numero; i++){
    	//se il numero è dispari
        if(i%2!=0){
        	//output
            printf("%d\n", i);
        }
    }
    
    return 0;
}
