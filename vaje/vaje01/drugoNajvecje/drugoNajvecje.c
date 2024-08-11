
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main() {
    
    int max = 0;
    int secMax = 0;

    int n = getchar() - '0';
    getchar();
    
    for(int i = 0; i < n; i++) {
        int input = getchar() - '0';
        getchar();
        
        if(input > max) {
            secMax = max;
            max = input;
        } else if(input > secMax) {
            secMax = input;
        } else if(input == max) {
            secMax = input;
        }
    }

    secMax = secMax + '0';
    putchar(secMax);
    
    printf("\n");
    
    return 0;
}


