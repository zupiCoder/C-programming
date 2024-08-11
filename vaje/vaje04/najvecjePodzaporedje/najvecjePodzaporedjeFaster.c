#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <limits.h>

int biggestSum(int n) {

  int biggestSum = INT_MIN;
  int temp = 0;
  for(int i = 0; i < n; i++) {
    int el = 0;
    scanf("%d", &el);
    temp += el;
    if(temp > biggestSum) {
      biggestSum = temp;
    }

    if(temp < 0) {
      temp = 0;
    }
  } 
  return biggestSum;
}

int main(){        
    int sum = 0;
    int n = 0;
    scanf("%d", &n);
  
    sum = biggestSum(n);
    printf("%d\n", sum);
    return 0;
}