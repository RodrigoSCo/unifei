#ifndef TABULEIRO_H
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

#endif
