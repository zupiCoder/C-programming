
#include <stdio.h>
#include <stdbool.h>

//declared functions
int binaryToDecimal(int num);
int charToDigits(int input, int num);
int numOfDigits(int num);
void printDigits(int log);

//defined functions
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
//recursive function to print digits
void printDigits(int log) {
    if (log >= 10) {
        printDigits(log / 10);
    }
    putchar((log % 10) + '0');
}
  
int main() {
    
    int input;
    int num = 0;
    int log = 0;
    int temp = 1;
        
    input = getchar();
    
    while(input != '\n') {
        //call function to convert inputted chars into numbers
        num = charToDigits(input,num);  
        input = getchar();
    }
        
    int decimal = binaryToDecimal(num);
    
    //getting the log 
    while(temp <= decimal) {
      temp = temp * 2;
      log++;
    }
    
    printDigits(log);
    putchar('\n');
    return 0;
}


