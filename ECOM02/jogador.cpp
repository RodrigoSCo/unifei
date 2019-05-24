#include <iostream>
#include "jogador.h"

using namespace std;

jogador::jogador(){

  id = jogadores++; // conferir na main, sujeito a mudanca

  contPeca = 45;

  for(int i = 0 ; i < MAX_NO ; i ++)
    for(int j = 0 ; j < MAX_NO ; j ++)
      ConquistasGrafo[i][j] = 0;

  for(int i = 0 ; i < MAX ; i ++)
    maoTrem[i] = 0;

  for(int i = 0 ; i < 3 ; i ++)
    maoTrem[compraTrem().cor] ++;

  for(int i = 0 ; i < MAX ; i ++)
    maoObj[i] = CartaObjetivo();

  for(int i = 0 ; i < 3 ; i ++)
    maoObj[i] = compraObj();

  DesejaDevolver();
}

void jogador::desejaDevolver(){

  cout<<"Seus objetivos sao:\n";
  for(int i = 0 ; i < 3 ; i ++)
    cout<<"Objetivo " << i+1 << ":\n" << maoObj[i]<<endl;

  cout<<"Digite qual objetivo deseja devolver, ou 0 para sair: ";

  int opcaoDevolve;

  cin>>opcaoDevolve;

  if(!opcaoDevolve) return;

  maoObj[opcaoDevolve] = CartaObjetivo();
  cout<<"\n";
}

int buscaProfundidade(int v, int& vis[MAX_NO], int dis){

  vis[v] = true;

  for(int i = 0 ; i < MAX_NO ; i ++)
    if(ConsquistasGrafo[v][i] && !vis[i]) buscaProfundidade(i, vis, dis + 1);

  return dis;
}

int jogador::maiorCaminho(){

  //chamar busca de profundidade para cada vertice
  //a cada chamada olhar maior distancia
  bool visitado[MAX_NO];

  int maior = 0;

  for(int i = 0 ; i < MAX_NO ; i ++){
    memset(visitado,0,sizeof visitado);
    maior = max(maior , buscaProfundidade(i,visitado,0));
  }

  return maior;
}
