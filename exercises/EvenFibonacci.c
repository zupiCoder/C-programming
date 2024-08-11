
#include <stdio.h>

int main() {

  int elPre = 1;
  int elCur = 1;

  int elTemp = 0;
  int limit = 4000000;

  int sum = 0;

  while(elCur < limit) {
    elTemp = elPre + elCur;
    if(elTemp % 2 == 0) {
      sum += elTemp;
    }

    elPre = elCur;
    elCur = elTemp;
  }

  printf("%d\n", sum);
  return 0;
}