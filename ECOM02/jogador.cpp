#include <iostream>
#include "jogador.h"

void Jogador::InicializaJogador(){
  Jogador Ordem[5];
  int i, j, k;
  for (i=0; i<5; i++){
    Ordem[i].ident = i+1;
    Ordem[i].peca = 45;
    for (j=0; j<36; j++){
      for (k=0; k<36; k++){
        Ordem[i].MatrizAdj[j][k] = 0;
      }
    }
  }
}
