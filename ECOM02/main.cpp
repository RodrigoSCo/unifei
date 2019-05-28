#include <iostream>
using namespace std;
#include "cartaobjetivo.h"
#include "cartatrem.h"
#include "baralho.h"
#include "jogador.h"
#include "tabuleiro.h"
#include <algorithm>
#include <ctime>        // std::time
#include <cstdlib>


void jogada(Jogador& o,Baralho& b, Tabuleiro& t){
  int c=0, mov=0, pos=-1, op1, op2, c1, o1;
  while(mov<2){
    cout<<"Gostaria de comprar uma carta do monte(1) ou da mesa(2) ou nao comprar carta(3)?\n";
    cin>>c;
    if(c==1){ o.comprar(b,0); mov++;}//compra carta do baralho
    else if(c==2){
      for(int k=0;k<5;k++) cout<<t.mesa[k];//imprime as cartas na tela
      cout << "Qual dessas cartas gostaria de comprar ?\n R:";
      cin >> pos;
      if(t.mesa[pos] == 8 && mov == 0){ mov=2; t.compraMesa(b,pos);}//Se comprar uma locomotiva de mesa encerra a jogada
      else if(t.mesa[pos] == 8 && mov==1){ cout<<" Jogada Inválida!\n";}
    }else {
      cout<<"Gostaria de comprar um novo objetivo?\n(1)Sim    (2)Nao";
      cin>>op1;
      if(op1 == 1){
        o.comprar(b,1);//compra objetivo
      }
      cout<<"Gostaria de comprar um caminho?\n(1)Sim    (2)Nao";
      cin>>op2;
      if(op2==1){
        cout<<"Qual cidade deseja partir?";
        cin>>o1;
        cout<<"Qual cidade deseja chegar?";
        cin>>c1;
      }
    }
  }
}//End Jogada

int menorNumPeca(Jogador j[]){
  int aux = 1000;
  for (int i = 0; i < 5; i ++)
    if (j[i].contPeca < aux) aux = j[i].contPeca;

  return aux;
}//End menorNumPeca

int main(){
  Baralho b;
  Jogador j[5];
  Tabuleiro t;
  t.ConfiguraTabuleiro();
  while (menorNumPeca(j) > 3){
    for (int i = 0; i < 5; i++)
      jogada(*j, b, t);
  }
  return 0;
}//End Main
