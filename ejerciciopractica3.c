#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

for (int i = 0; i < 3; i++) {
  char *a;
  int b;
  int c;
  scanf("%s %d %d",&a,&b,&c );
  double promedio = (b+c) / 2;
  if (promedio > 10) {
    promedio = 10;
  }
  printf("%s %d %d %0.2f\n",a,b,c,promedio);
}

  return 0;
}
