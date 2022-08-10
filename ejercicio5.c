// ejercicio 5
// contar cantidad de chars en stdin

#include <stdio.h>

int main(void) {
  int c;
  int char_count = 0;
  while ((c = getchar()) != EOF)
  char_count++;
  //printf("Espacio %c: %d\n",' ',' '); // 32
  //printf("Tab %c: %d\n", '\t', )      // 9
  printf("canditdad de chars: %d\n", char_count);
  return 0;
}




//putchar(c);
