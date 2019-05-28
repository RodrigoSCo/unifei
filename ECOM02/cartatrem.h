#ifndef CARTATREM_H
#define CARTATREM_H

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
  
#endif
