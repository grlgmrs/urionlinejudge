#include<stdio.h>

void main () {
  int x, count=2;
  float n, sum=0.0;

  while(count && scanf("%f", &n) == 1) {
    if(n < 0.0 || n > 10.0) printf("nota invalida\n");
    else {
      count--;
      sum+=n;
      if(count<=0) {
        printf("media = %.2f\n", sum/2);
        while(x != 1 && x != 2) {
          printf("novo calculo (1-sim 2-nao)\n");
          scanf("%d", &x);
          if(x==1) {
            count=2;
            sum=0;
          }
        }
        x=0;
      }
    }
  }
}