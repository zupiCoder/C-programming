#include <stdio.h>
#include <math.h>

int numOfDivisors(int num) {

    int divisors = 0;

    for(int i = 1; i < sqrt(num); i++) {
        if(num % i == 0) {
            divisors++;
        }
    }

    return divisors;
}