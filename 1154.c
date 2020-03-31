#include <stdio.h>

void main() {
  int i,c=0,sum=0;

  while(scanf("%d", &i) == 1 && i >= 0) {
    sum+=i;
    c++;
  }

  printf("%.2f\n", (float)sum/c);
}