#include<stdio.h>
#include<math.h>

void main() {
  int n, k;

  scanf("%d", &n);

  for(k=1; k<=n; k++)
    printf("%d %.0lf %.0lf\n", k, pow(k, 2), pow(k, 3));
}