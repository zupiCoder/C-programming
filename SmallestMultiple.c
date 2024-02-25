#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isDivisible(int num) {
  bool isDivisible = true;
  for(int i = 1; i <= 20; i++) {
    if(num % i != 0) {
      isDivisible = false;
      return isDivisible;
    }
  }

  return isDivisible;
}

int main() {
  int num = 2520;

  while(!isDivisible(num)) {
    num++;
  }

  if(isDivisible(num)) {
    printf("%d \n", num);
  }
  return 0;
}