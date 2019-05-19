#include <iostream>
#include <string>
#include "tabuleiro.h"
#include "no.h"

using namespace std;

void Tabuleiro::InicializaTabuleiro(){
  Tabuleiro tabu;
  int i, j;

  for (i=0; i<36; i++){
    for (j=0; j< ; j++){
      tabu.MatrizInc[i][j].peso = 0;
      tabu.MatrizInc[i][j].cor = 0;
      tabu.MatrizInc[i][j].dono = 0;
    }
  }
}
