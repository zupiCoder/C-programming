#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int decToBin(int n,int bin, int i){
  
  if(n == 0){
    return bin;
  }        
    
  if(n % 2 == 0){
    bin += 1 * (10 * i);
  }
  
  return decToBin((n / 2), bin,(i + 1));
}

int main(){

  int n;
  scanf("%d", &n);
  
  int bin = 0;
  
  
  printf("%d\n", decToBin(n,bin, 0));
  



  return 0;
}
