#include<stdio.h>

void main() {
  int a;
  while(scanf("%d", &a) == 1 && a != 2002)
    printf("Senha Invalida\n");
  printf("Acesso Permitido\n");
}