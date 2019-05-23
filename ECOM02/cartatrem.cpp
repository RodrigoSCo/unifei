#include <iostream>
#include "carta.h"
#include "cartatrem.h"

using namespace std;

void CartaTrem::mostraCarta(){
  printf("\n__________\n");
  printf("\n|          |\n");
  switch (this.cor) {
    case 0:printf("| preto    |");
      break;
    case 1:printf("| vermelho |");
      break;
    case 2:printf("| amarelo  |");
      break;
    case 3:printf("| branco   |");
      break;
    case 4:printf("| laranja  |");
      break;
    case 5:printf("| rosa     |");
      break;
    case 6:printf("| azul     |");
      break;
    case 7:printf("| verde    |");
      break;
    case 8:printf("|locomotiva|");
      break;
  }
  printf("\n|          |\n");
  printf("\n__________\n");
}
