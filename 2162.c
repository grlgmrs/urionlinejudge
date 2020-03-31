#include<stdio.h>

void main() {
  int n, k, flag = 1, nextMustBeGreater = 2;
  
  scanf("%d", &n);

  int h[n];

  for(k=0;k<n;k++) {
    scanf("%d", &h[k]);
  }

  if(h[0] >= h[1]) nextMustBeGreater = 1;
  else if(h[0] < h[1]) nextMustBeGreater = 0;

  for(k=1;k<n;k++) {
    if(
      (nextMustBeGreater == 1 && h[k-1] <= h[k]) ||
      (nextMustBeGreater == 0 && h[k-1] >= h[k])
    ) {
      flag = 0;
      break;
    }

    if(nextMustBeGreater == 1) nextMustBeGreater = 0;
    else if(nextMustBeGreater == 0) nextMustBeGreater = 1;
  }

  printf("%d\n", flag);
}