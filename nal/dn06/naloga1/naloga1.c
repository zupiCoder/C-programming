
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga1.h"

int dolzina(char* niz) {
    int dolzina = 0;
    while(*niz != '\0'){
        dolzina++;
    }
    return dolzina;
}

char* zdruzi(char** nizi, char* locilo) {
    //dolzina tabele nizov + 1 za \0
    //v tabeli imamo neznano stevilo nizov
    int dolzinaNovi = 0;
    char** niz = nizi;
    int d = 0;

    while(*niz != NULL){
        d++;
        dolzinaNovi += dolzina(*niz);
        niz++;
    }
    dolzinaNovi += (d - 1) * dolzina(locilo);
    
    char* novNiz = calloc(dolzinaNovi, sizeof(char));

    //sestavi novi niz
    for(int i = 0; i < d; i++){
        for(int j = 0; nizi[i][j] != '\0'; j++){
            *novNiz = nizi[i][j];
            novNiz++;
        }
        if(i < (d - 1)){
            *novNiz = *locilo;
        }
    }
    return novNiz;
}

#ifndef test

int main() {
    // koda za ro"cno testiranje
    return 0;
}

#endif
