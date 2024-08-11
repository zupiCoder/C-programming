#include <stdio.h>
#include <stdbool.h>

int charToDigits(int input, int num) {
    num = num * 10 + (input - '0');
    return num;
}

void printDigits(int num) {
    if (num / 10 != 0) {
        printDigits(num / 10);
    }
    putchar((num % 10) + '0');
}

int getNumber() {
    int input;
    int num = 0;
    bool negative = false;

    input = getchar();
    if(input == '-') { 
        negative = true;
        input = getchar();
    }

    while(input != ' ') {
        num = charToDigits(input, num);
        input = getchar();
    }
    
    if(negative) {
        num = -num;
        negative = false;
    }
    return num;
}

int main() {
    int a = getNumber();
    int b = getNumber();
    int sum = 0;

    sum = a + b;
    if(sum < 0){
        putchar('-');
        sum = -sum;
    }

    printDigits(sum);
    putchar('\n');  
    return 0;
}

