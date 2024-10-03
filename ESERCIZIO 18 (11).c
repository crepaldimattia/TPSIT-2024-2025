/*Data una misura di tempo espressa in secondi S1, convertirla in ore H,
minuti M e secondi S.

Esempio: se il numero dei secondi è 1630, si dovrà ottenere, in uscita
dal programma, 0h 27m 10s. */
#include <stdio.h>
int main(int argc, char *argv[]) {
  //dichiarazione e inizializzazione delle variabili
  int secondi1=0, ore=0, minuti=0, secondi=0;
  
  //ciclo do-while per verificare che i secondi inseriti siano maggiori o uguali a 1
  do{
  	//inserimento dei secondi
      printf("Inserisci il numero dei secondi: ");
      scanf("%d", &secondi1);
      
      //se i secondi inseriti sono minori di 1
      if(secondi<1)
      //output
      printf("I secondi inseriti devono essere maggiori o uguali a 1!\n");
  }while(secondi1<1);
  
  //calcolo ore, minuti e secondi
  minuti=secondi1/60;
  secondi=secondi1%60;
  ore=minuti/60;
  minuti=minuti%60;
  
  //output
  printf("Secondi convertiti in ore, mkinuti e secondi: ");
  printf("%dore, %dminuti, %dsecondi", ore, minuti, secondi);
  
  return 0;
}
