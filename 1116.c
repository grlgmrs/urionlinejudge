#include<stdio.h>

void main() {
  int n, a, b;

  scanf("%d", &n);
  while(scanf("%d %d", &a, &b) == 2 && n--) {
    if(b == 0) printf("divisao impossivel\n");
    else {
      printf("%.1f\n", (float)a/b);
    }
  }
}