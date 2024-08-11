

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){

  int n; 
  scanf("%d", &n);

  bool padajoce = false;
  bool narascajoce = true;
  int dolzina = 0;
  int i = 0;

  int* zap = (int*) calloc(n, sizeof(int));

  for(int i = 0; i < n; i++){
    scanf("%d", &zap[i]);
  }

  while(i < n){
    dolzina++;

    if(i == n - 1){
      printf("%d\n", dolzina);
      break;
    }

    if(narascajoce){
      printf("narascamo: %d\n", dolzina);
      if(zap[i] > zap[i + 1]){
        printf("%d\n", dolzina);
        dolzina = 1;
        narascajoce = false;
        padajoce = true;
      }
    } else if(padajoce){
      if(zap[i] < zap[i + 1]){
        printf("%d\n", dolzina);
        dolzina = 1;
      }
    }
    i++;
  }
  return 0;
}


