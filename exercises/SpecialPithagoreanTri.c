
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isPithagorean(int a, int b, int c) {
  return a * a + b * b == c * c;  
}

int main() {

  for(int c = 3; c < 1000; c++) {
    for(int b = 2; b < c; b++) {
      for(int a = 1; a < b; a++) {
        if(a + b + c == 1000) {
          if(isPithagorean(a,b,c)) {
            int pithagorean = a*b*c;
            printf("%d \n",pithagorean);
          }
        }
      }
    }
  }

  return 0;
}