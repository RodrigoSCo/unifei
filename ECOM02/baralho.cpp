#include "carta.h"
#include "cidades.h"
#include <algorithm>
#include <ctime>        // std::time
#include <cstdlib>      // std::rand, std::srand

typedef enum {} objetivos;
typedef enum {} pesos;

srand(unsigned(time(NULL)));
/*  public:
    int primT,primO;// guarda o primeiro item da lista
    Carta trens[110];
    CartaObjetivo  objts[30]*/
Baralho::Baralho(){
    // inicializa o baralho de cartas trem
  for (int i=0; i<110; i++) {
    if(i<12){
      this->trens[i]->cor = 0; //COR PRETA
    }
    if(i>=12 && i<24){
      this->trens[i]->cor = 1; //COR VERMELHA
    }
    if (i>=24 && i<36){
      this->trens[i]->cor = 2; //COR AMARELO
    }
    if (i>=36 && i<48){
      this->trens[i]->cor = 3; //COR BRANCO
    }
    if(i>=48 && i<60){
      this->trens[i]->cor = 4; //COR LARANJA
    }
    if(i>=60 && i<72){
      this->trens[i]->cor = 5; //COR ROSA
    }
    if (i>=72 && i<84){
      this->trens[i]->cor = 6; //COR AZUL
    }
    if (i>=84 && i<96){
      this->trens[i]->cor = 7; //COR VERDE
    }
    if (i>=96 && i<110){
      this->trens[i]->cor = 8; //LOCOMOTIVA
  }
  random_shuffle(this.trens[0],this.trens[110],rand());

  }
  // iniciliza o baralho de cartas de objetivo
  objetivos a; //Cidades de origem e destino
  pesos b; //Peso de cada cidade
  for (int j = 0; j < 30; i++) {
    this->objts[i]->peso = b;
    this->objts[i]->orig = a;
    this->objts[j]->dest = a+1;
    a++; b++;
  }
}

Baralho::Baralho(const Baralho& c){
  int i=0;
  this.primT=c.primT;
  this.primO=c.primO;
  while(i<110)
    this.trens[i]=c.trens[i];
  i=0;
  while(i<30)
    this.objts[i]=c.objts[i];
}

Baralho Baralho::&operator=(const Baralho& a){
  //Sobrecarga do operador = que permite atribuir os valores de um objeto a outro
  return *this = new Baralho(a);
}

CartaTrem Baralho::comprarTrem(bool c){
  //tira a primeira carta da lista de vagões
  CartaTrem a = this.trens[this.primT];
  this->primT++;
  return a;
}

CartaObjetivo Baralho::comprarObjetivo(bool c){
  //tira a primeira carta da lista de objetivo
  CartaObjetivo b = this.objts[this.primO];
  this->primO++;
  return b;
}
