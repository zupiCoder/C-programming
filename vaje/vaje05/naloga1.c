
//vrednost pointer int vrednost = *pointer
//naslov v pomnilniku int naslov = &pointer
//tip pointerja doloca kaj je shranjeno v pointerju
#include <stdio.h>
#include <stdlib.h>

#include "naloga.h"

int t[10];

int vsota(int* zac, int* kon) {
    int vsota = 0;

    for(int* i = zac; i <= kon; i++) {
        vsota += *i;
    }
    return vsota;
}

void indeksInKazalec(int* t, int* indeks, int** kazalec) {
    //spremenljivka pointerja indeks ima vrednost - 1
    if(*indeks == -1) { 
        *indeks = *kazalec - t; //nastavi pointer na indeks el
    } else {
        int* el = &t[*indeks]; //pointer na element na indeksu
        *kazalec = el; //pointer na pointer na element na indeksu
    }
}

void frekvenceCrk(char* niz, int** frekvence) {
    int* crke = calloc(26, sizeof(int));
    char* p = niz;

    while(*p != '\0'){ //nakljucni znak
        if((*p >= 'A' && *p <= 'Z') || (*p >= 'a' && *p <= 'z')){
            int indeks = (*p >= 'a') ? (*p - 'a') : (*p - 'A');
            crke[indeks]++;
        }
        p++;
    }
    *frekvence = crke;

}

#ifndef test

int main() {

    int* zac = &t[0];
    int* kon = &t[10];

    t[0] = 2;
    t[6] = -2;
    t[9] = -2;
    t[10] = 2;

    int sum = vsota(zac, kon);
    
    printf("%d\n", sum);
    return 0;
}

#endif
