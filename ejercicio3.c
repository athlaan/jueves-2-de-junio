// ejercicio3.
#include <stdio.h>

int main(void) {
  int n;
  int suma = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    int m;
    scanf("%d ", &m);
    suma += m;
  }
  printf("%d", suma);
  //printf("%d\n", n);
  return 0;
}








//char word[100];
// puts("Hola estoy en stdout")
//printf("%s\n", word);
//scanf("%s", word);
