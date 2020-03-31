#include<stdio.h>

void main() {
  int a, n, k, sum=0;
  scanf("%d", &a);

  while(scanf("%d", &n) == 1 && n <= 0);

  for(k=0; k<n; k++) {
    sum += a+k;
  }

  printf("%d\n", sum);
}