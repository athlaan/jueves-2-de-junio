#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int res;
  while (1) {
    printf("(1) Tipo de Datos\n");
    printf("(2) Loops y Condicionales\n");
    printf("(3) Arrays\n");
    printf("(4) Input/Output\n");
    printf("(5) Funciones\n");
    printf("(6) Salida\n");
    scanf("%d", &res);
    switch (res) {
      case 1:
      printf("Tu nota de Tipo de Datos es:\n");
      break;

      case 2:
      printf("Tu nota de Loops y Condicionales es:\n");
      break;

      case 3:
      printf("Tu nota de Arrays es:\n");
      break;

      case 4:
      printf("Tu nota de Input/Output es:\n");
      break;

      case 5:
      printf("Tu nota de Funciones es:\n");
      break;

      case 6:
      return 0;

      default:
      printf("No es una opcion valida\n");
    }
  }
}
