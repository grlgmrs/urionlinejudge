#include<stdio.h>

void main() {
  int num, min, max, temp, total=0;

  while(scanf("%d %d %d", &num, &min, &max) != EOF) {
    total = 0;
    while(num--) {
      scanf("%d", &temp);
      if(temp <= max && temp >= min)
        total++;
    }
    printf("%d\n", total);
  }
}