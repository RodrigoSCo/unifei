#ifndef CARTATREM_H
#define CARTATREM_H
# include "carta.h"
class CartaTrem : public Carta{
  protected:
    int cor;
  public:
    CartaTrem(){cor=-1;};
    CartaTrem(int c){cor=c;};
    ~CartaTrem() {};
    friend ostream& operator<<(ostream&, const CartaTrem&);
};
#endif
