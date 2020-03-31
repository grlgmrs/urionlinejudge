#include<stdio.h>

void main() {
  int a, b, k, sum=0;

  while(scanf("%d %d", &a, &b) == 2 && a > 0 && b > 0) {
    if(b > a) {
      k = a;
      a = b;
      b = k;
    }

    for(k=b;k<=a;k++) {
      printf("%d ", k);
      sum+=k;
    }

    printf("Sum=%d\n", sum);
    sum=0;
  }
}