#include <stdio.h>

int minimo(int v[], int a, int b){
  int menor;
  if (a==b)
    return a;
  menor = minimo(v, a, b-1)
  if (v[b] < v[menor])
    menor = b;
  return menor;
}

troca(int v[], int &a, int &b){
  int temp;
  temp = v[a];
  v[a] = v[b];
  v[b] = temp;
}

int v[] selectionSort(int v[], int a, int b){
  if(a>=b)
    return v;
  troca(v, a, minimo(v,a,b);
  return selectionSort(v, a+1, b);
}
