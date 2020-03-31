#include<stdio.h>

void main() {
  int a, b;

  while(scanf("%d %d", &a, &b) == 2 && a != 0 && b != 0) {
    if(a>0&&b>0) printf("primeiro\n");
    else if(a<0&&b>0) printf("segundo\n");
    else if(a<0&&b<0) printf("terceiro\n");
    else if(a>0&&b<0) printf("quarto\n");
  }
}