#include <stdio.h>
#include <stdlib.h>
// scanf lee entrada estandar
int main(int argc, char const *argv[]) {
  int numerito;
  do {
    scanf("%d", &numerito);
    printf("%d\n", numerito + 10);
  } while(numerito != EOF);
  return 0;
}
