#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "naloga.h"

int steviloZnakov(char* niz, char znak) {
    int numOfchar = 0;

    while(*niz != '\0'){
        if(*niz == znak){
            numOfchar++;
        }
        niz++;
    }
    return numOfchar;
}

char* kopirajDoZnaka(char* niz, char znak) {
    int l = 0;

    while((*niz != znak) && (*niz != '\0')){
        l++;
        niz++;
    }
    //ponastavi niz
    niz = niz - l;

    char* newString = calloc(l,sizeof(char));
    newString[l] = '\0';
    //skopiraj string
    for(int i = 0; i < l; i++){
        newString[i] = niz[i];
    }
    return newString;
}

char** razcleni(char* niz, char locilo, int* stOdsekov) {
    // *stOdsekov = steviloZnakov(niz, locilo) + 1;
    // char** besedilo = calloc(*stOdsekov, sizeof(char));

    // while(*niz != '\0'){
    //     char* odsek = kopirajDoZnaka(niz, locilo);
    //     int znaki = steviloZnakov(odsek, '\0');
    //     *besedilo = odsek;
    //     besedilo++;
    //     niz += znaki;
    // }

    *stOdsekov = steviloZnakov(niz, locilo) + 1;
    char** t = calloc(*stOdsekov, sizeof(char));

    while(*niz != '\0'){
        char* odsek = kopirajDoZnaka(niz, locilo);

    }

    return besedilo;
}

#ifndef test

int main() {
    char greet[] = "Hello World lil bro!";
    char * niz = &greet[0];
    char znak = 'W';
    int stZnakov = steviloZnakov(niz,znak );

    char* znaki = kopirajDoZnaka(niz, znak);


    printf("%d\n", stZnakov);
    printf("%s\n", znaki);
    return 0;
}

#endif



