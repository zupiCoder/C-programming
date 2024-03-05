
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
        
    //first input
    input = getchar();
    
    //check if pressed enter
    while(input != '\n') {
        
        num = charToDigits(input,num);  
        input = getchar();
    }
    
    //convert binary to decimal   
    int decimal = binaryToDecimal(num);
    
    int temp = 1;
    int log = 0;
    int digit = 0;
    
    //getting the log 
    while(temp <= decimal) {
      temp = temp * 2;
      log++;
    }
    
    //printing log with putchar();
    /*
    while(log > 0) {  
      //set tempLog to updated log
      int tempLog = log;
      int numDigit = numOfDigits(log);
      //get the digit
      for(int i = 0; i < numDigit - 1; i++) {
          digit = tempLog / 10;
          tempLog = tempLog / 10;
            
      }
      putchar(digit + '0');
      //update log
      for(int i = 0; i < numDigit - 1; i++) {
        digit = digit * 10;
        
      }
      log = log % digit;
      numDigit--;//minus 1 digit
    }
    putchar('\n');
    */
    
    int powerOf10 = 1;
    while (log / powerOf10 >= 10) { // Find the highest power of 10 less than or equal to log
        powerOf10 *= 10;
    }

    while (powerOf10 > 0) {
        int digit = log / powerOf10; // Isolate the leading digit
        putchar(digit + '0'); // Convert to ASCII and print
        log %= powerOf10; // Reduce log by removing the leading digit
        powerOf10 /= 10; // Move to the next digit position
    }

    putchar('\n'); // Print a newline at the end for cleanliness

    return 0;
}
