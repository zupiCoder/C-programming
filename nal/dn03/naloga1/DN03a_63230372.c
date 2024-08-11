
/*

Prevajanje in poganjanje:

gcc -o test01 test01.c inverz.c -lm
./test01

*/

#include <stdio.h>
#include <stdbool.h>

#include "inverz.h"

long inverz(long x, long a, long b) {
    //bisekcija 
    while(a <= b) {
        long avg = (a + b) / 2;
        if(f(avg) == x) {
            return avg;
        } else {
            if(f(avg) > x) {
                b = avg - 1;
            }
            if(f(avg) < x) {
                a = avg + 1;
            }
        }
    }
    return -1;
}

// Ta datoteka NE SME vsebovati funkcij main in f!
// Funkciji main in f sta definirani v datoteki test01.c.
