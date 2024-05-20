
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "naloga.h"

int steviloZnakov(char* niz, char znak) {
    int numOf = 0;
    
    while(*niz != '\0'){
        if(*niz == znak){
            numOf++;
        }
        niz++;
    }
    return numOf;
}

char* kopirajDoZnaka(char* niz, char znak) {
    int dolzina = 0;

    while((*niz != znak) && (*niz != '\0')){
        dolzina++;
        niz++;
    }

    niz -= dolzina;

    char* novNiz = (char*) calloc(dolzina + 1, sizeof(char));

    for(int i = 0; i < dolzina; i++){
        novNiz[i] = niz[i];
    }
    novNiz[dolzina] = '\0';

    return novNiz;
}

char** razcleni(char* niz, char locilo, int* stOdsekov) {
    int odseki = 0;
    
    odseki = steviloZnakov(niz, locilo) + 1;
    *stOdsekov = odseki;
    char** t = (char**) calloc(odseki, sizeof(char*));

    for(int i = 0; i < odseki; i++){
        t[i] = kopirajDoZnaka(niz,locilo);

        while(*niz != locilo){
            niz++;
        }
        niz++;
    }
    return t;
}

#ifndef test

int main() {
    // koda za ro"cno testiranje (po "zelji)

    return 0;
}

#endif
