#include <stdio.h>
#include <stdlib.h>

typedef enum{false, true} bool; //Somente ANSI C

typedef struct no{
   struct no* prox;
} noResis; //estrutura dos resistores

noResis *pilha[7]; //pilhas de resistores
//Lista de valores de resistor
int valorResis[7] = {2,3,5,10,20,50,100};

void inicializaPilha(){
  int i;
  while(i<7){
    pilha[i]->prox = NULL;
  }
}
void abastecePilha(int quant, int v){
  noResis *novo;
  int x=0,i=0;
  while(v!=valorResis[x])x++;
  while(i<quant){
   novo=(noResis*)malloc(sizeof(noResis));
   if(pilha[x] == NULL){ //atualiza a ultima posicao
   }//end if
   //atualiza valores para o novo no
   novo->prox = pilha[x];
   pilha[x] = novo; //atualiza o primeiro
   i++;
 }
}
void imprimeTudo(){
  int i = 0,x=0;
 noResis* atual = pilha[x];
 while(x<7){
 while(atual != NULL){
 atual = atual->prox;
 i++;
 }//end while
 printf("%d Unidades de %d ohms",&i,&valorResis[x]);
 printf("\n");
 x++;
}
}
void imprimeSoma(){
  int x=0;
 noResis *atual = pilha[x];
 while(atual != NULL){
 atual = atual->prox;
 }//end while
 printf("No almoxarifado exixtem d resistores, totalizando d ohms\n");

}
bool resisDisponivel(int valor){


}
void rem(int x){
  noResis *aux = pilha[x];
 //atualiza a ultima posicao
 if(pilha[x]->prox == NULL){
 }//end if
 pilha[x] = pilha[x]->prox; //atualiza o primeiro
 free(aux);
}
bool entrega(int valor){
  while(valor!=0){
    if(valor/100>=1){
      rem(6); valor=valor-100;
    }
    if(valor/50>=1){
      rem(5); valor=valor-50;
    }
    if(valor/20>=1){
      rem(4); valor=valor-20;
    }
    if(valor/10>=1){
      rem(3); valor=valor-10;
    }
    if(valor/5>=1){
      rem(2); valor=valor-5;
    }
    if(valor/3>=1){
      rem(1); valor=valor-3;
    }
    if(valor/2>=1){
      rem(0); valor=valor-2;
    }
    if(valor==1)return false;
  }
  if(valor==0) return true;
}


int main(int argc, char ** argv){
  int i=0;
  inicializaPilha();
  abastecePilha(55, 2);
  abastecePilha(42, 3);
  abastecePilha(61, 5);
  abastecePilha(28, 10);
  abastecePilha(35, 20);
  abastecePilha(64, 50);
  abastecePilha(14, 100);

  printf("    Valor Inicial do Almoxarifado   \n");
  printf("====================================\n");
  imprimeTudo();
  imprimeSoma();

  int pedidos[4] = {43,75,123,256};
  for(i=0;i<4;i++){
	  printf("______________________________\n");
	  printf("Pedido de = %d ohms\n",pedidos[i]);
	  printf("Verificando almoxarifado: ");
	  if (entrega(pedidos[i])){
		  printf(" disponível!\n");
		  imprimeTudo();
		  imprimeSoma();
	  }
	  else{
		  printf(" indisponível!\n");
	  }
  }

  printf("     Valor Final do Almoxarifado   \n");
  printf("====================================\n");
  imprimeTudo();
  imprimeSoma();

  return 0;
}
