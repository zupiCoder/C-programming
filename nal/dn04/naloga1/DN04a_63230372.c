#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int findK(int t1[], int t2[], int n)
{
  int i = 0;
  int k = 0;

  while (i < n)
  {
    for (int el2 = 0; el2 < n; el2++)
    {
      if (t1[el2 + k] != t2[el2])
      {
        k++;
        break;
      }
      if (el2 + k == (n - 1))
      {
        return k;
      }
    }
    i++;
  }
  return -1;
}

int main()
{

  int n = 0;
  scanf("%d", &n);

  int *t1 = (int *)calloc(n, sizeof(int));
  int *t2 = (int *)calloc(n, sizeof(int));

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &t1[i]);
  }

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &t2[i]);
  }

  int k = findK(t1, t2, n);

  printf("%d\n", k);

  free(t1);
  free(t2);

  return 0;
}
