#ifndef CARTATREM_H
#define CARTATREM_H
# include "carta.h"
class CartaTrem : public Carta{
  protected:
    int cor;
  public:
    CartaTrem(){this->cor=-1;};
    CartaTrem(int c){this->cor=c;};
    ~CartaTrem() {};
    friend ostream& operator<<(ostream&, const CartaTrem&);
};
#endif
