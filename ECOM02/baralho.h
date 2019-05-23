#ifndef BARALHO_H
#define BARALHO_H
#include "carta.h"
#include "cidades.h"

class Baralho{
  public:
    int prim;
    Carta list;
    Baralho(bool c);
    ~Baralho(){};
    CartaTrem comprarTrem();
    CartaObjetivo comprarObjetivo();
};
#endif
