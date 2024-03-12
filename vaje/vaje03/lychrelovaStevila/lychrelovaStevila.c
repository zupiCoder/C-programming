#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPalindrome(int reverseNum, int num);
int reverseNum(int num);


bool isPalindrome(int reverseNum, int num) {
  
  if(reverseNum == num) {
    return true;
    
  } else {
    return false;
  }
}

int reverseNum(int num) {
    int reverseNum = 0;
    int temp = num; 
  
  while(temp != 0) {
    int digit = temp % 10;
    reverseNum = reverseNum * 10 + digit;
    temp = temp /10;
  }

  return reverseNum;
}

int main(){
   
    int k, a, b;
    int counter = 0;
    scanf("%d%d%d",k, a, b);

    for(int i = a; i <= b; i++) {
        for(int j = 0; j < k; j++) {
            
            long temp = i + reverseNum(i);
            long reverseTemp = reverseNum(temp);
            if(temp > pow(10,17)){
                break;
                //flag, da smo presegli vrednost
            }
            if(isPalindrome(reverseTemp,temp)){
                break;
            }

            if(j == k - 1) {
                counter++;
            }
        }


    }
    

    return 0;
}
