#ifndef TABULEIRO_H
#define TABULEIRO_H
#include "no.h"

class Tabuleiro{
  protected:
    No MatrizInc [36] [ ] //36 cidades e
  public:
    Tabuleiro(){};
    ~Tabuleiro(){};
    void ConfiguraTabuleiro();
    void AtualizaTabuleiro(int origem, int chegada, int aresta, int dono);
};

#endif
