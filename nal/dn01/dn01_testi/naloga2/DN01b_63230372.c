#include <stdio.h>
#include <stdbool.h>

void printDigits(int log) {
    if (log/10 != 0) {
        printDigits(log / 10);
    }
    putchar((log % 10) + '0');  
}

int main() {
    
    char input;
    int log = 0;  
    int length = 0;
    int ones = 0;     

    while((input = getchar()) != '1') {
        continue;
    }
    
    while(input != '\n') {
        length++;
        if(input == '1') {
            ones++;
        }
        input = getchar();
    }

    log = length - 1;
    if(ones > 1) {
        log++;
    }
    
    printDigits(log);
    putchar('\n');
    return 0;
}


