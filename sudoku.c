#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int matriz[4][4];
  int j = 0;
  // llena con randoms los 9
  // y hace suma de las filas
  for (int i = 0; i < 4; i++){
    int sum = 0;
    for (int j = 0; j < 4; j++) {
      if (i != 3 && j != 3) {
      matriz[i][j] = (rand() % 9) + 1;
      sum += matriz[i][j];
    }
     else
      matriz[i][j] = sum;
    }
  }
  // suma de cols
  for (int i = 0; i < 4; i++){
    int sum = 0;
    for (int i = 0; i < 4; i++) {
      if (j != 3)
      sum += matriz[j][i];
      else
      matriz [j][i] = sum;
    }
  }

  // imprimir la matriz
  for (int i = 0; i < 4; i++){
    int sum = 0;
    for (int j = 0; j < 4; j++) {
      printf("%02d", matriz[i][j]);
    }
    printf("%d\n", sum);
  }
  return 0;
}
