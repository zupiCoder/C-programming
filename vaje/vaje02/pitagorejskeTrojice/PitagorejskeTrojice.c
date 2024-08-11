
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isPithagorean(int a, int b, int c) {
  return a * a + b * b == c * c;
}
 
int main() {

  int m, n;
  int counter = 0;
  bool foundC = false;

  scanf("%d%d", &m, &n);

  for(int c = m; c <= n; c++) {
    for(int a = 1; a < c; a++) {
      for(int b = a + 1; b < c; b++) {
        if(isPithagorean(a,b,c) && (a != b)) {
          counter++;  
          foundC = true;
          break;
        }
      }
      if(foundC) {
        foundC = false;
        break;
      }
    }
  }

  printf("%d \n", counter);
  return 0;
}