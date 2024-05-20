#include <stdio.h>
#include <stdlib.h>

void nizi(char zac, char kon, char* kom, int i, int n) {
  
  if(i == n){
    return;
  }
  
  for(char c = zac; c <= kon; c++){
    kom[i] = c;
    kom[i + 1] = '\0';
    printf("%s\n", kom);
    nizi(zac, kon, kom, i + 1, n);
  }
}

int main(){

  int n = 0;
  char zac = 0;
  char kon = 0;

  //preskocimo char presledek
  scanf("%d %c %c", &n, &zac, &kon);
  
  char* kom = malloc((n + 1) * sizeof(char));
   
  nizi(zac, kon, kom, 0, n);

  free(kom);
  return 0;
}
