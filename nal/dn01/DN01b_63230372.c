
#include <stdio.h>
#include <stdbool.h>

int binaryToDecimal(int num);
int charToDigits(int input, int num);
int numOfDigits(int num);

//converting binary to dec
int binaryToDecimal(int num) {
    int counter = 0;
    int decimal = 0;
    
    while(num > 0) {
        if(num % 10 == 1) {
            int count = counter;
            int temp = 1;
            while(count > 0) {
                temp = temp * 2;
                count--;
            }
            decimal += temp;
        }
        num = num / 10;
        counter++;
    }
    return decimal;
} 

//converting inputs to a binary number
int charToDigits(int input, int num) {
    num = num * 10 + (input - '0');
    return num;
}

//number of digits
int numOfDigits(int num) {

  int numOf = 0;
  
  while(num > 0) {
    numOf++;
    num = num / 10;
  }
  return numOf;
}
  
int main() {
    
    int input;
    int num = 0;
        
    input = getchar();
    
    while(input != '\n') {
        
        num = charToDigits(input,num);  
        input = getchar();
    }
        
    int decimal = binaryToDecimal(num);
    
    int temp = 1;
    int log = 0;
    
    //getting the log 
    while(temp <= decimal) {
      temp = temp * 2;
      log++;
    }
    
    //printing log with putchar();
    while(log > 0) {
      int digit = 0;
      for(int i = 0; i < numOfDigits(log) - 1; i++) {
          int tempLog = log;
          digit = tempLog / 10;
      }
    }
    return 0;
    }
    
  
