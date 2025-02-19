/*Progettare un algoritmo che risolva il seguente problema. Si richieda 
all’utente di inserire una serie di terne di dati numerici (A, B, C). 
Il programma deve terminare quando uno dei valori inseriti è minore di
zero. Si scartino le terne nelle quali i valori non sono in ordine
strettamente crescente, ovvero quelle terne per cui non valga A < B < C.
Su tutte le terne non scartate si calcoli il massimo e il minimo dei
valori inseriti. Si stampino a video tali valori massimi e minimi prima
di terminare il programma.*/

#include <stdio.h>
int main(int argc, char *argv[]){
	//dichiarazione e inizializzazione delle variabili
    int numero1=0, numero2=0, numero3=0, min=0, max=0;
    
    //ciclo do-while
    do{
    	//inserimento numeri
    printf("\nInserisci il primo numero: ");
    scanf("%d", &numero1);
    printf("Inserisci il secondo numero: ");
    scanf("%d", &numero2);
    printf("Inserisci il terzo numero: ");
    scanf("%d", &numero3);
    
    //controllo se i numeri sono in ordine crescente
    if(numero1<numero2&&numero2<numero3){
        	//assegno ai numeri chi è il massimo e chi è il minimo							 							   
			if (numero1 < min)
				min = numero1;
			if (numero3 > max)
				max = numero3;
    } else{
    	//output
        printf("Terna non valida!");
    }
    } while(numero1 >= 0 && numero2 >= 0 && numero3 >= 0);
    
    //output
    printf("\nNumero minimo: %d", min);
    printf("\nNumero massimo: %d", max);
    
    return 0;
    
}
