#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPalindrome(long reverseNum, long num);
long reverseNum(long num);

bool isPalindrome(long reverseNum, long num) {
  
  if(reverseNum == num) {
    return true;
    
  } else {
    return false;
  }
}

long reverseNum(long num) {
  long reverseNum = 0;
  long temp = num; 
  
  while(temp > 0) {
    int digit = temp % 10;
    reverseNum = reverseNum * 10 + digit;
    temp = temp / 10;
  }
  return reverseNum;
}

int main(){
   
  int k, a, b;
  int counter = 0;

  long temp = 0;
  long reverseTemp = 0;

  scanf("%d%d%d",&k, &a, &b);

  for(int i = a; i <= b; i++) {
    temp = i;
    for(int j = 0; j < k; j++) {
      //prva iteracija
      if((temp + reverseNum(temp) > pow(10,17))){
        break;
      }
      temp += reverseNum(temp);
      reverseTemp = reverseNum(temp);

      if(isPalindrome(reverseTemp, temp)) {
        break;
      }
    }

    if(!isPalindrome(reverseTemp,temp)) {
      counter++;
    }
  }

  printf("%d", counter);
  return 0;
}
