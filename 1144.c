#include<stdio.h>
#include<math.h>

void main() {
  int n, k, i, l=1;

  scanf("%d", &n);

  for(k=1; k<=n*2;k){
    for(i=0;i<2;i++,k++) {
      if(k%2==0)
        printf("%d %.0lf %.0lf\n", l, pow(l, 2)+1, pow(l, 3)+1);
      else
        printf("%d %.0lf %.0lf\n", l, pow(l, 2), pow(l, 3));
    }
    l++;
  }
}