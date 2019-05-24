#ifndef CARTAOBJETIVO_H
#define CARTAOBJETIVO_H
#include "carta.h"
#include "cidades.h"

class CartaObjetivo : public Carta{
  protected:
    int peso;
    Cidade orig, dest;
  public:
    CartaObjetivo(){this->peso=-1;};
    CartaObjetivo(int p,Cidade o, Cidade d) {this->peso=p; this->orig=o; this->dest=d;};
    ~CartaObjetivo() {};
    friend ostream& operator<<(ostream&, const CartaObjetivo&);
    void mostraCarta();
};
#endif
