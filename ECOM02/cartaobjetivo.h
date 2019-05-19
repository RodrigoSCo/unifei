#ifndef CARTAOBJETIVO_H
#define CARTAOBJETIVO_H
#include "carta.h"

class CartaObjetivo : public Carta{
  protected:
    int peso;
    int orig, dest;
  public:
    CartaObjetivo(){this->peso=-1;};
    CartaObjetivo(int p) {this->peso=p;};
    ~CartaObjetivo() {};
};
#endif
