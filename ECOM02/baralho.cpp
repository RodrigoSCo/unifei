#ifndef BARALHO_H
#define BARALHO_H
#include "carta.h"
#include "cidades.h"

class Baralho{
  public:
    int prim;
    Carta list[];
    Baralho(bool c){
      if(c==0){ // inicializa o baralho de cartas trem
        int i, j;
        for (i=0; i<110; i++) {
          if(i<12){
            this->list[i]->cor = 0; //COR PRETA
          }
          if(i>=12 && i<24){
            this->list[i]->cor = 1; //COR VERMELHA
          }
          if (i>=24 && i<36){
            this->list[i]->cor = 2; //COR AMARELO
          }
          if (i>=36 && i<48){
            this->list[i]->cor = 3; //COR BRANCO
          }
          if(i>=48 && i<60){
            this->list[i]->cor = 4; //COR LARANJA
          }
          if(i>=60 && i<72){
            this->list[i]->cor = 5; //COR ROSA
          }
          if (i>=72 && i<84){
            this->list[i]->cor = 6; //COR AZUL
          }
          if (i>=84 && i<96){
            this->list[i]->cor = 7; //COR VERDE
          }
          if (i>=96 && i<110){
            this->list[i]->cor = 8; //LOCOMOTIVA
          }
        }
      }
      else{ // iniciliza o baralho de cartas de objetivo

      }
    };
    ~Baralho() {};
    Carta comprar(){ //tira a primeira carta da lista

    };
    void embaralhar(){

    };
};
#endif
