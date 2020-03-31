#include<stdio.h>

void main() {
  int a, b, g=1, _i=0, _g=0, _e=0;

  while(g==1) {
    scanf("%d %d", &a, &b);
    if(a > b) _i++;
    else if(a < b) _g++;
    else _e++;

    printf("Novo grenal (1-sim 2-nao)\n");
    scanf("%d", &g);
  }

  printf("%d grenais\n", _i+_g+_e);
  printf("Inter:%d\n", _i);
  printf("Gremio:%d\n", _g);
  printf("Empates:%d\n", _e);
  if(_i > _g) printf("Inter venceu mais\n");
  else if(_g > _i) printf("Gremio venceu mais\n");
  else printf("Nao houve vencedor\n");
}