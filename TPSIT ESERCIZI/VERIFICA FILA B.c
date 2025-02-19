#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char *argv[])
{
    int numero;
    do
    {
        printf("Inserisci un numero compreso tra 0 e 10 (estremi compresi): ");
        scanf("%d", &numero);

        if (numero < 0 || numero > 10)
        {
            printf("Numero sbagliato\n");
        }

    } while (numero < 0 || numero > 10);

    int p2=fork();

    if(p2==0){

        int p4=fork();

        if(p4==0){

            int valoreDecrescente=numero;
            for(int i=0; i<numero; i++){
                valoreDecrescente=valoreDecrescente-1;
                printf("\n%d", valoreDecrescente);
            }

            exit(0);
        }

        int p5=fork();
        
        if(p5==0){
        printf("\n\n");
            int valoreCrescente=0;
            for(int i=0; i<numero; i++){
                
                printf("\n%d", valoreCrescente);
                valoreCrescente=valoreCrescente+1;
            }
        }


        exit(0);
    } else if(p2>0){
        int p3=fork();
        
        printf("\n\n");
        if(p3==0){
            printf("%d", numero);
        }

        int p6=fork();
        printf("\n\n");
        if(p6==0){
            int numeroQuadrato;
            numeroQuadrato=numero*numero;

            printf("%d", numeroQuadrato);
        }
    }
}