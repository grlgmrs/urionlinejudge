#include<stdio.h>

void main() {
  double s, k;

  for(k=1;k<=100;k++) {
    s += 1/k;
  }

  printf("%.2lf\n", s);
}