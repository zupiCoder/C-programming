#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "naloga1.h"

int* poisci(int* t, int* dolzina, int** konec) {
    int d = 0;

    while(*(t- 1) != 0){
        t--;
    }
    int* zac = t;

    while(*t != 0){
        d++;
        t++;
    }

    //**konec kaze na kazalec, ki kaze na zadnji element v arrayu
    *konec = (t - 1);
    *dolzina = d; 
    return zac;
}

#ifndef test

int main() {
    // koda za ro"cno testiranje (po "zelji)
    return 0;
}

#endif
