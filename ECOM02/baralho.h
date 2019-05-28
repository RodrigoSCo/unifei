#ifndef BARALHO_H
  #define BARALHO_H

  #include "cartatrem.h"

  class Baralho{
    public:
      /* Atributos */
      int primT,primO;// guarda o primeiro item da lista
      CartaTrem trens[110];
      CartaObjetivo objts[30];

      /* Contrutores e Destrutores */
      Baralho();
      Baralho(const Baralho& a);
      ~Baralho(){};

      /* Métodos */
      CartaTrem comprarTrem();
      CartaObjetivo comprarObjetivo();
      Baralho &operator=(const Baralho& a);
  };
#endif
