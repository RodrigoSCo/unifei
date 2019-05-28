#ifndef CARTAOBJETIVO_H
  #define CARTAOBJETIVO_H

  class CartaObjetivo{
    public:
      /* Atributos */
      int peso, orig, dest;

      /* Contrutores e Destrutores */
      CartaObjetivo(){this->peso=-1;};
      CartaObjetivo(int p,int o, int d) {this->peso=p; this->orig=o; this->dest=d;};
      ~CartaObjetivo() {};

      /* Métodos */
      friend ostream& operator<<(ostream&, const CartaObjetivo&);
      void mostraCarta();
  };

#endif
