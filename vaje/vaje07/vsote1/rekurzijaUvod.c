#include <stdio.h>
#include <stdbool.h>

//iterativna funkcija
int vsotaI(int* A, int n){
  int vsota = 0;

  for(int i = 0; i < n; i++){
    vsota += A[i];
  }

  return vsota;
}

//rekurzivna funkcija
int vsotaR(int* A, int n){

  if(n == 0) {
    return 0;
  }

  return A[0] + vsotaR(A + 1, n - 1);
}

int main(){

  int A[10] = {0, 5, 12, 4 , 22, 32, 7, 8, 11, 18};

  int vs1 = vsotaI(A, 10);

  int vs2 = vsotaR(A,10);

  printf("%d\n", vs1);
  printf("%d\n" , vs2);

  return 0;
}
