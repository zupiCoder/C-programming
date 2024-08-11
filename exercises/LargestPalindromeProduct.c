#include <math.h>
#include <stdio.h>
#include <stdbool.h>

//reverse number algorithm
bool isPalindromeTrue(int num) {
  int reverseNum = 0;
  int temp = num; 
  
  while(temp != 0) {
    int digit = temp % 10;
    reverseNum = reverseNum * 10 + digit; //do not use the short version *= !!!
    temp = temp /10;
  }
  if(reverseNum == num) {
    return true;
    
  } else{
    return false;
  }
}

int main() {  
  int max = 0;

  //largest product of two numbers that is a palindrome
  for(int i = 1; i < 1000; i++) {
    for(int j = i; j < 1000 ; j++) {
      int num = i * j;
      if(isPalindromeTrue(num) && num > max) {
        max = num;
      }
    }
  }

  printf("%d \n", max);
  return 0;
} 