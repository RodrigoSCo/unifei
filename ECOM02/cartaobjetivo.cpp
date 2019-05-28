#include <iostream>
#include "cartaobjetivo.h"

using namespace std;

ostream& operator<<(ostream& out, const CartaObjetivo&){
  out<<"\n__________\n";
  out<<"\n|Pnts: %d  |\n", &CartaObjetivo.peso;
  out<<"\n|Orig: %d  |\n", &CartaObjetivo.orig;
  out<<"\n|Dest: %d  |\n", &CartaObjetivo.dest;
  out<<"\n__________\n";
  return out;
}//End Operator <<
