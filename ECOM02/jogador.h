#ifndef JOGADOR_H
#define JOGADOR_H

class Jogador{
  private:
    int MatrizAdj [36][36];
    CartaMao mao[20];
    CartaObjetivo obj[8];
    int peca;
    int ident;
  public:
    Jogador() {};
    ~Jogador() {};

    void InicializaJogador();
};
#endif
