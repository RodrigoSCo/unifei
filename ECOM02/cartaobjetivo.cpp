#include <iostream>
#include "carta.h"
#include "cartaobjetivo.h"

using namespace std;

 ostream& operator<<(ostream& out, const CartaObjetivo&);{
  out<<"\n__________\n";
  out<<"\n|Pnts: %d  |\n", &this.peso;
  out<<"\n|Orig: %d  |\n", &this.orig;
  out<<"\n|Dest: %d  |\n", &this.dest;
  out<<"\n__________\n";
  return out;
}
