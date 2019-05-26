#include <iostream>
#include "carta.h"
#include "cartaobjetivo.h"

using namespace std;

 ostream& operator<<(ostream& out, const CartaObjetivo&){
  out<<"\n__________\n";
  out<<"\n|Pnts: %d  |\n", &peso;
  out<<"\n|Orig: %d  |\n", &orig;
  out<<"\n|Dest: %d  |\n", &dest;
  out<<"\n__________\n";
  return out;
}
