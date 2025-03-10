#include <stdio.h>

void troca(int v[], int a, int b){ //vetor já é passado como referência?
  int temp;
  temp = v[a];
  v[a] = v[b];
  v[b] = temp;
}

int buscar(int x, int v[], int a, int b){
  if (a>b)
    return -1;
  if (v[b] == x)
    return b;
  return buscar(x, v, a, b-1);
}

int v[] inserir(int v[], int a, int b){
  int p, i;
  p = buscar(v[b], v, a, b-1);
  i = b;
  while(i > p+1){
    troca(v, i, i-1);
     i = i-1;
  }
  return v;
}

int v[] insertionSort(int v[], int a, int b){
  if(a>=b)
    return v;
  insertionSort(v, a, b-1);
  inserir(v, a, b);
  return v;
}
