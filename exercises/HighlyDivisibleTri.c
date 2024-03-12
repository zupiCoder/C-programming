
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int numOfDivisors(int num) {

    int divisors = 1;
    int root = sqrt(num);
    
    for(int i = 1; i < root; i++) {
        if(num % i == 0) {
            divisors++;
        }
    }   
    return divisors;
}

int main() {

    int num = 1;
    int counter = 1;
    //num to have over 500 divisors
    while(numOfDivisors(num) <= 500) {
        counter++;
        num += counter;
    }

    printf("%d\n",num);
    return 0;
}