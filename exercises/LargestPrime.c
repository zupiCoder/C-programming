
#include <math.h> //when compiling use -lm
#include <stdio.h> //include the basic library in the code
#include <stdbool.h>//include type boolean in code

//boolean function to check if a number is prime

bool isPrime(int num) {
    if(num % 2 == 0) {
      return false;
    }

    for(int i = 3; (long) i * i <= num; i+= 2) {
      if(num % i == 0) {
        return false;
      }
    }
    return true;
  }

int main() {

  //find the largest prime divisor of this number 
  long num = 600851475143;
  int max = 3;
  long root = sqrt(num);

  for(int i = 3; (long) i < root ; i++) {
    if(isPrime(i) && num % i == 0){ //check if the prime actually divides the num
      max = i;
    }
  }
  
  printf("%d \n", max);
  return 0; // echo $? to check if program returns 0, it means the program was executed correctly
}

