
#include <stdio.h>

int poModulu(int a , int b) {
  return (a + b) % 10;
}

int main() {

  int num;
  int nextnum;

// use & to show where int * is stored!!
  scanf("%d", &num);
  scanf("%d", &nextnum);

  printf("%d \n", poModulu(num, nextnum));
  return 0;
}

