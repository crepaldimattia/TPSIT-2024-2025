/*Dati due numeri interi positivi N1 e N2, verificare se N1 è il quadrato 
di N2. */
#include <stdio.h>
int main(int argc, char *argv[]){
	//dichiarazione e inizializzazione delle variabili
    int n1=0, n2=0, quadrato=0;
    
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

        //calcolo del quadrato del secondo numero    
        quadrato=n2*n2;
        
        //se il primo numero è il quadrato del secondo
        if(n1==quadrato)
        //output
        printf("Il primo numero è il quadrato del secondo!");
        //altrimenti
        else
        //output
        printf("Il primo numero non è il quadrato del secondo!");
    
    return 0;
}
