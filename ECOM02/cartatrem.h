#ifndef CARTATREM_H
#define CARTATREM_H
<<<<<<< HEAD

  class CartaTrem{
    public:
      /* Atributos */
      int cor;

      /* Contrutores e Destrutores */
      CartaTrem(){cor=-1;};
      CartaTrem(int c){cor=c;};
      ~CartaTrem() {};

      /* Métodos */
      bool operator==(int c);
      friend ostream& operator<<(ostream&, const CartaTrem&);
  };
  
=======
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
>>>>>>> 06ce90063f708820b056ada3e5c2532c5320c134
#endif
