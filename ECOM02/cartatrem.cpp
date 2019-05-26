#include <iostream>
#include "carta.h"
#include "cartatrem.h"

using namespace std;

ostream& operator<<(ostream& out, const CartaTrem&){
  out<<"\n__________\n";
  out<<"\n|          |\n";
  switch (cor) {
    case 0:out<<"| preto    |";
      break;
    case 1:out<<"| vermelho |";
      break;
    case 2:out<<"| amarelo  |";
      break;
    case 3:out<<"| branco   |";
      break;
    case 4:out<<"| laranja  |";
      break;
    case 5:out<<"| rosa     |";
      break;
    case 6:out<<"| azul     |";
      break;
    case 7:out<<"| verde    |";
      break;
    case 8:out<<"|locomotiva|";
      break;
  }
  out<<"\n|          |\n";
  out<<"\n__________\n";
}
