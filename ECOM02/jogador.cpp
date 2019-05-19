#include <iostream>
#include "jogador.h"

void Jogador::InicializaJogador(){
  /*Isso é bem uma função main mesmo o jeito foi tirar esse vetor e
  inicializar os jogadores um por um e o ident vai mudar na mão ou alterar
  o construtor para mudar uma var global a cada vez q ele for inicializado */
  int j, k;
    self.peca = 45;
    for (j=0; j<36; j++){
      for (k=0; k<36; k++){
        self.MatrizAdj[j][k] = 0;
      }
    }
}
