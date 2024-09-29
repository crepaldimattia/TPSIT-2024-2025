/*Una birreria a fine serata deve conteggiare l’incasso. La cassiera accende il software gestionale il quale le chiede di inserire una alla volta le consumazioni servite.
Le consumazioni si dividono in bevande e ristorazione. La cassiera per ogni consumazione deve inserire la tipologia di consumazione e il suo importo.

Quando la cassiera inserisce la stringa “esci” il software deve mostrare a video le seguenti informazioni:
1.	La media dell’incasso delle bevande 
2.	La media dell’incasso della ristorazione
3.	Deve indicare se sono state vendute più bevande o più ristorazioni*/
#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[]){
    double bevande=0, ristorazione=0, sommab=0, sommar=0, mediab=0, mediar=0, countb=0, countr=0;
    char scelta[10];
    
    do{
    printf("Bevanda (0), ristorazione (1) o uscita (esci)?");
    scanf("%s", &scelta);
    
    //==0 perchè viene restituito 0 se le stringhe sono uguali
    if(strcmp(scelta, "0")==0){
        countb++;
        printf("BEVANDA");
        printf("Inserisci l'importo di una consumazione: ");
        scanf("%lf", &bevande);
        sommab=sommab+bevande;
        mediab=sommab/countb;
    }
    
    if(strcmp(scelta, "1")==0){
        countr++;
        printf("RISTORAZIONE");
        printf("Inserisci l'importo di una consumazione: ");
        scanf("%lf", &ristorazione);
        sommar=sommar+ristorazione;
        mediar=sommar/countr;
    }
    
    if(strcmp(scelta, "esci")==0){
        break;
    }
    
    else{
        printf("Scelta non valida");
    }
     
    }while (scelta=="esci");
    
    printf("Media incasso delle bevande: %lf", mediab);
    printf("Media inasso della ristorazione: %lf", mediar);

    if(countr>countb){
        printf("Sono state vendute più ristorazioni");
    } 
    else if(countb>countr){
        printf("Sono state vendute più bevande");
    } else{
        printf("Sono state vendute uguali ristorazioni e bevande");
    }
    
    return 0;
}
