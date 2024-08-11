#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <limits.h>

int t[1000000];

int biggestSum(int t[], int n) {
  int biggestSum = INT_MIN;
  int temp = 0;

  for(int i = 0; i < n; i++) {    
    for(int j = i; j < n; j++) {
      temp += t[j];
      if(temp > biggestSum) {
        biggestSum = temp;
      }
    }
    temp = 0;
  } 
  return biggestSum;
}

int main() {

  int n = 0;
  scanf("%d", &n);

  for(int i = 0; i < n; i++) {
    scanf("%d", &t[i]);
  }

  int sum = biggestSum(t, n);

  printf("%d\n", sum);

  return 0;
}
