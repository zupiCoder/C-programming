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

int main() {
    int num = 2; // Start from the first prime number
    int counter = 1; // We already have the first prime number

    while (counter < 10001) { // Loop until we find the 10001st prime
        num++;
        if (isPrime(num)) {
            counter++;
        }
    }

    printf("The 10001st prime number is: %d \n", num);
    return 0;
}
