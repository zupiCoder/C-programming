
#include <stdio.h>
#include <stdbool.h>

long tabela[401][401];//globalna tabela 

long numOf(int n, int k);

long numOf(int n, int k){

  if(n == 0 && k > 0){
    return 1;
  }

  if(n < 0 || k <= 0){
    return 0;
  }

  if(tabela[n][k] != 0){
    return tabela[n][k];
  }

  long st = (numOf(n - k, k) + numOf(n, k - 1));
  tabela[n][k] = st;

  return st;
}


int main() {

  int n, k;


  scanf("%d %d", &n, &k);

  printf("%ld\n", numOf(n,k));


  return 0;
}