#ifndef BARALHO_H
#define BARALHO_H
#include "carta.h"
#include "cidades.h"

class Baralho{
  public:
    int prim;
    Carta list;
    Baralho(bool c);
    Baralho(const Baralho& a)
    ~Baralho(){};
    CartaTrem comprarTrem();
    CartaObjetivo comprarObjetivo();
    Baralho &operator=(const Baralho& a)
};
#endif
