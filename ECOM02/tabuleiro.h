#ifndef TABULEIRO_H
<<<<<<< HEAD
  #define TABULEIRO_H
  #include "no.h"

  class Tabuleiro{
    public:
      /* Atributos */
      No MatrizInc [36][95]; //36 cidades e 95 arestas
      CartaTrem mesa[5];

      /* Contrutores e Destrutores */
      Tabuleiro(){};
      ~Tabuleiro(){};

      /* Métodos */
      void ConfiguraTabuleiro();
      void ConfigurarMesa(Baralho b, int lim);
      void AtualizaTabuleiro(int origem, int chegada, int aresta, int dono);
      CartaTrem compraMesa(Baralho, int);
  };
=======
#define TABULEIRO_H
#include "no.h"

class Tabuleiro{
  protected:
    No MatrizInc [36][95] //36 cidades e 95 arestas
    CartaTrem mesa[5];
  public:
    Tabuleiro(){};
    ~Tabuleiro(){};
    void ConfiguraTabuleiro();
    void ConfigurarMesa(Baralho b, int lim);
    void AtualizaTabuleiro(int origem, int chegada, int aresta, int dono);
};
>>>>>>> 06ce90063f708820b056ada3e5c2532c5320c134

#endif
