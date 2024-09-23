/*Progettare un algoritmo che effettui le seguenti operazioni:

• continui a leggere da tastiera una serie di terne di valori interi A ,
B e C finchè non vengono inseriti dei valori tali per cui A + B < C
• conteggi il numero di volte in cui la differenza tra A e B è pari, dispari, e quando è nulla
• prima di terminare, visualizzi il valore dei valori conteggiati*/
#include <stdio.h>
int main(){
    int a=0, b=0, c=0, differenza=0, dp=0, dd=0, dn=0;
    
    do{
        printf("\nInserisci il primo numero: ");
        scanf("%d", &a);
        printf("Inserisci il secondo numero: ");
        scanf("%d", &b);
        printf("Inserisci il terzo numero: ");
        scanf("%d", &c);
        
        differenza=a-b;
        
         if (differenza == 0) {
            dn++; 
        } 
        if (differenza % 2 == 0) {
            dp++;  
        } else {
            dd++;  
        }
        
    }while(a+b>=c);
    
    printf("Numero di volte in cui la differenza tra il primo numero e il secondo è pari: %d\n", dp);
    printf("Numero di volte in cui la differenza tra il primo numero e il secondo è dispari: %d\n", dd);
    printf("Numero di volte in cui la differenza tra il primo numero e il secondo è nulla: %d", dn);
    
    return 0;
}
