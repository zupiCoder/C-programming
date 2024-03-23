#include <stdio.h>
#include <stdbool.h>
#include "tranzitivnost.h"

bool tranzitivna(int x, int y, int z);
bool antitranzitivna(int x, int y, int z);
bool netranzitivna(int x, int y, int z);

int tranzitivnost(int a, int b) {
  bool tranzitivnaBool = true;
  bool antitranzitivnaBool = true;
  bool netranzitivnaBool = true;

  for(int x = a; x <= b; x++) {
    for(int y = a; y <= b; y++) {
      if(f(x,y)) {
        for(int z = a; z <= b; z++) {
          if(tranzitivna(x,y,z) == 0) {
            tranzitivnaBool = false;
          }
            
          if(antitranzitivna(x,y,z) == 0) {
            antitranzitivnaBool = false;
          }

          if(netranzitivna(x,y,z) == 0) {
            netranzitivnaBool = false;
          } 
        }   
      }
    }
  }

  if((tranzitivnaBool == 1) && (antitranzitivnaBool == 1)) {
    return 1;
  }
  if(tranzitivnaBool == 1) {
    return 2;
  }
  if(antitranzitivnaBool == 1) {
    return 3;
  }
  if(netranzitivnaBool == 1) {
    return 4;
  }

  return -1;
}

bool tranzitivna(int x, int y, int z) {
  if(f(x,y) == 1 && f(y,z) == 1) {
    if(f(x,z)) {
      return true;
    }
  }
  return false;
}

bool antitranzitivna(int x, int y, int z) {
  if(f(x,y) == 1 && f(y,z) == 1) {
    if(f(x,z) == 0) {
      return true;
    }
  }
  return false;
}

bool netranzitivna(int x, int y, int z) {
  return f(x,y) == 1 && f(y,z) == 1 && f(x,z) == 1;
}

