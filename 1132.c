#include<stdio.h>

void main() {
  int x, y, t, k, sum=0;

  scanf("%d %d", &x, &y);

  if(y>x) {
    t=x;
    x=y;
    y=t;
  }

  for(k=y; k<=x; k++) {
    if(k%13!=0) sum+=k;
  }

  printf("%d\n", sum);
}