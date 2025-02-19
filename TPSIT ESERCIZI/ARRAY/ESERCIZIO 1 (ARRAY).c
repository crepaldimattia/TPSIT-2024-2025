/*Popolare un array di interi di dimensione 4, stamparne a video il
contenuto.*/
#include <stdio.h>
int main(int argc, char *argv[])
{
    int array[4];
    int contatore1 = 0, contatore2 = 0;
    int dimensione = sizeof(array);

    for (int i = 0; i < 4; i++)
    {
        contatore1++;
        printf("Inserisci il %d° valore: ", contatore1);
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        printf("Il numero in posizione %d è: %d\n", contatore2, array[i]);
        contatore2++;
    }

    return 0;
    
}