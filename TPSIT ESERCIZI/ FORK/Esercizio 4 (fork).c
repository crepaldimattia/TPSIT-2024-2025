/*Scriva un programma in linguaggio C che dato un array prestabilito, prenda in input da
riga di comando un numero e lo ricerchi all'interno dell'array.
La ricerca deve essere demandata ad un processo figlio e deve essere
implementata attraverso un'apposita funzione di nome "ricerca".*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int ricerca(int numeri[], int n, int numero){	//n è la dimensione dell'array
	for(int i=0; i<n; i++){
		if(numeri[i]==numero){ //confronta se i numeri sono uguali
			return i;
		}
	}
	
	return -1;
}

int main(int argc, char *argv[]){
	
	//creazione dell'array con gli elementi già stabiliti
	int numeri[]={10, 20, 30};
	
	//creazione del processo figlio
	int pid=fork();
	
	//se il valore restituito dalla fork è =0, viene eseguito il processo figlio
	if(pid==0){
		//atoi() converte l'argomento passato dalla riga di comando (ovvero argv[1]) in un intero
		int numero=atoi(argv[1]);
		
		int posizione=ricerca (numeri, 3, numero);       //3 è la dimesnione dell'array
		
		if (posizione > -1)
			printf("\n\nil numero %d si trova in posizione %d nell'array \n\n", numero, posizione);
		else
			printf("\n\nIl numero %d non è presente nell'array\n\n", numero);

		exit(1);
	}

	wait(&pid);

	return 0;
}
