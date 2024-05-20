#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int lengthOfString(char* string){
  char* s = string;
  int length = 0;
  while(*s != '\0'){
    length++;
    s++;
  }
  
  return length;
}

char* reverseString(char* string,char* reverse, int i){
  
  if(*string == '\0') return reverse;
    
  reverse[i] = *string;
  printf("%c\n", reverse[i]);
  
  return reverseString(string + 1, reverse, i - 1);
}

int main() {
  
  char* string = "racunalnicar";
  int length = lengthOfString(string);
  
  char* reverse = (char*) calloc(length + 1, sizeof(char));
  
  reverse = reverseString(string,reverse, length);
      
  for(int i = 0; i <= length; i++){
    printf("%c", reverse[i]);
  }
  printf("\n");
  return 0;
}
