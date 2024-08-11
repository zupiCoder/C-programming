
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main() {

    int n = getchar() - '0';
    getchar();
    
    int temp = 0;
    bool soEnaka = true;
    
    for(int i = 0; i < n; i++) {
        int st = getchar() - '0';
        getchar();
        
        if(i == 0) {
            temp = st;
        }
        
        if(i > 0) {
            if(st != temp) {
                soEnaka = false;
            }
        } 
    }
    
    if(soEnaka) {
        printf("%d \n",1);
    } else {
        printf("%d \n", 0);
    }
    
   return 0; 
}
