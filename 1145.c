#include<stdio.h>

void main() {
  int a, b, k, i;

  scanf("%d %d", &a, &b);

  for(k=0; k<b;) {
    for(i=0; i<a; i++) {
      if((k+1)%a==0) printf("%d", k++ + 1);
      else printf("%d ", k++ + 1);
  
    }
    printf("\n");
  }
}