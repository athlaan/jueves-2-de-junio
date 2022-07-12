#include <stdio.h>
#include <stdlib.h>
#define MAXLINE 100
int main(int argc, char const *argv[]) {
  //FILE *fp;
  //char *file_name = argv[1];
//  int d, m, y;
//  char line[MAXLINE];
  //fp = fopen(file_name,"r");
//  while (fgets(line, MAXLINE, stdin) != EOF){
//    sscanf(line, "%d/%d/%d", &d, &m, &y);
  }
//  printf("Hoy es %d del %d del año %d\n",d, m, y);
//  int a = 9999;
//  int *ptr_a = &a;
//  int status = scanf("%d", ptr_a);
//  if (status == 0) return 1;
  int c;
  char buf[100];
  int i = 0;
  while ((c = getchar()) != '\n',)
    buf[i++] = c;
    buf[i] = 0;
    int numerito = atoi(buf);
    printf("%s\n", buf);
  return 0;
}
