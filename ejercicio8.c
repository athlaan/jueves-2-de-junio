#include <stdio.h>
#include <stdlib.h>

int main(int argc, char  *argv[]) {
  int a [] = {1,2,3,4,5,6};
  int N = 6;

  for (int i = N-1; i >= 0; i--) {
  printf("%d\n", a[i]);
  }
  printf("\n");
  return 0;
}
