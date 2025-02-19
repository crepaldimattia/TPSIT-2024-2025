#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int main(int argc, char *argv[]){
    if(argc<4){
        printf("Numero di argomenti errato!\n");
        exit(0);
    }

    int fd, ct;
    char buff, output[80];

    for(int i=2; i<argc-2; i++){
        fd=open(argv[1], O_RDONLY);

            while(read(fd, &buff, sizeof(buff)>0)){
                if(buff==argv[argc-2][0]){
                    ct++;
                }
            }
            close(fd);
        }

        printf(output, "Il carattere %s compare %d volte nei files %s %s %s\n", argv[argc-2], ct, argv[1], argv[2], argv[3]);
        write(1, &output, strlen(output));
        fd=open(argv[argc-1], O_RDONLY|O_TRUNC|O_CREAT, 0644);
        write(1, &buff, sizeof(buff));
        close(fd);

        return 0;
}