/*Chiedere in input 5 interi e inserirli in un array.
Stampare a video l'array al contrario.
Esempio:
input 5 6 9 11 12
output 12 11 9 6 5*/
#include <stdio.h>
int main(int argc, char *argv[])
{
    int array[5];
    int contatore1 = 0, contatore2 = 0;
    int dimensione = 5;

    for (int i = 0; i < dimensione; i++)
    {
        contatore1++;
        printf("Inserisci il %d° numero: ", contatore1);
        scanf("%d", &array[i]);
    }

    for (int i = dimensione - 1; i >= 0; i--)
    {
        printf("Il numero in posizione %d è: %d\n", contatore2, array[i]);
        contatore2++;
    }
}