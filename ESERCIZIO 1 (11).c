/*Dato N un numero intero positivo, generare e visualizzare il numero 
successivo.*/
#include <stdio.h>
int main(int argc, char *argv[]){
	//dichiarazione e inizializzazione delle variabili
    int n=0, nFinale=0;
    
    //ciclo do-while per verificare che il numero sia positivo
    do{
   	//inserimento del numero
    printf("Inserisci un numero intero positivo: ");
    scanf("%d", &n);
	    //se il numero è negativo
        if(n<=0){
        	//output
            printf("Il numero deve essere intero e positivo!\n");
        }
    }while(n<=0);
    
    //calcolo numero successivo al numero inserito
    nFinale=n+1;
    
    //output finale
    printf("Il numero successivo al numero %d è: %d", n, nFinale);
    
    return 0;
}
