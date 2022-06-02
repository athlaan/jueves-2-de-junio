#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[]) {
  srand(time(NULL));
  int n = atoi(argv[1]);
  int traza = 0;
  int d [n] [n];
for (int i = 0; i < n; i++) {
 for (int j = 0; j < n; j++) {
  d [i][j] = rand() % 10;
  printf("%d\t", d [i][j]);
  if (i == j) {
    traza += d [i][j];
  }
 }
  printf("\n");
}
  printf("Traza: %d\n", traza);
  return 0;
}
