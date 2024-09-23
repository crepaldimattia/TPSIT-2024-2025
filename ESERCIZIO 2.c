/*Progettare un algoritmo che effettui le seguenti operazioni:
• continui a leggere da tastiera due valori numerici, fermandosi quando uno dei due numeri è
0 (zero)
• per ogni coppia di numeri letti:
? calcoli il prodotto dei due numeri e ne stampi il valore
? sommi il prodotto calcolato ad una variabile che memorizzi la somma di tutti i prodotti
• all’uscita del ciclo, stampi il valore della somma*/
#include <stdio.h>
int main(){
	//dichiarazione e inizializzazione delle variabili
    double n1=0, n2=0, prodotto=0, prodottoTotale=0;
    
    //ciclo do-while
    do{
    	//output e input per l'inserimento dei numeri
        printf("Inserisci il primo numero: ");
        scanf("%lf", &n1);
        printf("Inserisci il secondo numero: ");
        scanf("%lf", &n2);
        
        //calcolo del prodotto
        prodotto=n1*n2;
        //output
        printf("Prodotto numeri: %lf\n", prodotto);
        
        //calcolo della somma dei prodotti
        prodottoTotale=prodottoTotale+prodotto;
    }while(n1!=0&&n2!=0);
    
    //output
    printf("La somma di tutti i prodotti è: %lf", prodottoTotale);
    
    return 0;
}
