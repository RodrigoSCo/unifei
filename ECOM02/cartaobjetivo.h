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

<<<<<<< HEAD
=======
class CartaObjetivo{
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
>>>>>>> 06ce90063f708820b056ada3e5c2532c5320c134
#endif
