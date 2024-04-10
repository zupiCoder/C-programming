#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long numOf(int n, int k, int* cleni, int num);
void izpisi(int* cleni, int k, int n);

void izpisi(int*cleni, int k, int n) {
  printf("%d", k);
  for(int i = 0; i < n; i++) {
    if(cleni[i] == 0){
      break;
    }

    printf(" + %d", cleni[i]);
  }
  printf("\n");
}

long numOf(int n, int k, int* cleni, int num){

  if(n == 0 && k > 0){
    izpisi(cleni, k, n);
    return 1;
  }

  if(n < 0 || k <= 0){
    return 0;
  }

  cleni[num] = k;
  long st = (numOf(n - k, k, cleni, num + 1) + numOf(n, k - 1, cleni, num));
  return st;
}

int main() {

  int n, k;
  int num = 0;

  scanf("%d %d", &n, &k);

  int* cleni = malloc(n * sizeof(int));

  numOf(n,k, cleni, num);

  return 0;
}