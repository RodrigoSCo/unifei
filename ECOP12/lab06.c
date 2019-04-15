#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

#define TAM_EVENTO 60

typedef enum {false, true} bool; //Apenas para ANSI C

typedef struct no {
    char evento[TAM_EVENTO];
    int data;
    struct no *prox;
} noEvento;


noEvento *prim = NULL;
noEvento *ult = NULL;

bool insereEvento(char evento[], int data){
  noEvento *aux = NULL;
  noEvento *atual = prim;
  noEvento *novo;

  //aloca o novo no na memoria
  novo=(noEvento *) malloc(
  sizeof(noEvento));
  //se a lista esta vazia
   if(prim == NULL){
     prim = novo;
     ult = novo;
   strcpy(novo->evento,evento);
   novo->data = data;
   novo->prox = novo;
   }//end if
   else{
  //encontra a posicao de insercao e seu anterior
   while(atual->data < data){
   aux = atual;
   atual = atual->prox;

   //se voltou para o primeiro
   if(atual == prim){
   break;
   }//end if
   }//end while
     //inserindo na primeira posicao da lista
   if(aux == NULL){
   prim = novo;
   ult->prox = prim;
   }//end if
   else{ //inserindo em qualquer posicao da lista
   aux->prox = novo;
   }//end else
     //atualiza dataes para o novo no
   strcpy(novo->evento,evento);
   novo->data = data;
   novo->prox = atual;

   if(atual == prim){//atualizando a ultima posicao
   ult = novo;
   }//end if
   }//end else

  return true;
}//end insereListaDinCircSimpEnc
int data_int(char data[10]){
     int dataN,dia,mes,ano;
     char x;
     ano = (data[8]-48)*10+(data[9])-48;
     mes = (data[3]-48)*10+(data[4])-48;
     dia = (data[0]-48)*10+(data[1])-48;
     dataN = ano*366+mes*31+dia;
     return dataN;

}
void inicializaEventos(){
	char data[][12] ={
		"28/09/2019",
		"29/09/2019",
		"30/09/2019",
		"01/10/2019",
		"02/10/2019",
		"03/10/2019",
		"04/10/2019",
		"05/10/2019",
		"06/10/2019",
		"07/10/2019",
		"08/10/2019",
		"09/10/2019",
		"10/10/2019",
		"11/10/2019",
		"12/10/2019",
		"13/10/2019",
		"14/10/2019",
		"15/10/2019",
		"16/10/2019",
		"17/10/2019"};

	char evento[][TAM_EVENTO]={
		"UFC Fight Night: Usman vs. Ponzinibbio",
		"UFC 224: Nunes vs. Pennington",
		"UFC Fight Night: Barboza vs. Lee",
		"UFC on Fox: Poirier vs. Gaethje",
		"UFC 223: Khabib vs. Iaquinta",
		"UFC Fight Night: Werdum vs. Volkov",
		"UFC 222: Cyborg vs. Kunitskaya",
		"UFC on Fox: Emmett vs. Stephens",
		"UFC Fight Night: Cowboy vs. Medeiros",
		"UFC 221: Romero vs. Rockhold",
		"UFC Fight Night: Machida vs. Anders",
		"UFC on Fox: Jacaré vs. Brunson 2",
		"UFC 220: Miocic vs. Ngannou",
		"UFC Fight Night: Stephens vs. Choi",
		"UFC 219: Cyborg vs. Holm",
		"UFC on Fox: Lawler vs. dos Anjos",
		"UFC Fight Night: Swanson vs. Ortega",
		"UFC 218: Holloway vs. Aldo 2",
		"The Ultimate Fighter: A New World Champion Finale",
		"UFC Fight Night: Bisping vs. Gastelum"};
	int i,x;
	for (i=0;i<20;i++){
		x = data_int(data[i]);
		insereEvento(evento[i],x);
	}
}

void imprimeAgenda(){
  int i = 0,ano,mes,dia;
 noEvento *atual = prim;
 //se a lista nao esta vazia
 if(atual != NULL){
 while(true){
   /*
   ano = (atual->data)/366+2000;
   mes = ((atual->data)%366)/31;
   dia = (((atual->data)%366)%31);
   */

   printf("%d/%d/%d: %s\n",(((atual->data)%366)%31),((atual->data)%366)/31,(atual->data)/366+2000,atual->evento);
   atual = atual->prox;
   i++;
   if((i%5) == 0) //pula linha a cada 5 impressoes
      printf("\n");
   if(atual == prim) //voltou para o primeiro
      break;
 }//end while
 }//end if
 }//end imprimeListaDinCircSimpEnc
bool removeEvento(int data){
   noEvento *aux = NULL;
   noEvento *atual = prim;

   //se a lista nao esta vazia
   if(atual != NULL){
   //encontra a posicao de insercao e seu anterior
   while(atual->data != data){
   aux = atual;
   atual = atual->prox;
   //se voltou para o primeiro
   if(atual == prim){
   break;
   }//end if
   }//end while
   if(atual->data != data){ //nao existe o dataento
   return false;
   }//end if
   else{
   if(atual == prim){ //remocao na primeira posicao da lista
   prim = atual->prox;
   ult->prox = prim;
   free(atual); //eliminando da memoria
   }//end if
   else{
   //remocao em qualquer posicao da lista
   aux->prox = atual->prox;
   if(atual == ult){ //remocao na ultima posicao
   ult = aux;
   }//end if
   free(atual); //eliminando da memoria
   }//end else

   return true;
   }//end else
   }//end if
   else{
   return false;
   }//end else
   }//end removeListaDinCircSimpEnc

int main() {
    inicializaEventos();
    int opcao = 1;
    char cv;
    while(opcao != 3) {
        printf("***LISTA DINAMICA CIRCULAR***\n");
        printf("\n Digite uma das opcoes abaixo: \n");
        printf(">> 1 imprime eventos em data crescente\n");
        printf(">> 2 para remover um evento\n");
        printf(">> 3 para sair da agenda\n");
        printf(">> ");
        scanf("%d", &opcao);
        cv = getchar();
        switch(opcao) {
        case 1:
            printf(">> Agenda crescente: \n");
            imprimeAgenda();
            cv = getchar();
            break;
        case 2:
            printf(">> Remocao de um evento: \n");
            printf(">>> Data: dd/mm/aaaa\n");
        		int data, dia, mes, ano;
            scanf("%d/%d/%d", &dia, &mes, &ano);
            data = (ano-2000)*366+mes*31+dia;
            fflush(stdin);
            if (removeEvento(data))
			         printf("Data removida!\n");
		        else
			         printf("Data nao encontrada!\n");
            cv = getchar();
            break;
        case 3:
            printf(">> Saindo da agenda...\n");
            cv = getchar();
            break;
        default:
            printf(">> Opção inválida: %c\n", opcao);
            break;
        }
        system("cls");
    }
    return 0;
}
