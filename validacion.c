#include <stdio.h>

int main(int argc, char const *argv[]) {
  int numerito = 0;
  int r;
  do {
    printf("Dame numerito\n");
  } while(scanf("%d", &numerito) != 1);

  printf("Tu numerito es %d\n", numerito);
  return 0;
}
