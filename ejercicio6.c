// Escribir un programa que calcule el producto punto entre dos vectores de dimensi ́on N y valores reales.Siendo N una constante conocida en tiempo de compilaci ́on al igual que los componentes de los vectores.

#include <stdio.h>
#include <stdlib.h>
#define N 3

 int main(int argc, char  *argv[]) {
  int a[N] = {4,5,6};
  int b[N] = {6,5,4};
  int producto = 0;
  for (int i = 0; i < N; i++) {
    producto += a[i] * b[i];
    printf("%d\n", producto);
  }
  printf("\n");
  return 0;
}
