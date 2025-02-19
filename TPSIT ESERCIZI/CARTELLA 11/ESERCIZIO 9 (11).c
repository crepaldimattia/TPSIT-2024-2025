/*Dati due numeri interi e positivi N1 e N2 con N2>N1, generare e
visualizzare in ordine decrescente i numeri compresi tra N1 e N2. */
#include <stdio.h>
int main(int argc, char *argv[]){
	//dichiarazione e inizializzazione delle variabili
    int n1=0, n2=0;
    
    //ciclo do-while per verificare che il secondo numero inserito sia magiore del primo
    do {
    	//ciclo do-while per verificare che il primo numero sia maggiore di 0
        do {
        	//inserimento primo numero
            printf("Inserisci il primo numero intero positivo: ");
            scanf("%d", &n1);
			//se il numero è minore o uguale a 0
            if (n1 <= 0)
                //output
                printf("Il numero deve essere intero e positivo!\n");
        } while (n1 <= 0);
		//ciclo do-while per verificare che il secondo numero sia maggiore di 0
        do {
        	//inserimento secondo numero
            printf("Inserisci il secondo numero intero positivo: ");
            scanf("%d", &n2);
			//se il numero è minore o uguale a 0
            if (n2 <= 0)
                //output
                printf("Il numero deve essere intero e positivo!\n");
        } while (n2 <= 0);
		//se il primo numero è maggiore del secondo
        if (n1 > n2)
            //output
            printf("Il secondo numero deve essere maggiore del primo!\n");
    } while (n1 > n2);
    
    //output
    printf("Numeri in ordine decrescente compresi nell'intervallo [%d; %d]: \n", n1, n2);
    
    //ciclo for per visualizzare i numeri compresi tra i due numeri inseriti
    for(int i=n2; i>0; i--){
    	//se il numero è compreso nell'intervallo dei due numeri inseriti
        if(i>=n1&&i<=n2)
        //output
        printf(" %d\n", i);
    }
    
return 0;
}

