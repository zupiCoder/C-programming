#include <stdio.h>
#include <stdbool.h>

int n; //globalna spremenljivka
int v[2000], c[2000];
int mem[2001][2000], done[2001][2000];

int napolni(int V, int i){

  if(i == n) return 0; // c[i] + 0
  if(done[V][i]) return mem[V][i];
  int m = napolni(V, i + 1);

  if(v[i] <= V){
    int cena = napolni(V - v[i], i + 1) + c[i];
    if(cena > m) m = cena;
  }
  mem[V][i] = m;
  done[V][i] = 1;

  return m;
}

int main() {

  int V;
  scanf("%d", &V);
  scanf("%d", &n);

  for(int i = 0; i < n; i++) scanf("%d", &v[i]);
  for(int i = 0; i < n; i++) scanf("%d", &c[i]);

  printf("%d\n", napolni(V,0));

  return 0;
}