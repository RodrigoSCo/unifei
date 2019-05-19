#ifndef CARTAMAO_H
#define CARTAMAO_H

class CartaMao : public Carta{
  protected:
    int cor;
  public:
    CartaMao(){cor=-1;};
    CartaMao(int c){cor=c;};
    ~CartaMao() {};
};
#endif
