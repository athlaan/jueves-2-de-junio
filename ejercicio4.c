//Escribir un programa que genere un array de 100 elementos con enteros aleatorios entre 0 y 100. Calcular el promedio de los valores en el array.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char  *argv[]) {
  srand (time(NULL));
  int a[100];
  int suma;
  double prom;

  for (int i = 0; i < 100; i++) {
    a[i] = rand () % 100;
    printf("%d\n", a[i]);
    suma += a[i];
  }
  prom = suma / 100;
  printf("Promedio: %.2f\n", prom);
  return 0;
}
