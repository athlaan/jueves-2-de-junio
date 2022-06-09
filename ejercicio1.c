//Escribir un programa que declare un array de tipo int que almacene los primeros diez n ́umeros naturales.Imprimir el array un elemento por linea.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int a [10];
  for (int i = 0; i < 10; i++) {
   a[i] = i;
   printf("%d\n", a[i]);
  }
  printf("\n");
  return 0;
}
