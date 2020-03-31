#include<stdio.h>

void main() {
  int n, k, i, o;
  i = o = 0;

  scanf("%d", &n);

  int arr[n];

  for(k=0;k<n;k++) {
    scanf("%d", &arr[k]);
  }

  for(k=0;k<n;k++) {
    if(arr[k] < 10 || arr[k] > 20)
      o++;
    else
      i++;
  }

  printf("%d in\n%d out\n", i, o);
}