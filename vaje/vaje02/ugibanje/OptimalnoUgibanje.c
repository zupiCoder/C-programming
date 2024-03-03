
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main() {

  int a,b;
  int avg = 0;
  int input;
 
  scanf("%d \n", &a);
  scanf("%d \n", &b);
  
  int zgMeja = b;
  int spMeja = a;

  while(input != 0) {
    scanf("%d",&input);
    
    avg = (zgMeja + spMeja) / 2;
    
    if(input == 1) {
        spMeja = avg + 1;
    }
    if(input == -1) {
        zgMeja = avg - 1;
    }
  }
  
  if(zgMeja == spMeja) {
    printf("%d \n", zgMeja);  
   } else if(zgMeja < spMeja) {
    printf("PROTISLOVJE");
  } else if(zgMeja != spMeja) {
    printf("%d %d \n", spMeja, zgMeja);
  }
  return 0;
}
