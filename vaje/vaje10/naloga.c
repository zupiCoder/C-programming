
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "naloga.h"

int poisciStudenta(Student** studentje, int stStudentov, int vpisna) {
    
    for(int i = 0; i < stStudentov; i++){
        if(studentje[i]->vpisna == vpisna){
            return i;
        } 
    }

    return -1;
}

int poisciPO(Student* student, char* predmet) {

    for(int i = 0; i < student->stPO; i++){
        
    }

    return -1;
}

int dodaj(Student** studentje, int stStudentov, int vpisna, char* predmet, int ocena) {
    // popravite / dopolnite ...
    return 42;
}

#ifndef test

int main() {
    // koda za ro"cno testiranje (po "zelji)

    return 0;
}

#endif
