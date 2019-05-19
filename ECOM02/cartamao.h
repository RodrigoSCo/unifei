#ifndef CARTAMAO_H
#define CARTAMAO_H

class CartaMao : public Carta{
  protected:
    int cor;
  public:
    CartaMao(){this->cor=-1;};
    CartaMao(int c){this->cor=c;};
    ~CartaMao() {};
};
#endif
