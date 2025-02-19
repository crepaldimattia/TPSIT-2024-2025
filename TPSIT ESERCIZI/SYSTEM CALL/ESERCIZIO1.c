/*
Utilizzando le system call open, read, write, close leggere il file rfc1918.txt e stamparlo a video.
Il programa deve essere cosi invocato:
$./a.out rfc1918.txt

Consiglio: leggere un carratere per volta 
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

int main(int argc, char *argv[]){
    if(argc!=2){
        printf("Numero di argomenti sbagliato"), 
        exit(1);
    }

    int fd=open(argv[1], -O_RDONLY);

    int nread;
    char buff;

    while (nread=read(fd, &buff, sizeof(buff))>0){
        write(1, &buff, nread);
    }

    close(fd);

    return 0;
}