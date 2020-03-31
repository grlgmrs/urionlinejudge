#include<stdio.h>

void main() {
  float a, sum=0, count=0;
  
  while(scanf("%f", &a) == 1 && count < 2) {
    if(a < 0 || a > 10) printf("nota invalida\n");
    else {
      sum +=a;
      count++;
    }
  }

  printf("media = %.2f\n", sum/2.0);
}