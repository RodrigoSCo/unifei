#include "baralho.h"
#include "cartaobjetivo.h"
#include "cartatrem.h"
#include "jogador.h"
#include "tabuleiro.h"
#include "stdio.h"
#include <algorithm>
#include <ctime>        // std::time
#include <cstdlib>

using namespace std;

void jogada(Jogador o,Baralho b){
  int c=0, mov=0, pos=-1, op1, op2;
  while(mov<2){
    cout<<"Gostaria de comprar uma carta do monte(1) ou da mesa(2) ou nao comprar carta(3)?\n";
    cin>>c;
    if(c==1){ o.comprar(b,0); mov++;}//compra carta do baralho
    else if(c==2){
      for(int k==0,k<5;k++) cout<<t.mesa[k];//imprime as cartas na tela
      cout<<"Qual dessas cartas gostaria de comprar ?\n R:";
      cin>>pos;
      if(t.mesa[pos]==8 && mov==0){ mov=2; t.compraMesa(b,pos);}//Se comprar uma locomotiva de mesa encerra a jogada
      else if(t.mesa[pos]==8 && mov==1){ cout<<" Jogada Inválida!\n";}
    }
  } else {
    cout<<"Gostaria de comprar um novo objetivo?\n(1)Sim    (2)Nao";
    cin>>op1;
    if(op1 == 1){
      o.comprar(b,1);//compra objetivo
    }
    cout>>"Gostaria de comprar um caminho?\n(1)Sim    (2)Nao";
    cin<<op2;
    if(op2==1){
      cout>>"Qual cidade deseja partir?";
      cin<<o1;
      cout>>"Qual cidade deseja chegar?";
      cin<<c1;
      
    }
  }
}
void main(){
  Baralho b;
  Jogador j[5];
  Tabuleiro t;
  t.ConfiguraTabuleiro();


}
