#include <stdio.h>

#include "naloga2.h"

void zamenjaj(int** a, int** b) {
    int* c  = *a;
    *a = *b;
    *b = c;
}

void uredi(int** a, int** b, int** c) {
    // b > a
    if(**a < **b){
        // b > c 
        if(**b > **c){
            zamenjaj(b,c);
        }
        // b > a > c
        if(**a > **c){
            zamenjaj(a,c);
            zamenjaj(b,c);
        }
    }
    // a > b
    if(**a > **b){
        zamenjaj(a,b);
        // a > c
        if(**a > **c) zamenjaj(a,c);
        // a > b > c
        if(**b > **c) zamenjaj(b,c);
    }
}

#ifndef test

int main() {
    // koda za ro"cno testiranje (po "zelji)
    return 0;
}

#endif
