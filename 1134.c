#include<stdio.h>

void main() {
  int t[3] = {0, 0, 0}, _t;

  while(scanf("%d", &_t) == 1 && _t != 4) {
    if(_t!=1 && _t!=2 && _t!=3){}
    else {
      t[_t-1]++;
    } 
  }

  printf("MUITO OBRIGADO\n");
  printf("Alcool: %d\n", t[0]);
  printf("Gasolina: %d\n", t[1]);
  printf("Diesel: %d\n", t[2]);
}