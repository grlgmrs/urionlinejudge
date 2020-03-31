#include<stdio.h>

void main() {
  int x, z, sum=0, count=0;

  scanf("%d", &x);

  while(scanf("%d", &z) == 1 && z <= x);
  
  for(;sum<=z;count++)
    sum+=x+count;

  printf("%d\n", count);
}