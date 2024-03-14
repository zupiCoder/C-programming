#include <stdio.h>
#include <stdbool.h>

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

  int n;
  int temp = 0;

  scanf("%d", &n);

  int t[n];

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
