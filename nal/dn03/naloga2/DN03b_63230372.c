#include <stdio.h>
#include <stdbool.h>
#include "tranzitivnost.h"

int tranzitivnost(int a, int b) {
  bool tranzitivnaBool = true;
  bool antitranzitivnaBool = true;          
  bool netranzitivnaBool = false;        

  for(int x = a; x <= b; x++) {
    for(int y = a; y <= b; y++) {
      for(int z = a; z <= b; z++) {
        if(f(x,y) && f(y,z)) {
          if(!f(x,z)) {
            tranzitivnaBool = false;
            netranzitivnaBool = true;
          }
          if(f(x,z)) antitranzitivnaBool = false;
        }
      }
    }
  }
  if(tranzitivnaBool && antitranzitivnaBool) return 1;
  if(tranzitivnaBool) return 2;
  if(antitranzitivnaBool) return 3;
  if(netranzitivnaBool) return 4;
  return -1;
}


