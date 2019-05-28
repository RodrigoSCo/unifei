#include <iostream>
#include "cartaobjetivo.h"

using namespace std;

ostream& operator<<(ostream& out, const CartaObjetivo&){
  out<<"\n__________\n";
<<<<<<< HEAD
  out<<"\n|Pnts: %d  |\n", &CartaObjetivo.peso;
  out<<"\n|Orig: %d  |\n", &CartaObjetivo.orig;
  out<<"\n|Dest: %d  |\n", &CartaObjetivo.dest;
=======
  out<<"\n|Pnts: %d  |\n", &peso;
  out<<"\n|Orig: %d  |\n", &orig;
  out<<"\n|Dest: %d  |\n", &dest;
>>>>>>> 06ce90063f708820b056ada3e5c2532c5320c134
  out<<"\n__________\n";
  return out;
}//End Operator <<
