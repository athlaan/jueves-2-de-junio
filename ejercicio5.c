#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char  *argv[]) {
  int n = atoi(argv[1]);
  int m = atoi(argv[2]);
  int max = INT_MIN;
  int min = INT_MAX;
  double sum = 0.0;
  int array[n];
  for (int i = 0; i < n; i++){
    array[i] = rand() % m;
    if (array[i] > max) max = array[i];
    if (array[i] < min) min = array[i];
      sum += array[i];
    }
  for (int i = 0; i < n; i++)
    printf("%d ", array[i]);
    printf("\n");
     double prom = sum/n;
     printf("%d %d %.2f\n", max, min, prom);
  return 0;
}
