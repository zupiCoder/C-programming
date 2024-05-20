
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga1.h"

int dolzina(char* niz){
    int dolzina = 0;

    while(*niz != '\0'){
        dolzina++;
        niz++;
    }

    return dolzina;
}

char* zdruzi(char** nizi, char* locilo) {
    int d = 0;
    int l = 0;
        
    //dolzina tabele
    char ** nizD = nizi;

    while(*nizD != NULL){
        d += dolzina(*nizD);
        printf("%d", d);
        l++;
    }  
    //dodaj locila v tabelo
    d += (l - 1) * dolzina(locilo);
    

    char* novNiz = (char*) calloc(d + 1, sizeof(char));

    int el = 0;
    int j = 0;

    for(int i = 0; i < l; i++){

        while(nizi[i][j] != '\0'){
            novNiz[el] = nizi[i][j];
            printf("%d", novNiz[el]);
            j++;
            el++;
        }
        //locilo
        if( i != (l - 1)){
            novNiz[el] = *locilo;
            el++;
        }
        j = 0;
    }


    return novNiz;
}

#ifndef test

char* NIZI[] = {"a", "b", "c", "d", NULL};


int main() {
    
    char* niz = zdruzi(NIZI, " ");
    printf("<%s>\n", niz);

    return 0;
}

#endif
