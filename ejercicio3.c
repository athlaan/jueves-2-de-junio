// Escribir un programa que acepte dos argumentos n y m. El tamaño de un array es el argumento n. El programa llena el array con números aleatorios entre 0 y m y los imprime uno por línea.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char  *argv[]) {
  srand (time(NULL));
  int m = atoi(argv[1]);
  int n = atoi(argv[2]);
  int a[n];

  for (int i = 0; i < n; i++) {
   a[i] = rand () % m;
   printf("%d\n", a[i]);
  }
  printf("\n");
  return 0;
}
