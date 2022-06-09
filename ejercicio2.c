// Escribir un programa que haga lo mismo que el ejercicio anterior pero para los primeros números naturales. El usuario ingresa n como argumento de línea de comandos.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char  *argv[]) {
  int n = atoi(argv[1]);
  int a[n];

  for (int i = 0; i < n; i++) {
    a[i] = i;
    printf("%d\n", a[i]);
  }
  printf("\n");
  return 0;
}
