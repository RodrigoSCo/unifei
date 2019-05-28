#ifndef JOG_ID
  #define JOG_ID

  #ifndef MAX
    #define MAX 45
  #endif
  #ifndef MAX_NO
    #define MAX_NO 45
  #endif
#include "cartaobjetivo.h"
#include "cartatrem.h"

  #include "cartaobjetivo.h"
  #include "cartatrem.h"

  int Jogadores = 0;

  class Jogador{
  public:
    /* Atributos */
    int trem,objts;
    int maoTrem[9];
    CartaObjetivo maoObj[30];
    int ConquistasGrafo[MAX_NO][MAX_NO]; //adjacencias
    int contPeca;

    /* Contrutores e Destrutores */
    Jogador( int = 0 );
    ~Jogador(){};

    /* Métodos */
    void desejaDevolver();
    int buscaProfundidade(); //Retorna o maior caminho de um vértice
    int maiorCaminho(); //Retorna o maior dos caminhos
    void comprar(Baralho b,bool c); //COmpra carta do baralho

  };

#endif
