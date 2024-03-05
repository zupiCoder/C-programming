
#include <stdio.h>
#include <stdbool.h>

int charToDigits(int input, int num) {
    num = num * 10 + (input - '0');
    return num;
}

int digitsToChars(int num) {
         
    
}

int main() {
    int input;
    int a = 0;
    int b = 0;
    int sum = 0;
    bool negative = false;

    //1st number
    input = getchar(); 
    if(input == '-') { 
        negative = true;
    }

    while(input != '\n') {
        a = charToDigits(input, a);
        
        input = getchar();
    }

    if(negative) {
        a = -a;
    }
    
    //2nd number
    input = getchar();
    if(input == '-') { 
        negative = true;
    }

    while(input != '\n') {
        b = charToDigits(input, b);
        
        input = getchar();
    }

    if(negative) {
        b = -b;
    }

    
    sum = a + b;
    
    //digit to char of sum
    while(sum > 0) {
        
    }
        
    return 0;
}

