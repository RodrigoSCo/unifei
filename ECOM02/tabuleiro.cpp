#include <iostream>
#include <string>
#include "tabuleiro.h"
#include "no.h"

using namespace std;

void Tabuleiro::InicializaTabuleiro(){
  /* Não precisa criar um tabuleiro aqui pq ele já coi criador no
  construtor e esse é um método que esse tabuleiro já criado chama */
  int i, j;

  for (i=0; i<36; i++){
    for (j=0; j< ; j++){
      this->MatrizInc[i][j].peso = 0;
      this->MatrizInc[i][j].cor = 0;
      this->MatrizInc[i][j].dono = 0;
    }
  }
}
