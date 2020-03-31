#include<stdio.h>

void main() {
  int a, c=0;

  scanf("%d", &a);

  for(c=1; c<=a*4; c++) {
    if(c%4==0) printf("PUM\n");
    else printf("%d ", c);
  }
}