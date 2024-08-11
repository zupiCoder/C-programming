
#include <stdio.h>
#include <stdbool.h>

int sumOfFactors(int num) {
    int sumOfFactors = 0;

    for(int i = 1; i < num; i++) {
        if(num % i == 0) {
            sumOfFactors += i;
        }
    }

    return sumOfFactors;
}

int main() {

    int num1; 

    scanf("%d", &num1);

    int sumFactorsFirst = sumOfFactors(num1);
    int num2 = sumFactorsFirst;
    int sumFactorsSecond = sumOfFactors(num2);
    
    if(sumFactorsSecond == num1) {
        printf("%d\n", num2);
    } else {
        printf("NIMA\n");
    }   

    return 0;
}