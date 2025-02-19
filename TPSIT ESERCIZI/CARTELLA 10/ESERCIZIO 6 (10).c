/*Progettare un algoritmo che effettui le seguenti operazioni:
• legga da tastiera una coppia di valori interi A e B con A<B;
• continui a leggere da tastiera una serie di valori interi, terminando 
quando il valore letto è al di fuori dell’intervallo [A, B];
• conteggi la media dei valori letti;
• prima di terminare, stampi il valore calcolato.*/
#include <stdio.h>
int main(){
    int a=0, b=0, numero=0, volte=0, somma=0;
    double media=0;
    
    do{
        printf("\nInserisci il primo numero: ");
        scanf("%d", &a);
        printf("Inserisci il secondo numero: ");
        scanf("%d", &b);
        
    }while(a>b);
    
    do{
        printf("Inserisci un numero: ");
        scanf("%d", &numero);
        
        if(numero>=a&&numero<=b){
            somma=somma+numero;
            volte++;
        }
    }while (numero >= a && numero <= b);
    
    media=somma/volte;
    
    printf("La media è: %f", media);
    
    return 0;
}
