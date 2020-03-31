#include <stdio.h>

void main() {
  int n, k=0, sum=1;

  scanf("%d", &n);

  for(k=1;k<=n;k++) {
    sum*=k;
  }

  printf("%d\n", sum);
}