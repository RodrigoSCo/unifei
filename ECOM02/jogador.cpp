#include <iostream>
#include "jogador.h"
#include "cartaobjetivo.h"
<<<<<<< HEAD
#include "baralho.h"

using namespace std;

Jogador::Jogador(){
  trem=0;
  objts=0;
=======
#include "cartatrem.h"

using namespace std;

jogador::jogador(){
  trem=0;
  objts=0;

  id = jogadores++; // conferir na main, sujeito a mudanca
>>>>>>> 06ce90063f708820b056ada3e5c2532c5320c134

  contPeca = 45;

  for(int i = 0 ; i < MAX_NO ; i ++)
    for(int j = 0 ; j < MAX_NO ; j ++)
      ConquistasGrafo[i][j] = 0;

  for(int i = 0 ; i < MAX ; i ++)
    maoTrem[i] = 0;

  for(int i = 0 ; i < 3 ; i ++)
    maoTrem[comprarTrem().cor] ++;

  for(int i = 0 ; i < MAX ; i ++)
    maoObj[i] = CartaObjetivo();

  for(int i = 0 ; i < 3 ; i ++)
    maoObj[i] = comprarObjetivo();

  desejaDevolver();
}

void Jogador::desejaDevolver(){

  cout<<"Seus objetivos sao:\n";
  for(int i = 0 ; i < 3 ; i ++)
    cout<<"Objetivo " << i+1 << ":\n" << maoObj[i]<<endl;

  cout<<"Digite qual objetivo deseja devolver, ou 0 para sair: ";

  int opcaoDevolve;

  cin>>opcaoDevolve;

  if(!opcaoDevolve) return;

  maoObj[opcaoDevolve] = CartaObjetivo();
  cout<<"\n";
}//End Contrutor Padrão

int buscaProfundidade(int v, int& vis[MAX_NO], int dis){
  vis[v] = true;

  for(int i = 0 ; i < MAX_NO ; i ++)
    if(ConsquistasGrafo[v][i] && !vis[i]) buscaProfundidade(i, vis, dis + 1);

  return dis;
}//End DFS

int Jogador::maiorCaminho(){
  //chamar busca de profundidade para cada vertice
  //a cada chamada olhar maior distancia
  bool visitado[MAX_NO];
  int maior = 0;

  for(int i = 0 ; i < MAX_NO ; i ++){
    memset(visitado,0,sizeof visitado);
    maior = max(maior, buscaProfundidade(i,visitado,0));
  }

  return maior;
<<<<<<< HEAD
}//End MaiorCaminho
=======
}
>>>>>>> 06ce90063f708820b056ada3e5c2532c5320c134

void comprar(Baralho b,bool c){
  if(c==0)
    CartaTrem c = b.comprarTrem();
    maoTrem[c.cor]++;
  else if(c==1)
    maoObj[objts]=b.comprarObjetivo();
<<<<<<< HEAD
}//End Comprar
=======
}
>>>>>>> 06ce90063f708820b056ada3e5c2532c5320c134
