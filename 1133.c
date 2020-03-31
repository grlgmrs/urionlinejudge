#include<stdio.h>

void main() {
  int a, b, k, t;

  scanf("%d %d", &a, &b);

  if(b>a) {
    t=b;
    b=a;
    a=t;
  }

  for(k=b+1; k<a; k++) {
    if(k%5 == 2 || k%5 == 3) printf("%d\n", k);
  }
}