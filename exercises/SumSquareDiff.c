
#include <stdio.h>
#include <math.h>

int main () {

  int sumSquares = 0;
  int Squaresum = 0;
  
  //sum of squares
  for(int i = 1; i <= 100; i++) {
    sumSquares += pow(i,2);
  }
  //Square sum
  for(int i = 1; i <= 100; i++) {
    Squaresum += i;
  }

  Squaresum = Squaresum * Squaresum;
  int diff = Squaresum - sumSquares;

  printf("%d \n", diff);
  return 0;
}


