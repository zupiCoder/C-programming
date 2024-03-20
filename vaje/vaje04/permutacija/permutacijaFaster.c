#include <stdio.h>
#include <stdbool.h>

//definiramo tabelo zunaj;
int t[100000];

bool isPermutation(int t[], int n) {
  for(int i = 0; i < n; i++) {
    if(t[i] < 0) {
      return false;
    }
    if(t[i] >= n) {
      return false;
    }
    for(int j = 0; j < n; j++) {
      if((t[j] == t[i]) && (j != i)) {
        return false;
      }
    }
  }
  return true;
}

int main() {
  int n = 0;
  scanf("%d", &n);

  //fill array
  for(int i = 0; i < n; i++) {
    scanf("%d", &t[i]);
  }

  printf(isPermutation(t,n) ? "DA\n" : "NE\n");
  return 0;
}
