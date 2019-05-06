#include <stdio.h>
#include <stdlib.h>
#include "string.h"

typedef enum {false, true} bool;

typedef struct no{
char mod[20];
struct no* prox;
} noAviao;
//ponteiro para primeiro elemento
noAviao *prim = NULL;
noAviao *ult = NULL;
//ponteiro para o ultimo elemento
int listnum(){
  int i=0;
  noAviao *aux = prim;
  while(aux!=NULL){i++;
    aux=aux->prox;
  }
  return i;
}
void add(char m [20]){
  noAviao *novo;
  novo=(noAviao*)malloc(sizeof(noAviao));
  if(prim==NULL){ prim = novo; ult = novo;}
  ult->prox=novo;
  ult=novo;
  strcpy(novo->mod,m);
}
void decolar(){
  noAviao *aux = prim;
  prim=prim->prox;
  free(aux);
}
void printList(){
  noAviao *aux=prim;
  while(aux!=NULL) {printf("%s\n",aux->mod );
  aux=aux->prox;
}
}
int menu(){
  int opcao=0;
  printf("\n Digite uma das opcoes abaixo: \n");
  printf(">> 1-Imprime Fila\n");
  printf(">> 2-Imprime número de aviões na Fila\n");
  printf(">> 3-Adicionar avião na Fila\n");
  printf(">> 4-Decolar primeiro avião da fila\n");
  printf(">> ");
  scanf("%d", &opcao);
  return opcao;
}
void main(){
  int k;
  char modelo[20];
while(k!=5){
  k=menu();
  switch (k) {
    case 1:
      printList();
    break;
    case 2:
      printf("O numero de aviões na fila é %d\n",listnum() );
    break;
    case 3:
      printf("Modelo do avião: \n");
      scanf("%s", &modelo);
      add(modelo);

    break;
    case 4:
    decolar();
    break;
    default:
    break;
  }

}
}
