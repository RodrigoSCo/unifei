#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct no{
 int face1;
 int face2;
 struct no* prox;
} noPeca;
typedef enum{true,false} bool;

noPeca* priJog1 = NULL;
noPeca* priJog2 = NULL;
noPeca* priMesa = NULL;


int inicializa(){
    noPeca *aux;
    int i,j,c1=0,c2=0,sor;
    srand(time(NULL));
    for(i=0;i<7;i++){// face1
        for(j=i;j<7;j++){// face2
            aux=(noPeca*)malloc(sizeof(noPeca));
            aux->face1=i;
            aux->face2=j;
            aux->prox=NULL;
            if(c1==14){
                sor=1;
            }else{
                if(c2==14){
                    sor=0;
                }else{
                    sor=rand()%2;
                }
             }
             if(i==6&&j==6){
                priMesa=aux;
             }else{
                if(sor==0){
                    aux->prox=priJog1;
                    priJog1=aux;
                    c1++;
                }else{
                    aux->prox=priJog2;
                    priJog2=aux;
                    c2++;
                    }
                }
        }//for j
    }//for i
    if(c1==14){
        return 0;
    }else{
        return 1;
        }
}//fim inicializa

void imprime(noPeca *atual){
    while(atual!=NULL){
        printf("[%d:%d] ", atual->face1,atual->face2);
        atual=atual->prox;
    }
    printf("\n");

}

void insereInicioMesa(noPeca *novo){
    novo->prox=priMesa;
    priMesa=novo;
}

void insereFimMesa(noPeca *fim){
  noPeca *mesa = NULL;
  noPeca *ant = NULL;

  mesa = priMesa;
  while (mesa != NULL){
    ant = mesa;
    mesa = mesa->prox;
  }
  ant->prox = fim;
  fim->prox = NULL;
}

noPeca *removeJogador1(int face){
  noPeca *aux = NULL;
  noPeca *atu = NULL;
  noPeca *ant = NULL;
  bool Controle = false;

  atu = priJog1;
  while (atu->prox != NULL && Controle == false){
    if (atu->face1 == face || atu->face2 == face) Controle = true;
    else{
      ant = atu;
      atu = atu->prox;
    }
  }
  if (Controle == false) return NULL;
  else{
    if (ant != NULL){
      aux = atu->prox;
      ant->prox = aux;
      atu->prox = NULL;

    }else priJog1 = atu->prox;
  }
  return atu;
}

noPeca *removeJogador2(int face){
  noPeca *aux = NULL;
  noPeca *atu = NULL;
  noPeca *ant = NULL;
  bool Controle = false;

  atu = priJog2;
  while (atu->prox != NULL && Controle == false){
    if (atu->face1 == face || atu->face2 == face) Controle = true;
    else{
      ant = atu;
      atu = atu->prox;
    }
  }
  if (Controle == false){
    return NULL;
  }
  else{
    if (ant != NULL){
      aux = atu->prox;
      ant->prox = aux;
      atu->prox = NULL;
    }else priJog2 = atu->prox;
  }
  return atu;
}

void freeall(){
  noPeca *ant, *aux;

  ant = NULL;
  aux = priJog1;
  while (aux != NULL){
    ant = aux;
    aux = aux->prox;
    if (ant != NULL) free(ant);
    if (aux->prox == NULL) free(aux);
  }
  aux = priJog2;
  while (aux != NULL){
    ant = aux;
    aux = aux->prox;
    if (ant != NULL) free(ant);
    if (aux->prox == NULL) free(aux);
  }
  aux = priMesa;
  while (aux != NULL){
    ant = aux;
    aux = aux->prox;
    if (ant != NULL) free(ant);
    if (aux->prox == NULL) free(aux);
  }
}

int main() {
 int ini = 6, fim = 6;
 int jogador = inicializa();
 noPeca * aux;
 char c = '0';
 while ((priJog1 != NULL) && (priJog2 != NULL)&& (c=='0')) {
     printf("jog1=");
     imprime(priJog1);
     printf("jog2=");
     imprime(priJog2);
     printf("mesa=");
     imprime(priMesa);
     getchar(c);
     if (jogador == 0) {
        aux = removeJogador1(ini);
        if (aux != NULL) {
            insereInicioMesa(aux);
            if (aux->face1 == ini) {
                ini = aux->face2;
                } else {
                    ini = aux->face1;
                }
        } else {
         aux = removeJogador1(fim);
         if (aux != NULL) {
             insereInicioMesa(aux);
             if (aux->face1 == fim) {
                fim = aux->face2;
             } else {
                fim = aux->face1;
             }
         }
        }
        jogador = 1;
     } else {
         aux = removeJogador2(ini);
         if (aux != NULL) {
             insereInicioMesa(aux);
             if (aux->face1 == ini) {
                ini = aux->face2;
             } else {
                ini = aux->face1;
             }
         } else {
             aux = removeJogador2(fim);
             if (aux != NULL) {
                    insereInicioMesa(aux);
                if (aux->face1 == fim) {
                    fim = aux->face2;
                } else {
                    fim = aux->face1;
                }
             }
         }
         jogador = 0;
     }
 }
 freeall();
 return 0;
}//main
