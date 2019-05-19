#include <iostream>
#include "carta.h"
#include "cartamao.h"
#include "cartaobjetivo.h"

using namespace std;

void Carta::InicializaCarta (){
  CartaMao Baralho[110];
  CartaObjetivo Mesa[30];
  int i, j;

  for (i=0; i<110; i++) {
    if(i<12){
      Baralho[i].cor = 0; //COR PRETA
    }
    if(i>=12 && i<24){
      Baralho[i].cor = 1; //COR VERMELHA
    }
    if (i>=24 && i<36){
      Baralho[i].cor = 2; //COR AMARELO
    }
    if (i>=36 && i<48){
      Baralho[i].cor = 3; //COR BRANCO
    }
    if(i>=48 && i<60){
      Baralho[i].cor = 4; //COR LARANJA
    }
    if(i>=60 && i<72){
      Baralho[i].cor = 5; //COR ROSA
    }
    if (i>=72 && i<84){
      Baralho[i].cor = 6; //COR AZUL
    }
    if (i>=84 && i<96){
      Baralho[i].cor = 7; //COR VERDE
    }
    if (i>=96 && i<110){
      Baralho[i].cor = 8; //LOCOMOTIVA
    }
  }
}
