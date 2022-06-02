#include <stdio.h>
#include <stdlib.h>

// Escribir un programa que genere un array de 100 elementos con valores aleatorios enteros del 0 al 9. Contar la cantidad de veces que aparece cada d ́ıgito en el array e imprimir una tabla con las frecuencias.

int main(int argc, char  *argv[]) {
 int a = atoi(argv[1]);
 int array[100];
 for (int i = 0; i < 100; i++) {
   array[i] = rand() % 10;
   printf("%d ", array[i]);
 }
 printf("\n");
  return 0;
}
