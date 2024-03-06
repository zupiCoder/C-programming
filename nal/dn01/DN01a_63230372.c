
#include <stdio.h>
#include <stdbool.h>

int charToDigits(char input, int num);
void printDigits(int num);

int charToDigits(char input, int num) {
    num = num * 10 + (input - '0');
    return num;
}

void printDigits(int num) {
    if (num >= 10) {
        printDigits(num / 10);
    }
    putchar((num % 10) + '0');
}

int main() {
    char input;
    int a = 0;
    int b = 0;
    int sum = 0;
    bool negative = false;

    //1st number
    input = getchar();
    if(input == '-') { 
        negative = true;
        input = getchar();
    }

    while(input != ' ') {

        a = charToDigits(input, a);
        input = getchar();
    }
    
    if(negative) {
        a = -a;
        negative = false;
    }
    //2nd number
    input = getchar();
    if(input == '-') { 
        negative = true;
        input = getchar();
    }

    while(input != '\n') {
        b = charToDigits(input, b);
        input = getchar();
    }

    
    if(negative) {
        b = -b;
    }
    
    sum = a + b;
    
    printDigits(sum);
 
    putchar('\n');  
    return 0;
}

