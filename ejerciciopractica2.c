#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char  *argv[]) {
  srand(time(NULL));
  int respuesta;
  int numero = rand () % 101;
  for (int i = 0; i < 5; i++) {
    printf("Ingrese un numero\n");
    scanf("%d ", &respuesta);
    if (respuesta != numero) {
      printf("Esto no es un numero, intentalo denuevo\n");
    }
  }
  return 0;
}
