#include <stdio.h>
#include <stdbool.h>

//definiramo tabelo zunaj;
int t[100000];

bool isPermutation(int t[], int n) {
  if(t[0] != 0) {
    return false;
  }

  for(int i = 0; i < (n - 1); i++) {
    if((t[i] + 1) != t[i + 1]) {
      return false;
    }
  }
  return true;
}

int main() {
  int temp = 0;
  int n;
  scanf("%d", &n);

  //fill array
  for(int i = 0; i < n; i++) {
    int input;
    scanf("%d", &input);
    
    t[i] = input;
  }

  //sort Array
  for (int i = 0; i < n; i++) {   
    for (int j = i+1; j < n; j++) {   
      if(t[i] > t[j]) {  
        temp = t[i];  
        t[i] = t[j];  
        t[j] = temp;  
      }   
    }   
  }  

  if(isPermutation(t,n)) {
    printf("DA\n");
  } else {
    printf("NE\n");
  }
  return 0;
}
