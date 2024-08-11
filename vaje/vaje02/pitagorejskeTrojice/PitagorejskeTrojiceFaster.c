
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isPithagorean(int a, int b, int c) {
  return a * a + b * b == c * c;
}
 
int main() {

  int m, n;
  int counter = 0;
  
  scanf("%d%d", &m, &n);

  for(int c = m; c <= n; c++) {
    for(int a = 1; a < c; a++) {
      int b2 = c * c - a * a;
      int bSqrt = round(sqrt(b2)); //zaokrozimo na celo vrednost
      if(bSqrt * bSqrt == b2) {
        counter++;
        break;
      }
    }
  }





  printf("%d \n", counter);
  return 0;
}

/*
faster verzija prejsnjega programa,
poskusimo se znebiti nekega gnezdenega loopa,
da pohitrimo iskanje kombinacij dolocenih stevil,
*/