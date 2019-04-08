#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#define TAM_NOME 70
#define TAM_CODIGO 10
//Booleano para ANSI C
typedef enum {false, true} bool;
//Estrutura
typedef struct no
{
  char produto[TAM_NOME];
  int codigo;
  int quantidade;
  struct no *prox;
  struct no *ant;
} noProduto;
//Itens iniciais e finais da lista
noProduto *prim = NULL;
noProduto *ult = NULL;
//funções a serem implementadas
bool insereProduto(noProduto* n){
      noProduto *aux = NULL;
      noProduto *atual = prim;
      noProduto *novo;
      //aloca o novo no na memoria
      novo=(noProduto*)malloc(sizeof(noProduto));
      //encontra a posicao de insercao e seu anterior
      while((atual != NULL) && (atual->codigo< n->codigo)){
        aux = atual;
        atual = atual->prox;
      }//end while
      //insere na primeira posicao da lista
      if(aux == NULL){
        prim = novo;
      }//end if
      else{
        //insere em qualquer posicao da lista
        aux->prox = novo;
      }//end else
      //insere na ultima posicao da lista
      if(atual == NULL){
        ult = novo;
      }//end if
      else{
        atual->ant = novo;
      }//end else
      //atualiza valores para o novo no
      strcpy(novo->produto,n->produto);
      novo->codigo = n->codigo;
      novo->quantidade = n->quantidade;
      novo->prox = atual;
      novo->ant = aux;
};
void inserirLista(){
    char Bebidas [][TAM_NOME]={
            "GORDONS - LONDON DRY",
            "CALONA - ARTIST SERIES RESERVE PINOT GRIS 2011/13",
            "PINOT NOIR - SIDURI RUSSIAN RIVER 11/12",
            "CACHACA 61",
            "CHATEAU PAVIE DECESSE 2008",
            "JOHNNIE WALKER - RED LABEL",
            "LE CONTRADE - CO.PRO.VI",
            "BACARDI - BLACK",
            "ALVEAR - MEDIUM DRY",
            "JOHNNIE WALKER - RED LABEL",
            "BAROLO - BROVIA CA'MIA 07/08",
            "CHABLIS GRAND CRU VALMUR - DOMAINE CHRISTIAN MOREAU 2012",
            "MISSION HILL - FIVE VINEYARDS SAUVIGNON BLANC 12/13",
            "LIEBFRAUMILCH - KRAEMER",
            "CHATEAU LA MISSION HAUT BRION 2009",
            "TAYLOR FLADGATE - 10 YEAR OLD TAWNY",
            "MALBEC - VINA CHELA RESERVE ORGANIC",
            "CANADIAN CLUB - PREMIUM",
            "LAMB'S - BLACK SHEEP SPICED",
            "CALIFORNIA RED - APOTHIC WINEMAKERS BLEND",
            "CHERRY LIQUEUR - OKANAGAN SPIRITS",
            "VOUVRAY SEC - VINCENT RAIMBAULT BEL AIR 10/11",
            "VIOGNIER - GALIL MOUNTAIN KOSHER",
            "BARON BOHEMIAN TMAVY LEZAK",
            "STELLA ARTOIS CAN",
            "KAMORA - COFFEE",
            "PELLER ESTATES - PROPRIETORS RESERVE SAUVIGNON BLANC",
            "PACIFIC WESTERN - CARIBOO HONEY LAGER CAN",
            "OLD PULTENEY - 17 YEAR OLD",
            "MERLOT - THE LITTLE PENGUIN",
            "STANLEY PARK - BELGIAN STYLE PILSNER",
            "COURVOISIER - L'ESSENCE DE COURVOISIER",
            "RIESLING KABINETT - B RESS SCHLOSS REICHARTSHAUSEN 2009",
            "ZINFANDEL - RAVENSWOOD SONOMA BARRICIA 2012",
            "MERLOT - WOLF BLASS EAGLEHAWK",
            "CARACOLE NOSTRADAMUS BRUNE",
            "CABERNET SAUVIGNON - GRACELAND STELLENBOSCH 2012",
            "FEN JIU - 30 YEAR OLD",
            "TANQUERAY - LONDON DRY",
            "GEKKEIKAN - SAKE",
            "PINOT GRIS - PFAFFENHEIM GRAND CRU STEINERT 08/09",
            "CHATEAU MOUTON ROTHSCHILD 2009",
            "TAYLOR FLADGATE - VINTAGE 1985",
            "CHATEAU GRAND PUY LACOSTE 2009",
            "GRANVILLE ISLAND - WINTER MINGLER",
            "CABERNET SAUVIGNON SHIRAZ - CONO SUR TOCORNAL",
            "PAYS D'OC GRENACHE - PAUL MAS",
            "BATARD MONTRACHET - LOUIS LATOUR 2002",
            "SETUBAL - JOSE MARIE DA FONSECA ALBIS",
            "APRICOT BRANDY - BOLS",
            "BOLGHERI - I GREPPI GREPPICANTE 07/08",
            "JULIENAS - HENRY FESSY 2009",
            "MARSANNAY BLANC - CHARLES AUDOIN 10/11",
            "PIERRE PAILLARD - GRAND CRU BRUT MILLESIME 2002" };
    float valores[]={
        24.49,    24.50,    24.51,    24.52,
        24.53,    24.54,    24.55,    24.56,    24.57,
        24.58,    24.59,    24.60,    24.61,    24.62,
        24.63,    24.64,    24.65,    24.66,    24.67,
        24.68,    24.69,    24.70,    24.71,    24.72,
        24.73,    24.74,    24.75,    24.76,    24.77,
        24.78,    24.79,    24.80,    24.81,    24.82,
        24.83,    24.84,    24.85,    24.86,    24.87,
        24.88,    24.89,    24.90,    24.91,    24.92,
        24.93,    24.94,    24.95,    24.96,    24.97,
        24.98,    24.99,    24.100,    24.101,    24.102

    };
    int codigos []={
          1040,    104679,    106476,    107029,    109082,    1099,    110460,
        112433,    112789,    112896,    114504,    116517,    118893,    12005,
        120170,    121749,    124040,    125,    125351,    125617,    126565,
        127019,    127027,    127282,    129098,    129411,    131813,    131854,
        132480,    135244,    135962,    136721,    137521,    139139,    140095,
        14050,    140970,    143172,    1453,    145433,    147280,    148734,
        149377,    150524,    154401,    154617,    154757,    154849,    156059,
        15628,    156372,    157446,    16170,    163071

    };
    noProduto *x;
    x=(noProduto*)malloc(sizeof(noProduto));
    for(int i=0;i<54;i++){
      x->quantidade = valores[i];
      x->codigo = codigos[i];
      strcpy(x->produto,Bebidas[i]);
        insereProduto(x);
    }
};
void imprimeUp(){
  noProduto* atual = prim;
  while(atual != NULL){
    printf("Código: %i \n", atual->codigo);
    printf("Produto: %s \n", atual->produto);
    printf("Quantidade: %i \n", atual->quantidade);
    atual = atual->prox;
  }
};
void imprimeDown(){
  noProduto* atual = ult;
  while(atual != NULL){
    printf("Código: %i \n", atual->codigo);
    printf("Produto: %s \n", atual->produto);
    printf("Quantidade: %i \n", atual->quantidade);
    atual = atual->ant;
  }
};
void removeProduto(char produto[]){
  noProduto *atual, *anterior;
	atual = prim;
	anterior = prim;
	while(atual != NULL && (strcmp(atual->produto,produto)<0 )) {
    	anterior = atual;
    	atual = atual->prox;
	}
	if(atual!=NULL){
    	printf("--- removndo Produto %s...\n", atual->produto);
    	if(atual == prim){
        	//remocao na primeira posicao da lista
        	prim = (prim)->prox;
    	}else{
        	//remocao em qualquer posicao da lista
        	anterior->prox = atual->prox;
    	}
    	free(atual); //eliminando da memoria
};
}
//rotina principal
int main()
{
  //Para inserir um novo
  noProduto *novo;
  //Para localizar o produto
  char codigo[TAM_CODIGO];

  //Insere produtos do guia na lista
  inserirLista();
  char cv;
  //Opções do menu
  int opcao = 1;
    while(opcao != 5)
    {
     //Gerando menu
         printf("\n> Digite uma das opcoes abaixo: \n");
         printf(">> 1 para inserir um produto\n");
         printf(">> 2 para remover um produto\n");
         printf(">> 3 para imprimir crescente\n");
         printf(">> 4 para imprimir decrescente\n");
         printf(">> 5 para sair\n");

         printf(">> ");
         scanf("%d", &opcao);
         cv = getchar();
         switch(opcao)
         {
             case 1: //Inserindo novo produto
              printf(">> Insercao de novo Produto: \n");
              novo = (noProduto *) malloc(sizeof(noProduto));
              novo->ant = NULL;
              novo->prox = NULL;
              printf(">>> Produto: ");
              scanf("%[^\n]s", (novo->produto));
              setbuf(stdin, NULL);
              printf(">>> Codigo: ");
              scanf("%i", (&novo->codigo));
              setbuf(stdin, NULL);
              printf(">>> Quantidade: ");
              scanf("%i", (&novo->quantidade));

              bool inserido = insereProduto(novo);
              if(!inserido)
               printf(">>>> Produto já existente!!\n");
              else
               printf(">>>> Produto adicionado com sucesso!!\n");
              cv = getchar();
              break;
             case 2: //Removendo Produto pelo nome
              printf(">> Remocao de um produto: \n");
              printf(">>> Produto: \n");
              scanf("%s", codigo);
              removeProduto(codigo);
              cv = getchar();
              break;
             case 3: //Imprimindo todos os Produtos
              printf(">> Produtos Crescente:\n");
              imprimeUp();
              cv = getchar();
              break;
             case 4: //Imprimindo todos os Produtos
              printf(">> Produtos Decrescente:\n");
              imprimeDown();
              cv = getchar();
              break;
             case 5: //Sair da agenda
              printf(">> Saindo do programa…\n");
              cv = getchar();
          }
      }
}
