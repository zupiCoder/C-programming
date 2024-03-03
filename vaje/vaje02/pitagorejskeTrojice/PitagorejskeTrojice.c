
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isPithagorean(int a, int b, int c) {
  return a * a + b * b == c * c;
}
 
int main() {

  int m;
  int n;
  int counter = 0;

  scanf("%d", &m);
  scanf("%d", &n);

  int b = 2;
  int c = m;
  //c menjamo zadnji, najprej pregledamo vse mozne kombinacije
  for(int c = m; c <= n; c++) {
    for(int a = 1; a < c; a++) {
      for(int b = a + 1; b < c; b++) {
        if(isPithagorean(a,b,c)) {
          counter++;
        }
      }
    }
  }

  printf("%d \n", counter);
  return 0;
}