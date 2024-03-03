
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1) return false; // 0 and 1 are not prime
    if (num == 2) return true;  // 2 is the only even prime number
    if (num % 2 == 0) return false; // Exclude even numbers greater than 2

    int root = (int)sqrt(num) + 1;

    for (int i = 3; i <= root; i += 2) { // Check only odd divisors
        if (num % i == 0) {
            return false; // Found a factor, not a prime number
        }
    }
    return true; // No factors found, is a prime number
}

int main () {
    int lim = 2000000;
    int sum = 0;
    
    for(int i = 2; i <= lim; i++) {
        if(isPrime(i)) {
            sum += i;
        }
    
    }
    printf("%d",sum);
    return 0;
}
