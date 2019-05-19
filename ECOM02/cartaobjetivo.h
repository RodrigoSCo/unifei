#ifndef CARTAOBJETIVO_H
#define CARTAOBJETIVO_H
#include "carta.h"

class CartaObjetivo : public Carta{
  protected:
    int peso;
    int orig, dest;
  public:
    CartaObjetivo(){peso=-1;};
    CartaObjetivo(int p) {peso=p;};
    ~CartaObjetivo() {};
};
#endif
