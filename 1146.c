#include<stdio.h>

void main() {
  int x, k;

  while(scanf("%d", &x) == 1 && x != 0) {
    for(k=1; k<=x; k++) {
      printf("%d", k);

      if(k!=x) printf(" ");
    }
    printf("\n");
  }
}