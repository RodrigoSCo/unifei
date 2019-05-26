#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_ALUNOS 15
#define TAM_NOME 30

typedef enum{false, true} bool;

// Estrutura NoAluno
typedef struct no{
   char nome[30];
   int matricula;
   int fatBal;
   struct no* esq;
   struct no* dir;
} noAluno;

void rotacionarParaDireita(noAluno** atual);
void rotacionarParaEsquerda(noAluno** atual);
int altura(noAluno* atual);
int fatorBalanceamento(noAluno* atual);
void inserirNoArvoreAVL(noAluno** noAtual , noAluno* novoNoAluno);
void inserirNoArvoreBinaria(noAluno** noAtual , noAluno* novoNoAluno);
noAluno* buscarMatricula(noAluno* raiz, int mat_chave);
void imprimeNoAluno(noAluno* no);
void libera_arvore(noAluno* atual);
void em_ordem(noAluno *raiz);
void mostra(noAluno *atual, int n);
void mostraFatBal(noAluno *atual, int n);
void imprimeArvores(noAluno *arvAVL, noAluno *arvBinaria);

int main()
{

	char opcao = '0';
	int i, mat;
	noAluno *arvBinaria = NULL;
	noAluno *arvAVL = NULL;
	noAluno *novo, *novoAvl;

	char listaNomes[NUM_ALUNOS][TAM_NOME] = {"Adrielle", "Anderson", "Andressa", "Antonio", "Arno", "Augusto", "Barbara", "Bruno", "Calebe", "Cesar", "Cleiton", "Cynthia", "Daniel", "Daniel", "David"};

	int listaMatriculas[NUM_ALUNOS]={1000, 2000, 3000, 4000, 5000, 6000, 6999, 6500, 6400, 6200, 7000, 8000, 8500, 8600, 9000};

	// para cada elemento do vetor listaNomes
	for(i = 0; i < NUM_ALUNOS; i++)
	{
    	printf("\n\n\nTECLE ENTER PARA INSERIR O PROXIMO ELEMENTO...");
    	getchar();
      printf("piu");
    	// C) alocado um ponteiro para cada noAluno
    	novo = (noAluno*) malloc(sizeof(noAluno));
    	novoAvl = (noAluno*) malloc(sizeof(noAluno));

    	// são preenchidos o nome e a matrícula
    	strcpy(novo->nome, listaNomes[i]);
    	novo->matricula = listaMatriculas[i];
    	novo->dir = NULL;
    	novo->esq = NULL;

    	// são preenchidos o nome e a matrícula do no da AVL
    	strcpy(novoAvl->nome, listaNomes[i]);
    	novoAvl->matricula = listaMatriculas[i];
    	novoAvl->dir = NULL;
    	novoAvl->esq = NULL;

    	// C) chamado o método de inserção na árvore binária e árvore AVL

    	inserirNoArvoreBinaria(&arvBinaria, novo);
    	inserirNoArvoreAVL(&arvAVL, novoAvl);

    	system("clear");
    	imprimeArvores(arvAVL, arvBinaria);
	}


	do{
    	getchar();
    	system("clear\n");
    	printf("Menu:\n");
    	printf("1 - Buscar um Aluno na ARVORE BINARIA SIMPLES\n");
    	printf("2 - Buscar um Aluno na  ARVORE AVL\n");
    	printf("3 - Mostrar Fator de Balancemento dos nos da Arvore AVL\n");
    	printf("0 - Sair\n");
    	opcao = getchar();

    	system("cls");

    	switch(opcao){
        	case '1':
            	imprimeArvores(arvAVL, arvBinaria);
            	printf("\n------------------------------------------\n");
            	printf("BUSCA ARVORE SIMPLES: Informe um Numero de matricula: ");
            	scanf("%d", &mat);

            	printf("\nUtilizando a arvore binaria simples:\n");
            	printf("------------------------------------------\n");
            	noAluno* resp = buscarMatricula(arvBinaria, mat);

            	if(resp == NULL)
                	printf("Aluno nao encontrado\n\n");
            	else
            	{
                	printf("Aluno Encontrado:\n\n");
                	imprimeNoAluno(resp);
            	}
           	 break;
        	case '2':
            	imprimeArvores(arvAVL, arvBinaria);
            	printf("\n------------------------------------------\n");
            	printf("BUSCA ARVORE AVL: Informe um Numero de matricula: ");
            	scanf("%d", &mat);

            	printf("\nUtilizando a arvore AVL:\n");
            	printf("------------------------------------------\n");
            	resp = buscarMatricula(arvAVL, mat);

            	if(resp == NULL)
                	printf("Aluno nao encontrado\n\n");
            	else
            	{
                	printf("Aluno Encontrado:\n\n");
                	imprimeNoAluno(resp);
            	}
            	break;
        	case '3':
            	printf("\n\nFator de balanceamento dos nos da arvore AVL:\n");
            	printf("------------------------------------------\n");
            	mostraFatBal(arvAVL, 0);
            	break;
        	default:
            	if(opcao != '0') printf("\nOpcao Invalida!!!\n");
            	break;
    	}
	}while(opcao != '0');

	// Liberando Memória
	printf("Encerrando o programa...\n");
	libera_arvore(arvBinaria);
	libera_arvore(arvAVL);

	return 0;
}

void rotacionarParaEsquerda(noAluno** no)
{  noAluno *atual;
   atual = (*no)->dir;
   (*no)->dir = atual->esq;
   atual->esq = (*no);
   (*no)->fatBal = fatorBalanceamento(*no);
   atual = (*no)->esq;
}

void rotacionarParaDireita(noAluno** no)
{  noAluno *atual;
   atual = (*no)->esq;
   (*no)->esq = atual->dir;
   atual->dir = (*no);
   (*no)->fatBal = fatorBalanceamento(*no);
   atual = (*no)->dir;
}

// Busca iterativa na Árvore binária (AVL ou não)
noAluno* buscarMatricula(noAluno* raiz, int mat_chave){
  noAluno* aux = raiz;
  if(aux!=NULL){
    if(mat_chave==aux->matricula){imprimeNoAluno(aux); return aux;}
    if(aux->matricula>mat_chave) buscarMatricula(aux->esq,mat_chave);
    else  buscarMatricula(aux->dir,mat_chave);
  }
}

int altura(noAluno* atual){
	int d=0,e=0;
	if(!atual) return 0;
	if(!atual->esq && !atual->dir) return 0;
	if(atual->esq) d = 1+altura(atual->esq);
	if(atual->dir) e = 1+altura(atual->dir);
	if(e>d) return e;
	else return d;
}

int fatorBalanceamento(noAluno* atual){
	int lh,rh;

	if(atual == NULL)
    	return(0);

	if(atual->esq == NULL)
    	lh = 0;
	else
    	lh = 1 + altura(atual->esq);

	if(atual->dir == NULL)
    	rh = 0;
	else
    	rh = 1 + altura(atual->dir);

	return (rh - lh);
}

// Insercao na árvore AVL
void inserirNoArvoreAVL(noAluno** noAtual , noAluno* novoNoAluno){

	if(*noAtual == NULL)
	{
    	*noAtual = novoNoAluno;
	}
	else
	{
    	if(novoNoAluno->matricula < (*noAtual)->matricula)
    	{
        	inserirNoArvoreAVL(&(*noAtual)->esq, novoNoAluno);

        	if(fatorBalanceamento(*noAtual) == -2)
        	{
            	if(novoNoAluno->matricula < (*noAtual)->esq->matricula)
                    rotacionarParaDireita(noAtual);
            	else
            	{   //rotaC'C#oDupla
                    rotacionarParaEsquerda(&(*noAtual)->esq);
                    rotacionarParaDireita(noAtual);
            	}

        	}
    	}
    	else
    	{
        	inserirNoArvoreAVL(&(*noAtual)->dir, novoNoAluno);

        	if(fatorBalanceamento(*noAtual) == 2)
        	{
            	if(novoNoAluno->matricula > (*noAtual)->dir->matricula)
                    rotacionarParaEsquerda(noAtual);
            	else
            	{   //rotaC'C#oDupla
                    rotacionarParaDireita(&(*noAtual)->dir);
                    rotacionarParaEsquerda(noAtual);
            	}
        	}
    	}
	}

	(*noAtual)->fatBal = fatorBalanceamento(*noAtual);
}

// Insercao na árvore binária simples, desbalanceada
void inserirNoArvoreBinaria(noAluno** noAtual , noAluno* novoNoAluno)
{
	if(*noAtual == NULL)
	{
    	*noAtual = novoNoAluno;
	}
	else
	{
    	// insere na sub-árvore da esquerda ou direita
    	if(novoNoAluno->matricula < (*noAtual)->matricula)
        	inserirNoArvoreBinaria(&(*noAtual)->esq, novoNoAluno);
    	else
        	inserirNoArvoreBinaria(&(*noAtual)->dir, novoNoAluno);
	}
}

// Impressão de dados
void imprimeNoAluno(noAluno* no)
{
	printf("> Nome: %s\n", no->nome);
	printf("> Matricula: %d\n\n", no->matricula);
}

// Liberação de recursos
void libera_arvore(noAluno* atual)
{
	if (atual != NULL)
	{
    	libera_arvore(atual->esq);
    	libera_arvore(atual->dir);
    	free(atual);
	}
}

void em_ordem(noAluno *raiz)
{
	if(raiz!=NULL)
	{
    	em_ordem(raiz->esq);
    	imprimeNoAluno(raiz);
    	printf("\n");
    	em_ordem(raiz->dir);
	}
}

//função que imprime no formato de árvore deitada
void mostra(noAluno *atual, int n){
	if(atual!=NULL){
    	int i;
    	mostra(atual->dir, n+1);
    	for(i = 0; i < n; i++)
        	printf("	");
    	printf("%d\n", atual->matricula);
    	mostra(atual->esq, n+1);
	}
}

//função que imprime no formato de árvore deitada mostrando o fator de balanceamento
void mostraFatBal(noAluno *atual, int n){
	if(atual!=NULL){
    	int i;
    	mostraFatBal(atual->dir, n+1);
  	  for(i = 0; i < n; i++)
        	printf("	");
    	printf("%d", atual->matricula);
    	printf(" %d\n", atual->fatBal);
    	mostraFatBal(atual->esq, n+1);
	}
}

void imprimeArvores(noAluno *arvAVL, noAluno *arvBinaria){
	printf("\n\nAVL  (deitada):");
	printf("(VERDE EH O FATOR DE BALANCEAMENTO)\n");
	printf("------------------------------------------\n");
	mostraFatBal(arvAVL, 0);
	printf("\n\nBINARIA  (deitada):\n");
	printf("------------------------------------------\n");
	mostra(arvBinaria, 0);
}








/*Nota-se que o numero de interações necassarias na arvore AVL é
  significativamente menor pois a ordenação facilita a procura do
  algoritimo resultando em um menor custo de processasmento.*/
