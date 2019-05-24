#ifndef BARALHO_H
#define BARALHO_H
#include "carta.h"
#include "cidades.h"

class Baralho{
  public:
    int primT,primO;// guarda o primeiro item da lista
    Carta trens[110];
    CartaObjetivo  objts[30]
    Baralho(bool c);
    Baralho(const Baralho& a)
    ~Baralho(){};
    CartaTrem comprarTrem();
    CartaObjetivo comprarObjetivo();
    Baralho &operator=(const Baralho& a)
};
#endif
