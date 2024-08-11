#include <stdio.h>
#include <stdlib.h>

#include "naloga.h"

int vsota(int *zac, int *kon)
{
  int vsota = 0;
  for (int *i = zac; i <= kon; i++)
  {
    vsota += *i;
  }

  return vsota;
}

void indeksInKazalec(int *t, int *indeks, int **kazalec)
{ 
  if (*indeks == -1)
  { 
    *indeks = *kazalec - t;
  }
  else
  {
    int *el = &t[*indeks];
    *kazalec = el;
  }
}

void frekvenceCrk(char *niz, int **frekvence)
{ 
  // kazalec kaze na zacetek novo ustvarjene tabele
  int *crke = calloc(26, sizeof(int)); //kaj je razlika med malloc in calloc
  //calloc allocata memory block in vrednosti nastavi v 0, malloc samo allocata memory block 
  char *p = niz;
  // beremo dokler ne pride do dolocenega elementa
  while (*p != '\0')
  {
    if ((*p >= 'A' && *p <= 'Z') || (*p >= 'a' && *p <= 'z'))
    {
      int indeks = (*p >= 'a') ? (*p - 'a') : (*p - 'A');
      crke[indeks]++;
    }
    // incrementamo po nizu
    p++;
  }
  // vpisemo kazalec na zacetek novoustvarjene tabele frekvence
  *frekvence = crke;
}

#ifndef test
  
int main()
{

}

#endif