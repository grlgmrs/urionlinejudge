#include <stdio.h>

void main() {
  int n, k, f=0, lf=1, nf=0;
  scanf("%d", &n);

  for(k=0; k<n; k++) {
    printf("%d", nf);
    nf = f + lf;
    lf = f;
    f = nf;


    if(k+1==n) printf("\n");
    else printf(" ");
  }
}