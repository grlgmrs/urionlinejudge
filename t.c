#include<stdio.h>
#include<stdlib.h>

int cmp(char *a, char *b) {
  int flag=0, n=0;
  
  while(a[n] != '\0' && b[n] != '\0') {
    printf("a[%d]=%c | b[%d]=%c\n", n, a[n], n, b[n]);
    if(a[n]!=b[n++] || (a[n] == '\0' || b[n] == '\0')) {
      flag = 1;
      break;
    }
  }

  return flag;
}

void main() {
  char *e = malloc(sizeof(char));
  char *e2 = malloc(sizeof(char));
  
  scanf("%s %s", e, e2);

  // printf("\nP1: %s\nP2: %s\n\n", e, e2);

  printf("Diff: %d\n", cmp(e, e2));
}