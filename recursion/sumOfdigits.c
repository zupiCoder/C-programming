
#include <stdio.h>
#include <stdbool.h>

int sestej(int n){
  
  if(n == 0) return 0;
  
  int digit = n % 10;

  return digit + sestej(n / 10);
}


int main() {

  int n;
  
  scanf("%d", &n);
  
  printf("%d\n", sestej(n));

}
