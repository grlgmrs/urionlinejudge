#include<stdio.h>
#include<string.h>

struct HashLink {
  int val;
  char *key;
};

struct HashLink hashLink[18] = {
  {1, "vertebrado"},
  {2, "invertebrado"},
  {4, "carnivoro"},
  {8, "onivoro"},
  {16, "herbivoro"},
  {32, "hematofago"},
  {64, "ave"},
  {128, "mamifero"},
  {256, "inseto"},
  {512, "anelideo"},
  {69, "aguia"},
  {73, "pomba"},
  {137, "homem"},
  {145, "vaca"},
  {290, "pulga"},
  {274, "lagarta"},
  {546, "sanguessuga"},
  {522, "minhoca"},
};

int find(char *c) {
  int n=0;
  for(n=0; n<18; n++) {
    if(strcmp(c, hashLink[n].key) == 0)
      return hashLink[n].val;
  }
}

char* findById(int id) {
  int n=0;
  for(n=0; n<18; n++) {
    if(id == hashLink[n].val)
      return hashLink[n].key;
  }
}

void main() {
  char g[50];
  int sum=0, k=0;
  for(;k<3;k++) {
    scanf("%s", g);
    sum += find(g);
  }

  printf("%s\n", findById(sum));
}