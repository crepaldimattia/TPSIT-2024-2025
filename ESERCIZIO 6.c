/*Progettare un algoritmo che effettui le seguenti operazioni:
• legga da tastiera una coppia di valori interi A e B con A<B;
• continui a leggere da tastiera una serie di valori interi, terminando 
quando il valore letto è al di fuori dell’intervallo [A, B];
• conteggi la media dei valori letti;
• prima di terminare, stampi il valore calcolato.*/
#include <stdio.h>
int main(){
	//dichiarazione e inizializzazione delle variabili
    int a=0, b=0, numero=0, volte=0, somma=0;
    double media=0;
    
    //ciclo do-while
    do{
    	//output e input per l'inserimento dei numeri
        printf("\nInserisci il primo numero: ");
        scanf("%d", &a);
        printf("Inserisci il secondo numero: ");
        scanf("%d", &b);
        
    }while(a>b);
    
    //ciclo do-while
    do{
    	//inserimento numero
        printf("Inserisci un numero: ");
        scanf("%d", &numero);
        
        //se il numero è >=del primo numero inserito precedentemente e <= del secondo numero
        if(numero>=a&&numero<=b){
        	//calcolo della somma
            somma=somma+numero;
            //contatore
            volte++;
        }
    }while (numero >= a && numero <= b);
    
    //calcolo della media
    media=somma/volte;
    
    //output
    printf("La media è: %f", media);
    
    return 0;
}
