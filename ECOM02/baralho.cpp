#include "carta.h"
#include "cidades.h"
#include <algorithm>
#include <ctime>        // std::time
#include <cstdlib>      // std::rand, std::srand

srand(unsigned(time(NULL)));
/*  public:
    int primT,primO;// guarda o primiero item da lista
    Carta trens[110];
    CartaObjetivo  objts[30]*/
    Baralho::Baralho(){
       // inicializa o baralho de cartas trem
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
          random_shuffle(this.trens[0],this.trens[110],rand());
          }
        }

       // iniciliza o baralho de cartas de objetivo


    }

    CartaTrem Baralho::comprarTrem(bool c){ //tira a primeira carta da lista
          CartaTrem a = this.trens[this.primT];
          this->primT++;
          return a;
    }

    CartaObjetivo Baralho::comprarObjetivo(bool c){
          CartaObjetivo b = this.objts[this.primO];
          this->primO++;
          return b;

    }

    Baralho Baralho::Baralho(Baralho c){
      int i;
      this.primT
      this.primO
      while(i<110)
        this.trens[i]=c.trens[i];

    }
    Baralho Baralho::operator = (Baralho c){

    }
