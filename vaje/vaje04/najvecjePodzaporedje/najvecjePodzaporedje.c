#include <stdio.h>
#include <stdbool.h>

int biggestSum(int t[], int length) {
  int temp = t[length - 1];
  printf("%d\n", temp);
  printf("\n");

  for(int i = 0 ; i < (length - 1); i++) {
    if((temp + t[i]) > temp) {
      temp += t[i];
      printf("%d\n", temp);
    }
  }

  return temp;
}

int main() {

  int n;
  int temp = 0;
  scanf("%d", &n);

  int t[n];

  for(int i = 0; i < n; i++) {
    int input = 0;
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

  int sum = biggestSum(t, n);

  printf("%d\n", sum);

  return 0;
}

//nemoremo resiti z sortArray!!!!