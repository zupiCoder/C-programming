
#include <stdio.h>

int main() {

    int a = getchar();//dobimo ascii kodo vpisanega characterja
        
    getchar(); //preberemo presledek
    
    int b = getchar();
    
    getchar();
    
    
   a = a - '0'; //odstejemo 0, da dobimo pravo vrednost characterja iz ascii kode
   
   b = b - '0';
   
   int vsota = (a + b) % 10;
   vsota = vsota + '0';
   
   putchar(vsota);
   
   printf("\n");
  return 0;
}






