#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char  *argv[]) {
  srand(time(NULL));
  int nota1 = rand () % 11;
  int nota2 = rand () % 11;
  int nota3 = rand () % 11;
  int nota4 = rand () % 11;
  int nota5 = rand () % 11;
  int salida;
  for (int i = 0; i < 5; i++) {
    printf("(1) Tipo de Datos\n");
    printf("(2) Loops y Condicionales\n");
    printf("(3) Arrays\n");
    printf("(4) Input/Output\n");
    printf("(5) Funciones\n");
    printf("(6) Salida\n");

    int opciones;
    printf("Elegi una opcion :\n");
    scanf("%d", &opciones);
    if (opciones == 1) {
      printf("Tu nota de Tipo de Datos es: %d\n", nota1);
    }else if (opciones == 2) {
      printf("Tu nota de Loops y Condicionales es: %d\n", nota2);
    }else if (opciones == 3) {
      printf("Tu nota de Arrays es: %d\n", nota3);
    }else if (opciones == 4) {
      printf("Tu nota de Input/Output es: %d\n", nota4);
    }else if (opciones == 5) {
      printf("Tu nota de Funciones es: %d\n", nota5);
    }else if (opciones == 6) {
      printf("Adios\n", salida);
      break;
    }
  }
  return 0;
}
