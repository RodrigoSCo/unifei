#include <iostream>
#include "cartatrem.h"

using namespace std;

bool operator==(int c){
  return (cor == c);
}

ostream& operator<<(ostream& out, const CartaTrem& carta){
  out<<"\n__________\n";
  out<<"\n|          |\n";
  switch (carta.cor) {
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
}//End Operator <<
