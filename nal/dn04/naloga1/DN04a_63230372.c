
#include <stdio.h>
#include <stdbool.h>

int findK();


int main()
{
  int n = 0;
  scanf("%d", &n);

  int* t1 = (int*)calloc(n, sizeof(int));
  int* t2 = (int*)calloc(n, sizeof(int));

  for(int i = 0; i < n; i++)
  {
    scanf("%d", &t1[i]);
  }

  for(int i = 0; i < n; i++)
  {
    scanf("%d", &t2[i]);
  }
  
  return 0;
}
