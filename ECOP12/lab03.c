#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
# define TAM_NOME 60
# define NUM 71
typedef enum{false, true} bool;

typedef struct no{
int codigo;
char nome[TAM_NOME];
float valor;
struct no * prox;
} noBebida;

noBebida listaBebidas[NUM];


noBebida *prim = NULL;

// Insere aluno na lista
bool insereLista(int codigo, char nome[60], float valor)
{
	//aloca memoria para um novo aluno
	noBebida *item = (noBebida *) malloc(sizeof(noBebida));
	noBebida *ant = NULL;
	noBebida *atual = prim;
	//encontra a posicao de insercao e quem eh seu anterior
	while((atual!=NULL) && (strcmp(atual->nome,nome)<0)){
    	ant = atual;
    	atual = atual->prox;
	}
	//se estiver inserindo na primeira posicao
	if(ant == NULL){
    	prim = item;
	}
	else{ //se estiver inserindo em qualquer outra posicao
    		ant->prox = item;
	}
	//atualizando valores para o novo nó
	item->codigo=codigo;
	strcpy(item->nome, nome);
  item->valor = valor;
	item->prox=atual;
	return true;
}

// Impressão de dados
void imprimeLista(){
	noBebida* atual = prim;
	while(atual != NULL){
    printf("Código: %d \n", atual->codigo);
    printf("Nome: %s \n", atual->nome);
    printf("Valor:R$ %f \n", atual->valor);
    	atual = atual->prox;
	}
}

// remov um aluno da lista
bool remov(int codigo)
{
	noBebida *atual, *anterior;
	atual = prim;
	anterior = prim;
	while(atual != NULL && (atual->codigo != codigo)){
    	anterior = atual;
    	atual = atual->prox;
	}
	if(atual!=NULL){
    	printf("--- removndo aluno %s...\n", atual->nome);
    	if(atual == prim){
        	//remocao na primeira posicao da lista
        	prim = (prim)->prox;
    	}else{
        	//remocao em qualquer posicao da lista
        	anterior->prox = atual->prox;
    	}
    	free(atual); //eliminando da memoria
    	return true;
	}else{
    		return false;
	}
}




void imprimeMenu(){
	//system("clear");
	printf("1 -  Inserir Bebida na Lista\n");
	printf("2 -  Remover Bebida da Lista\n");
  printf("3 -  Imprimir Lista\n");
	printf("4 -  Sair \n\n");
	printf("Resposta: ");
}

int main (){
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
  for(int i=0;i<54;i++){
      insereLista(codigos[i],Bebidas[i],valores[i]);
  }
  int k =0;
  int c;
  float v;
  char n[60];
  while(k!=4){
      imprimeMenu();
      scanf("%d",&k );
      switch (k) {
        case 1:
        printf("***** Inserir item\n");
        printf("Código:");
        scanf("%d", &c);
        printf("Nome:");
        scanf("%s", n);
        printf("Valor:");
        scanf("%f ", &v);
        insereLista(c,n,v);
          break;
        case 2:
        printf("***** Remover item\n");
        printf("Informe o código da Bebida a ser removida: ");
        int x;
        scanf("%d", &x);
        remov(x);
          break;
        case 3:
        printf("***** Dados da lista de Bebidas\n");
        imprimeLista();
        printf("\n\n");
        system("pause");
          break;
        default:
          break;
      }


}
return 0;
}
