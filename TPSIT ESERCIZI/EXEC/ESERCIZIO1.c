#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    if(argc<2){
        printf("Numero di argomenti errato!");
        exit(0);
    }

    execl("/usr/bin/cat", "cat", argv[1], NULL);

    printf("Exce ha terminato con errori");
    return -1;
}