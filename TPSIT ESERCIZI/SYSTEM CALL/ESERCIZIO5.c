/*
i=5              stampa   i

i++ --> write(i++)  5   i=6
++i -->       ++i   6   i=6
i+1 -->       i+1   6   i=5
*/

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>

int calcola_lunghezza_stringa_files(int argc, char *argv[]){
    int dim=0;
    for(int i=1; i<argc-2; i++){
        dim=dim+strlen(argv[1]+1);
    }

    return dim;
}

void componi_stringa_files(int argc, char *argv[], char str[]){
    str[0]='\0';    //resetto l'array cancellando tutto il contenuto
    for(int i=1; i<argc-2; i++){
        strcat(str, argv[1]);
        strcat(str, " ");
    }

    strcat(str, "\n");
}

int main(int argc, char *argv[]){
    if(argc<4){
        printf("Numero di argomenti sbagliato");
        exit(0);
    }

    int dim=calcola_lunghezza_stringa_files(argc, argv);
    int fd, ct=0;
    char carattere, output[dim+50], stringa_files[dim];

    componi_stringa_files(argc, argv, stringa_files);    

    for(int i=1; i<argc-2; i++){
        fd=open(argv[1], O_RDONLY);  
        
        while(read(fd, &carattere, sizeof(carattere))>0){
            if(carattere==argv[argc-2][0]){
                ct++;
            }
        }

        close(fd);
    }

    printf(output, "Il carattere %s compare %d volte nei files: %s\n", argv[argc-2], ct, stringa_files);
    
    fd=open(argv[argc-1], O_WRONLY|O_CREAT|O_TRUNC, 0644);
    write(fd, output, strlen(output));
    close(fd);

    write(1, output, strlen(output));
    
    return 0;
}