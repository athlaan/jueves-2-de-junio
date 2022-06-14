#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// strcmp es abrev de string compare
// devuelve 0 si lo dos str son iguales
int main(int argc, char  *argv[]) {
  char *palabra[] = {
    "albarez",         // 0
    "farfan",         // 1
    "grassi",        // 2
    "cavalcanti",   // 3
    "lesta"        // 4
  };
  bool nada = true;
  for (int i = 0; i < 5; i++) {
    int j = 1;
    while(j < ) {
      if (busqueda[j] != palabra[i][j]) break;
      j++;
    }
    if (busqueda[j] == 0 && palabra[i][j] == 0) {
      printf("%d\n", i);
      return 0;
    }
  }
  printf("-1\n");
  return 1;
}
