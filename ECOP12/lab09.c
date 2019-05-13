#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 10

typedef enum bool {false,true} bool;

typedef struct no
{
    char cep[9];
    char uf[3];
    char cidade[31];
    char logradouro[61];
    struct no *esq;
    struct no *dir;
} noCEP; //estrutura dos nos

noCEP *arvBinaria;

int quant;
int i=0;
void inserirNoArvoreBinaria(FILE *arq)
{
    char linha[200];
    char *substring;
    char valor[9];
    noCEP *ant = NULL;
    noCEP *atual;
    noCEP *novo;
    while(i<MAX)
    {
        //aloca o novo na memoria
        novo = (noCEP *) malloc(sizeof(noCEP));
        if(i==0)
        {
            arvBinaria=novo;
            atual=arvBinaria;
        }
        //le a linha completa e preenche os dados no novo cep
        fgets(linha, 200, arq);

        //separa os tokens pelo delimitador \t
        substring = strtok(linha, "\t");

        //obtem o cep
        if(substring != NULL)
        {
            strcpy(novo->cep, substring);
            strcpy(valor,novo->cep);
        }
        substring = strtok(NULL, "\t");

        //obtem a uf
        if(substring != NULL)
            strcpy(novo->uf, substring);

        substring = strtok(NULL, "\t");

        //obtem a cidade
        if(substring != NULL)
            strcpy(novo->cidade, substring);

        substring = strtok(NULL, "\t");

        //obtem o logradouro
        if(substring != NULL)
            strcpy(novo->logradouro, substring);

        //incializa com null os ponteiros esq e dir de novo
        novo->esq = NULL;
        novo->dir = NULL;
        while((atual != NULL) && (strcmp(valor, atual->cep)!=0))
        {
            ant = atual;
            //verifica o lado para descer
            if(strcmp(valor, atual->cep)<0)
            {
                atual = atual->esq;
            }//end if
            else
            {
                atual = atual->dir;
            }//end else
        }//end while
        if(ant == NULL)  //nao existe raiz
        {
            arvBinaria = novo;
        }//end if
        else
        {
            //se nao existe elemento na subarvore
            if(atual == NULL)
            {
                //qual lado deve ser inserido
                if(strcmp(valor,ant->cep) <0 )
                {
                    ant->esq = novo;
                }
                else
                {
                    ant->dir = novo;
                }//end else
            }//end if(atual==NULL)
        }//end else
        i++;
       
    }

    // ----------------- >>> COMPLETE!
    // ----------------- >>> codigo para insercao na arvore
}//end inserirNoArvoreBinaria


void imprimeNoCEP(noCEP *k)
{
    printf("\nCEP: %s       \n", k->cep);
    printf("UF: %s          \n", k->uf);
    printf("Cidade: %s      \n", k->cidade);
    printf("Logradouro: %s  \n", k->logradouro);
}

void imprimePreOrdemCEP(noCEP *n)
{
    if(n != NULL)
    {
        imprimeNoCEP(n);
        imprimePreOrdemCEP(n->esq);
        imprimePreOrdemCEP(n->dir);
    }//end if
}//end imprimePreOrdem

void imprimeEmOrdemCEP(noCEP *n)
{
    if(n != NULL)
    {
        imprimeEmOrdemCEP(n->esq);
        imprimeNoCEP(n);
        imprimeEmOrdemCEP(n->dir);
    }//end if
}//end imprimeemOrdem

void imprimePosOrdemCEP(noCEP *n)
{
    if(n != NULL)
    {
        imprimePosOrdemCEP(n->esq);
        imprimePosOrdemCEP(n->dir);
        imprimeNoCEP(n);
    }//end if
}//end imprimePosOrdem

bool buscarArvoreBinaria(noCEP *a,char x_cep[9])
{
     if(a!=NULL){
        if(strcmp(a->cep,x_cep)==0){ imprimeNoCEP(a); return true;}
        if(strcmp(a->cep,x_cep)>0) buscarArvoreBinaria(a->esq,x_cep);
        else buscarArvoreBinaria(a->dir,x_cep);
     }
	return false;
}
// ----------------- >>> buscarArvoreBinaria

// função principal: já está TODA IMPLEMENTADA
int main(int argc, char *argv[])
{
    FILE *arq;
    int opcaoMenu;
    char cepProcurado[9];
    noCEP *cepEncontrado;

    //inicializa a arvore
    arvBinaria = NULL;

    //o arquivo eh lido e inserido os elementos na arvore
    arq = fopen("baseCep.txt", "r");

    if(!arq)
    {
        printf("O arquivo nao pode ser aberto.\n");
        exit(1);
    }//end if(!arq)

    printf("\nInserindo elementos na arvore... \n");

    //para cada linha do arquivo pe chamada
    //a funcao de insercao na arvore binaria
    inserirNoArvoreBinaria(arq);

    fclose(arq);

    //menu para caminhamento na arvore de ceps
    opcaoMenu = 1;
    while(opcaoMenu != 5)
    {
        quant = 0;

        printf("|Selecione uma das opcoes do menu: |\n");
        printf("|1 - Pre-ordem                |\n");
        printf("|2 - Em-ordem                 |\n");
        printf("|3 - Pos-ordem                |\n");
        printf("|4 - Busca CEP                |\n");
        printf("|5 - Sair                     |\n\n");
        printf(">");

        scanf("%d", &opcaoMenu);
        switch(opcaoMenu)
        {
        case 1:
            printf("Imprime em pre-ordem: \n");
            imprimePreOrdemCEP(arvBinaria);
            printf("\n");
            break;

        case 2:
            printf("Imprime em in-ordem: \n");
            imprimeEmOrdemCEP(arvBinaria);
            printf("\n");
            break;

        case 3:
            printf("Imprime em pos-ordem: \n");
            imprimePosOrdemCEP(arvBinaria);
            printf("\n");
            break;

        case 5:
            printf("Saindo do menu impressoes: ");
            break;
        case 4:
             printf("\n>>> Busca por um cep: \n");
            printf(">> Digite um cep: ");
            scanf("%s", cepProcurado);
            if(buscarArvoreBinaria(arvBinaria,cepProcurado))
                printf("CEP encontrado!!");

            break;
        }//end switch
    }//end while(opcaoMenu != 4)

    // chamada à busca por um cep

    printf("Encerrando o programa...\n");

    free(arvBinaria);

    system("PAUSE");
    return 0;
}//end main
