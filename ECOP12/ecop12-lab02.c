#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
# define TAM_NOME 50
# define NUM_ALUNOS 71
typedef enum{false, true} bool;

typedef struct{
int matricula;
char nome[TAM_NOME];
int prox;
} noAluno;

noAluno listaAlunos[NUM_ALUNOS];

int prim = -1; //primeira posicao na lista
int dispo = 0; //proxima posicao disponivel na lista

void inicializaListaAlunos(){
  int i;
  for(i=0; i< NUM_ALUNOS; i++){
  listaAlunos[i].prox = i+1;
  }//end for
  listaAlunos[i].prox = -1;
}

void insereListaAluno(char x[], int mat){
  strcpy(listaAlunos[dispo].nome,x);
  listaAlunos[dispo].matricula = mat;
  dispo++;
}
void imprimeDadosAluno(int x){
  printf("Matricula: %d \n", listaAlunos[x].matricula);
  printf("Nome: %s \n", listaAlunos[x].nome);
}
void imprimeLista(){
  int i = 0;
  int x = prim;
    while (i<NUM_ALUNOS) {
      imprimeDadosAluno(x);
      x=listaAlunos[x].prox;
      i++;
    }
}
int pesquisaAluno(int m){
  int x = prim;
    while(m!=listaAlunos[x].matricula){
      x=listaAlunos[x].prox;
    }
  return x;
}
void main(){
  int i;
          char matrizNomes[][TAM_NOME] = {
              "Jayme Jose dos Santos Neto",
              "Edson Beltrane Junior",
              "Romeu Joaquim Garc",
              "Bruno Andrew Mioni",
              "Enry Lucas de C. Gonçalves",
              "Guilherme Henrique A. Ribeiro",
              "Guilherme Malaquias Bortoletto",
              "Tulio Passos Lopes",
              "Tercio Naoki Sato",
              "Ivan Lacerda de Rezende",
              "Diego Silva Beker dos Reis",
              "Nicolas Cavalli R. da Silva",
              "Marina de Souza Balestrassi",
              "Eduardo Faria de Toledo Moraes",
              "Otto Ferreira dos Santos",
              "Francisco Felipe Gomes Sousa",
              "Maria Helena Braga Barnabe",
              "Gustavo Hideki Hirata Tani",
              "Ulysses Caetano Braga",
              "Rafael Cabral Camilo da Silva",
              "Leonardo Duarte Bonafe",
              "Camilo Carneiro Silva",
              "Danilo Lopes Barbosa",
              "Guilherme Marques Netto",
              "Gabriel Lopes dos Santos",
              "Gabriel Poggio Soneghet",
              "Wendel Augusto Cherchiglia",
              "Andre Lars da Cunha",
              "Pedro Palhari Santos",
              "Bianca Cabral C. C. Branco",
              "Heitor Camacho Pinto Santos",
              "Rafaella Silva Monti Souza",
              "Carolina Vasques Moreira",
              "Joao Pedro Pascuini Munhoz",
              "Pedro Felipe Dominguite",
              "Victor Luiz Brandao",
              "Murilo Richard Santos",
              "Andre Luiz de Oliveira Daleffi",
              "Paulo Eduardo Paes Salomon",
              "Lucas Gutierrez Villas Boas",
              "Lucas Oboli Damalio",
              "Lucas Barros Amaral",
              "Guilherme Pinheiro dos Santos",
              "Giovane Carvalho Silverio",
              "Ezequiel Victor da Silva",
              "Misael Cezar Gomes de Souza",
              "Hugo Sillman da Cunha Carvalho",
              "Daniel Maltoni Damasio",
              "Geowana Marcella Siqueira",
              "Rafael Camargos Souza",
              "Ana Carolina de Campos",
              "Alysson Carvalho Ribeiro",
              "Marcos Vinicius Lopes Cortasso",
              "Juliana Figueiredo de Andrade",
              "Rafael Fernando Tressoldi Yano",
              "Alex Mariano Majeau",
              "Vitor Nishino",
              "Jonas Cauan de Oliveira",
              "Guilherme Bernardi Brocheta",
              "Hatos Albert Barbosa",
              "Victor Ranzani Tiseo",
              "Eduardo de Souza",
              "Flavio Vanoni Carvalho Junior",
              "Caio Vitor Gobira Damasceno",
              "Alvaro Antonio dos Reis Guerra",
              "Ana Carolina Malveira Ferreira",
              "Matheus H. B. Santos",
              "Felipe Silva de Paula",
              "Pedro Paulo de Freitas Junior",
              "Lincoln Faria G. F. Filho",
              "Lucas Alves Rosas da Costa"
      };

      int vetorMatriculas[NUM_ALUNOS]={
          27051, 28227, 28681, 28881, 29942, 30008, 30076, 30424, 30697, 30704, 31022,
          31116, 31214, 32072, 32114, 32661, 33129, 33166, 33195, 33198, 33211,
          33242, 33248, 33419, 33465, 33469, 33528, 33546, 33547, 33552, 33567,
          33605, 33655, 33698, 33713, 33741, 33864, 33901, 33934, 33938, 34000,
          34018, 34049, 34078, 34091, 34101, 34106, 34157, 34191, 34197, 34199,
          34229, 34261, 34293, 34305, 34324, 34360, 34388, 34435, 34487,  34501,
          34530, 34548, 34971, 35143, 35190, 35214, 35272, 35291, 35298, 35300
          };

       //inicializa o indice do próximo elemento
      inicializaListaAlunos();

      //chama a funcao para inserir todos alunos na lista
      for(i=0;i<NUM_ALUNOS;i++){
          insereListaAluno(matrizNomes[i], vetorMatriculas[i]);
      }

      printf("***** Dados da lista de alunos\n");
      imprimeLista(listaAlunos);
      printf("\n\n");

      printf("***** Pesquisa por um aluno\n");
      printf("Informe o numero de matricula: ");
      int matricula;
      scanf("%d", &matricula);

      int encontrado = pesquisaAluno(matricula);
      imprimeDadosAluno(encontrado);

}
