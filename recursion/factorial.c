#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int factorial(int n);


int factorial(int n){

  if(n == 1){
    return 1;
  }
  
  return n * factorial(n - 1);
}



int main(){
  
  int n;
  scanf("%d", &n);
  
  int fact = factorial(n);
  
  printf("%d\n", fact);


  return 0;
}
