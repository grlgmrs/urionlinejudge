#include<stdio.h>

void main() {
  int a, b;

  while(scanf("%d %d", &a, &b) == 2 && a != b) {
    if(a > b) printf("Decrescente\n");
    else printf("Crescente\n");
  }
}