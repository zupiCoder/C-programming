#include <stdio.h>
#include <stdbool.h>

int biggestSum(int t[], int length) {
  int biggestSum = 0;
  
  //manjsamo od katerega elementa gremo skozi array
  for(int el = 0; el < length; el++) {
    //prvi element je el, gremo do konca arraya, ce 
    //temp + element arraya > temp ga pristejemo
    int temp = 0;
    for(int i = el; i < length; i++){
      if(temp + t[i] > biggestSum) {
        printf("%d\n",t[i]);
        temp += t[i];
      } else {
          break;
      }

      if(temp > biggestSum) {
        biggestSum = temp;
      }

      //elementa, ki zmanjsa temp ne moremo izpustiti, zaporedje 
      //mora biti nepretrgano
      
    }
  }

  return biggestSum;
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

  int sum = biggestSum(t, n);

  printf("%d\n", sum);

  return 0;
}
