#include <stdio.h>

void troca(int v[], int a, int b){ 
  int temp;
  temp = v[a];
  v[a] = v[b];
  v[b] = temp;
}

int particionar(int v[], int a, int b){
  int x, m;
  x = v[b];
  for (int i = a; i<b; i++)
    if (v[i] <= x){
      troca(v,m,i);
      m = m +1;
      }
  troca(v, m, b);
  return m;
}

void quickSort(int v[], int a, int b){
  if(a>=b)
    return;
  m = particionar(v, a, b);
  quickSort(v, a, m-1);
  quickSort(v, m+1, b);
  return;
}
