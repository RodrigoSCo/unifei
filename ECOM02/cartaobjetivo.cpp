#include <iostream>
#include "carta.h"
#include "cartaobjetivo.h"

using namespace std;

void CartaObjetivo::mostraCarta(){
  printf("\n__________\n");
  printf("\n|Pontos:%d |\n", &this.peso);
  printf("\n|          |\n", &this.orig);
  printf("\n|          |\n", &this.dest);
  printf("\n__________\n");
}
