#include <iostream>
#include <string>
#include "tabuleiro.h"
#include "no.h"

using namespace std;

Tabuleiro::Tabuleiro(){
  int i, j;

<<<<<<< HEAD
  for (i=0; i < 36; i++){
    for (j=0; j< 96; j++){
      MatrizInc[i][j].nome = " ";
      MatrizInc[i][j].peso = 0;
      MatrizInc[i][j].cor = -1;
      MatrizInc[i][j].dono = -1;
=======
  for (i=0; i<36; i++){
    for (j=0; j< ; j++){
      MatrizInc.nome = " ";
      MatrizInc.peso = 0;
      MatrizInc.cor = " ";
      MatrizInc.dono = 0;
>>>>>>> 06ce90063f708820b056ada3e5c2532c5320c134
    }
  }

}//End Construtor Padrão

void Tabuleiro::ConfiguraTabuleiro(){
  int i, j;

  //Configurar o Nome das cidades
  for (j=0; j < 96; j++){
      MatrizInc[0][j].nome = "Denver"
      //Ligações de Denver
      MatrizInc[0][0].cor = 3;
      MatrizInc[0][0].peso = 5; //Denver -> Phoenix

      MatrizInc[0][69].cor = 7;
      MatrizInc[0][69].peso = 4; //Helena -> Denver

      MatrizInc[0][75].cor = 1;
      MatrizInc[0][75].peso = 3; //Salt Lake City -> Denver

      MatrizInc[0][76].cor = 2;
      MatrizInc[0][76].peso = 3; //Salt Lake City -> Denver

      MatrizInc[0][76].cor = 8;
      MatrizInc[0][76].peso = 2; //Santa Fe ->  Denver

      MatrizInc[0][77].cor = 1;
      MatrizInc[0][77].peso = 4; //Oklahoma City -> Denver

      MatrizInc[0][87].cor = 4;
      MatrizInc[0][87].peso = 4; //Kansas City -> Denver

      MatrizInc[0][88].cor = 7;
      MatrizInc[0][88].peso = 4; //Kansas City -> Denver

      MatrizInc[0][89].cor = 5;
      MatrizInc[0][89].peso = 4; //Omaha -> Denver

      MatrizInc[1][j].nome = "Vancouver";
      //Conexões de Vancouver
      MatrizInc[1][1].cor = 8;
      MatrizInc[1][1].peso = 1; //Vancouver -> Seattle

      MatrizInc[1][2].cor = 8;
      MatrizInc[1][2].peso = 1; //Vancouver -> Seattle

      MatrizInc[1][3].cor = 8;
      MatrizInc[1][3].peso = 3; //Vancouver -> Calgary

      MatrizInc[2][j].nome = "Seattle";
      //Conexões de Seattle
      MatrizInc[2][1].cor = 8;
      MatrizInc[2][4].peso = 1; //Seattle -> Vancouver

      MatrizInc[2][2].cor = 8;
      MatrizInc[2][2].peso = 1; //Seattle -> Vancouver

      MatrizInc[2][4].cor = 8;
      MatrizInc[2][4].peso = 1; //Seattle -> Portland

      MatrizInc[2][5].cor = 8;
      MatrizInc[2][5].peso = 1; //Seattle -> Portland

      MatrizInc[2][6].cor = 2;
      MatrizInc[2][6].peso = 6; //Seattle -> Helena

      MatrizInc[2][73].cor = 8;
      MatrizInc[2][73].peso = 4; //Seattle -> Calgary

      MatrizInc[3][j].nome = "San Francisco";
      //Conexões de San Francisco
      MatrizInc[3][7].cor = 7;
      MatrizInc[3][7].peso = 5; //San Francisco -> Portland

      MatrizInc[3][8].cor = 5;
      MatrizInc[3][8].peso = 5; //San Francisco -> Portland

      MatrizInc[3][8].cor = 4;
      MatrizInc[3][8].peso = 5; //San Francisco -> Salt Lake City

      MatrizInc[3][9].cor = 3;
      MatrizInc[3][9].peso = 5; //San Francisco -> Salt Lake City

      MatrizInc[3][10].cor = 5;
      MatrizInc[3][10].peso = 3; //San Francisco -> Los Angeles

      MatrizInc[3][11].cor = 2;
      MatrizInc[3][11].peso = 3; //San Francisco -> Los Angeles

      MatrizInc[4][j].nome = "Los Angeles";
      //Conexões de Los Angeles
      MatrizInc[4][10].cor = 5;
      MatrizInc[4][10].peso = 3; //Los Angeles -> San Francisco

      MatrizInc[4][11].cor = 2;
      MatrizInc[4][11].peso = 3; //Los Angeles -> San Francisco

      MatrizInc[4][12].cor = 8;
      MatrizInc[4][12].peso = 2; //Los Angeles -> Las Vegas

      MatrizInc[4][13].cor = 6;
      MatrizInc[4][13].peso = 3; //Los Angeles -> Phoenix

      MatrizInc[4][14].cor = 0;
      MatrizInc[4][15].peso = 6; //Los Angeles -> El Paso

      MatrizInc[5][j].nome = "Phoenix";
      //Ligações de Phoenix
      MatrizInc[5][13].cor = 6;
      MatrizInc[5][13].peso = 3; //Phoenix -> Los Angeles

      MatrizInc[5][16].cor = 8;
      MatrizInc[5][16].peso = 3; //Phoenix -> El Paso

      MatrizInc[5][17].cor = 8;
      MatrizInc[5][17].peso = 3; //Phoenix -> Santa Fe

      MatrizInc[5][0].cor = 3;
      MatrizInc[5][0].peso = 5; //Phoenix -> Denver

      MatrizInc[6][j].nome = "El Paso";
      //Ligações de El Paso
      MatrizInc[6][16].cor = 8;
      MatrizInc[6][16].peso = 3; //El Paso -> Phoenix

      MatrizInc[6][15].cor = 0;
      MatrizInc[6][15].cor = 6; //El Paso -> Los Angeles

      MatrizInc[6][19].cor = 8;
      MatrizInc[6][19].peso = 3; //El Paso -> Santa Fe

      MatrizInc[6][20].cor = 2;
      MatrizInc[6][20].peso = 5; //El Paso -> Oklahoma City

      MatrizInc[6][21].cor = 1;
      MatrizInc[6][21].peso = 4; //El Paso -> Dallas

      MatrizInc[6][22].cor = 7;
      MatrizInc[6][22].peso = 6; //El Paso -> Houston

      MatrizInc[7][j].nome = "Houston";
      //Ligações de Houston
      MatrizInc[7][22].cor = 7;
      MatrizInc[7][22].peso = 6; //Houston -> El Paso

      MatrizInc[7][23].cor = 8;
      MatrizInc[7][23].peso = 1; //Houston -> Dallas

      MatrizInc[7][24].cor = 8;
      MatrizInc[7][24].peso = 1; //Houston -> Dallas

      MatrizInc[7][25].cor = 8;
      MatrizInc[7][25].peso = 2; //Houston -> New Orleans

      MatrizInc[8][j].nome = "New Orleans";
      //Ligações de New Orleans
      MatrizInc[8][25].cor = 8;
      MatrizInc[8][25].peso = 2; //New Orleans -> Houston

      MatrizInc[8][26].cor = 7;
      MatrizInc[8][26].peso = 3; //New Orleans -> Little Rock

      MatrizInc[8][27].cor = 2;
      MatrizInc[8][27].peso = 4; //New Orleans -> Atlanta

      MatrizInc[8][28].cor = 4;
      MatrizInc[8][28].peso = 4; //New Orleans -> Atlanta

      MatrizInc[8][29].cor = 1;
      MatrizInc[8][29].peso = 6; //New Orleans -> Miami

      MatrizInc[9][j].nome = "Miami";
      //Ligações de Miami
      MatrizInc[9][29].cor = 1;
      MatrizInc[9][29].peso = 6; //Miami -> New Orleans

      MatrizInc[9][30].cor = 6;
      MatrizInc[9][30].peso = 5; //Miami -> Atlanta

      MatrizInc[9][31].cor = 5;
      MatrizInc[9][31].peso = 4; //Miami -> Charleston

      MatrizInc[10][j].nome = "Charleston";
      //Ligações de Charleston
      MatrizInc[10][31].cor = 5;
      MatrizInc[10][31].peso = 4; //Charleston -> Miami

      MatrizInc[10][32].cor = 8;
      MatrizInc[10][32].peso = 2; //Charleston -> Atlanta

      MatrizInc[10][33].cor = 8;
      MatrizInc[10][33].peso = 2; //Charleston -> Raleigh

      MatrizInc[11][j].nome = "Atlanta";
      //Ligações de Atlanta
      MatrizInc[11][27].cor = 2;
      MatrizInc[11][27].peso = 4; //Atlanta -> New Orleans

      MatrizInc[11][28].cor = 4;
      MatrizInc[11][28].peso = 4; //Atlanta -> New Orleans

      MatrizInc[11][30].cor = 6;
      MatrizInc[11][30].peso = 5; //Atlanta -> Miami

      MatrizInc[11][32].cor = 8;
      MatrizInc[11][32].peso = 2; //Atlanta -> Charleston

      MatrizInc[11][33].cor = 8;
      MatrizInc[11][33].peso = 1; //Atlanta -> Nashville

      MatrizInc[11][34].cor = 8;
      MatrizInc[11][34].peso = 2; //Atlanta -> Raleigh

      MatrizInc[11][35].cor = 8;
      MatrizInc[11][35].peso = 2; //Atlanta -> Raleigh

      MatrizInc[12][j].nome = "Raleigh";
      //Ligações de Raleigh
      MatrizInc[12][34].cor = 8;
      MatrizInc[12][34].peso = 2; //Raleigh -> Atlanta

      MatrizInc[12][35].cor = 8;
      MatrizInc[12][35].peso = 2; //Raleigh -> Atlanta

      MatrizInc[12][33].cor = 8;
      MatrizInc[12][33].peso = 2; //Raleigh -> Charleston

      MatrizInc[12][36].cor = 0;
      MatrizInc[12][36].peso = 3; //Raleigh -> Nashville

      MatrizInc[12][37].cor = 8;
      MatrizInc[12][37].peso = 2; //Raleigh -> Washington

      MatrizInc[12][38].cor = 8;
      MatrizInc[12][38].peso = 2; //Raleigh -> Washington

      MatrizInc[12][39].cor = 8;
      MatrizInc[12][39].peso = 2; //Raleigh -> Pitsburg

      MatrizInc[13][j].nome = "Washington";
      //Ligações de Washington
      MatrizInc[13][37].cor = 8;
      MatrizInc[13][37].peso = 2; //Washington -> Raleigh

      MatrizInc[13][38].cor = 8;
      MatrizInc[13][38].peso = 2; //Washington -> Raleigh

      MatrizInc[13][40].cor = 8;
      MatrizInc[13][40].peso = 2; //Washington -> Pitsburg

      MatrizInc[13][41].cor = 4;
      MatrizInc[13][41].peso = 2; //Washington -> New York

      MatrizInc[13][42].cor = 0;
      MatrizInc[13][42].peso = 2; //Washington -> New York

      MatrizInc[14][j].nome = "Pitsburg";
      //Ligações de Pitsburg
      MatrizInc[14][40].cor = 8;
      MatrizInc[14][40].peso = 2; //Pitsburg -> Washington

      MatrizInc[14][39].cor = 8;
      MatrizInc[14][39].peso = 2; //Pitsburg -> Raleigh

      MatrizInc[14][43].cor = 2;
      MatrizInc[14][43].peso = 4; //Pitsburg -> Nashville

      MatrizInc[14][44].cor = 7;
      MatrizInc[14][44].peso = 5; //Pitsburg -> Saint Louis

      MatrizInc[14][45].cor = 0;
      MatrizInc[14][45].peso = 3; //Pitsburg -> Chicago

      MatrizInc[14][45].cor = 4;
      MatrizInc[14][45].peso = 3; //Pitsburg -> Chicago

      MatrizInc[14][46].cor = 8;
      MatrizInc[14][46].peso = 2; //Pitsburg -> Toronto

      MatrizInc[14][47].cor = 3;
      MatrizInc[14][47].peso = 2; //Pitsburg -> New York

      MatrizInc[14][48].cor = 2;
      MatrizInc[14][48].peso = 2; //Pitsburg -> New York

      MatrizInc[15][j].nome = "New York";
      //Ligações de New York
      MatrizInc[15][41].cor = 4;
      MatrizInc[15][41].peso = 2; //New York -> Washington

      MatrizInc[15][42].cor = 0;
      MatrizInc[15][42].peso = 2; //New York -> Washington

      MatrizInc[15][47].cor = 3;
      MatrizInc[15][47].peso = 2; //New York -> Pitsburg

      MatrizInc[15][48].cor = 2;
      MatrizInc[15][48].peso = 2; //New York -> Pitsburg

      MatrizInc[15][49].cor = 2;
      MatrizInc[15][49].peso = 2; //New York -> Boston

      MatrizInc[15][50].cor = 1;
      MatrizInc[15][50].peso = 2; //New York -> Boston

      MatrizInc[15][51].cor = 6;
      MatrizInc[15][51].peso = 3; //New York -> Montreal

      MatrizInc[16][j].nome = "Boston";
      //Ligações de Boston
      MatrizInc[16][49].cor = 2;
      MatrizInc[16][49].peso = 2; //Boston -> New York

      MatrizInc[16][50].cor = 1;
      MatrizInc[16][50].peso = 2; //Boston -> New York

      MatrizInc[16][52].cor = 8;
      MatrizInc[16][52].peso = 2; //Boston -> Montreal

      MatrizInc[16][53].cor = 8;
      MatrizInc[16][53].peso = 2; //Boston -> Montreal

      MatrizInc[17][j].nome = "Toronto";
      //Ligações de Toronto
      MatrizInc[17][46].cor = 8;
      MatrizInc[17][46].peso = 2; //Tornto -> Pitsburg

      MatrizInc[17][54].cor = 3;
      MatrizInc[17][54].peso = 4; //Toronto -> Chicago

      MatrizInc[17][55].cor = 5;
      MatrizInc[17][55].peso = 6; //Toronto -> Duluth

      MatrizInc[17][56].cor = 8;
      MatrizInc[17][56].peso = 2; //Toronto -> Sault St. Marie

      MatrizInc[17][57].cor = 8;
      MatrizInc[17][57].peso = 3; //Toronto -> Montreal

      MatrizInc[18][j].nome = "Montreal";
      //Ligações de Montreal
      MatrizInc[18][51].cor = 6;
      MatrizInc[18][51].peso = 3; //Montreal -> New York

      MatrizInc[18][52].cor = 8;
      MatrizInc[18][52].peso = 2; //Montreal -> Boston

      MatrizInc[18][53].cor = 8;
      MatrizInc[18][53].peso = 2; //Montreal -> Boston

      MatrizInc[18][57].cor = 8;
      MatrizInc[18][57].peso = 3; //Montreal -> Toronto

      MatrizInc[18][58].cor = 0;
      MatrizInc[18][58].peso = 5; //Montreal -> Sault St. Marie

      MatrizInc[19][j].nome = "Sault St. Marie";
      //Ligações de Sault St. Marie
      MatrizInc[19][56].cor = 8;
      MatrizInc[19][56].peso = 2; //Sault St. Marie -> Toronto

      MatrizInc[19][58].cor = 0;
      MatrizInc[19][58].peso = 5; //Sault St. Marie -> Montreal

      MatrizInc[19][59].cor = 8;
      MatrizInc[19][59].peso = 6; //Sault St. Marie -> Winnipeg

      MatrizInc[19][60].cor = 8;
      MatrizInc[19][60].peso = 3; //Sault St. Marie -> Duluth

      MatrizInc[20][j].nome = "Duluth";
      //Ligações de Duluth
      MatrizInc[20][55].cor = 5;
      MatrizInc[20][55].peso = 6; //Duluth -> Toronto

      MatrizInc[20][60].cor = 8;
      MatrizInc[20][60].peso = 3; //Duluth -> Sault St. Marie

      MatrizInc[20][61].cor = 0;
      MatrizInc[20][61].peso = 4; //Duluth -> Winnipeg

      MatrizInc[20][62].cor = 8;
      MatrizInc[20][62].peso = 2; //Duluth -> Omaha

      MatrizInc[20][63].cor = 8;
      MatrizInc[20][63].peso = 2; //Duluth -> Omaha

      MatrizInc[20][64].cor = 4;
      MatrizInc[20][64].cor = 6; //Duluth -> Helena

      MatrizInc[20][65].cor = 1;
      MatrizInc[20][65].peso = 3; //Duluth -> Chicago

      MatrizInc[21][j].nome = "Winnipeg";
      //Ligações de Winnipeg
      MatrizInc[21][59].cor = 8;
      MatrizInc[21][59].peso = 6; //Winnipeg -> Sault St. Marie

      MatrizInc[21][61].cor = 0;
      MatrizInc[21][61].peso = 4; //Winnipeg -> Duluth

      MatrizInc[21][66].cor = 6;
      MatrizInc[21][66].peso = 4; //Winnipeg -> Helena

      MatrizInc[21][67].cor = 3;
      MatrizInc[21][67].peso = 6; //Winnipeg -> Calgary

      MatrizInc[22][j].nome = "Helena";
      //Ligações de Helena
      MatrizInc[22][64].cor = 4;
      MatrizInc[22][64].cor = 6; //Helena -> Duluth

      MatrizInc[22][66].cor = 6;
      MatrizInc[22][66].peso = 4; //Helena -> Winnipeg

      MatrizInc[22][68].cor = 1;
      MatrizInc[22][68].peso = 5; //Helena -> Omaha

      MatrizInc[22][69].cor = 7;
      MatrizInc[22][69].peso = 4; //Helena -> Denver

      MatrizInc[22][70].cor = 1;
      MatrizInc[22][70].peso = 3; //Helena -> Salt Lake City

      MatrizInc[22][6].cor = 2;
      MatrizInc[22][6].peso = 6; //Helena -> Portland

      MatrizInc[22][72].cor = 8;
      MatrizInc[22][72].peso = 4; //Helena -> Calgary

      MatrizInc[23][j].nome = "Calgary";
      //Ligações de Calgary
      MatrizInc[23][67].cor = 3;
      MatrizInc[23][67].peso = 6; //Calgary -> Winnipeg

      MatrizInc[23][72].cor = 8;
      MatrizInc[23][72].peso = 4; //Calgary -> Helena

      MatrizInc[23][73].cor = 8;
      MatrizInc[23][73].peso = 4; //Calgary -> Seattle

      MatrizInc[23][3].cor = 8;
      MatrizInc[23][3].peso = 3; //Calgary -> Vancouver

      MatrizInc[24][j].nome = "Salt Lake City";
      //Ligações de Salt Lake City
      MatrizInc[24][8].cor = 4;
      MatrizInc[24][8].peso = 5; //Salt Lake City -> San Francisco

      MatrizInc[24][9].cor = 3;
      MatrizInc[24][9].peso = 5; //Salt Lake City -> San Francisco

      MatrizInc[24][70].cor = 1;
      MatrizInc[24][70].peso = 3; //Salt Lake City -> Helena

      MatrizInc[24][71].cor = 6;
      MatrizInc[24][71].peso = 6; //Salt Lake City ->  Portland

      MatrizInc[24][74].cor = 4;
      MatrizInc[24][74].peso = 3; //Salt Lake City -> Las Vegas

      MatrizInc[24][75].cor = 1;
      MatrizInc[24][75].peso = 3; //Salt Lake City -> Denver

      MatrizInc[24][76].cor = 2;
      MatrizInc[24][76].peso = 3; //Salt Lake City -> Denver

      MatrizInc[25][j].nome = "Las Vegas";
      //Ligações de Las Vegas
      MatrizInc[25][12].cor = 8;
      MatrizInc[25][12].peso = 2; //Las Vegas -> Los Angeles

      MatrizInc[25][74].cor = 4;
      MatrizInc[25][74].peso = 3; //Las Vegas -> Salt Lake City

      MatrizInc[26][j].nome = "Santa Fe";
      //Ligações de Santa Fe
      MatrizInc[26][17].cor = 8;
      MatrizInc[26][17].peso = 3; //Santa Fe -> Phoenix

      MatrizInc[26][19].cor = 8;
      MatrizInc[26][19].peso = 3; //Santa Fe -> El Paso

      MatrizInc[26][75].cor = 6;
      MatrizInc[26][75].peso = 3; //Santa Fe -> Oklahoma City

      MatrizInc[26][76].cor = 8;
      MatrizInc[26][76].peso = 2; //Santa Fe ->  Denver

      MatrizInc[27][j].nome = "Oklahoma City";
      //Ligações de Oklahoma City
      MatrizInc[27][75].cor = 6;
      MatrizInc[27][75].peso = 3; //Oklahoma City -> Santa Fe

      MatrizInc[27][20].cor = 2;
      MatrizInc[27][20].peso = 5; //Oklahoma City -> El Paso

      MatrizInc[27][77].cor = 1;
      MatrizInc[27][77].peso = 4; //Oklahoma City -> Denver

      MatrizInc[27][78].cor = 8;
      MatrizInc[27][78].peso = 2; //Oklahoma City -> Kansas City

      MatrizInc[27][79].cor = 8;
      MatrizInc[27][79].peso = 2; //Oklahoma City ->  Kansas City

      MatrizInc[27][80].cor = 8;
      MatrizInc[27][80].peso = 2; //Oklahoma City -> Little Rock

      MatrizInc[27][81].cor = 8;
      MatrizInc[27][81].peso = 2; //Oklahoma City -> Dallas

      MatrizInc[27][82].cor = 8;
      MatrizInc[27][82].peso = 2; //Oklahoma City -> Dallas

      MatrizInc[28][j].nome = "Portland";
      //Ligações de Portland
      MatrizInc[28][4].cor = 8;
      MatrizInc[28][4].peso = 1; //Portland -> Seattle

      MatrizInc[28][5].cor = 8;
      MatrizInc[28][5].peso = 1; //Portland -> Seattle

      MatrizInc[28][7].cor = 7;
      MatrizInc[28][7].peso = 5; //Portland -> San Francisco

      MatrizInc[28][8].cor = 5;
      MatrizInc[28][8].peso = 5; //Portland -> San Francisco

      MatrizInc[28][71].cor = 6;
      MatrizInc[28][71].peso = 6; //Portland -> Salt Lake City

      MatrizInc[29][j].nome = "Kansas City";
      //Ligações de Kansas City
      MatrizInc[29][78].cor = 8;
      MatrizInc[29][78].peso = 2; //Kansas City -> Oklahoma City

      MatrizInc[29][79].cor = 8;
      MatrizInc[29][79].peso = 2; //Kansas City -> Oklahoma City

      MatrizInc[29][83].cor = 5;
      MatrizInc[29][83].peso = 2; //Kansas City -> Saint Louis

      MatrizInc[29][84].cor = 6;
      MatrizInc[29][84].peso = 2; //Kansas City -> Saint Louis

      MatrizInc[29][85].cor = 8;
      MatrizInc[29][85].peso = 2; //Kansas City -> Omaha

      MatrizInc[29][86].cor = 8;
      MatrizInc[29][86].peso = 2; //Kansas City -> Omaha

      MatrizInc[29][87].cor = 4;
      MatrizInc[29][87].peso = 4; //Kansas City -> Denver

      MatrizInc[29][88].cor = 7;
      MatrizInc[29][88].peso = 4; //Kansas City -> Denver

      MatrizInc[30][j].nome = "Omaha";
      //Ligações de Omaha
      MatrizInc[29][85].cor = 8;
      MatrizInc[29][85].peso = 2; //Omaha -> Kansas City

      MatrizInc[29][86].cor = 8;
      MatrizInc[29][86].peso = 2; //Omaha -> Kansas City

      MatrizInc[22][68].cor = 1;
      MatrizInc[22][68].peso = 5; //Omaha -> Helena

      MatrizInc[20][62].cor = 8;
      MatrizInc[20][62].peso = 2; //Omaha -> Duluth

      MatrizInc[20][63].cor = 8;
      MatrizInc[20][63].peso = 2; //Omaha -> Duluth

      MatrizInc[30][89].cor = 5;
      MatrizInc[30][89].peso = 4; //Omaha -> Denver

      MatrizInc[30][90].cor = 6;
      MatrizInc[30][90].peso = 4; //Omaha -> Chicago

      MatrizInc[31][j].nome = "Saint Louis";
      //Ligações de Saint Louis
      MatrizInc[31][83].cor = 5;
      MatrizInc[31][83].peso = 2; //Saint Louis -> Kansas City

      MatrizInc[31][84].cor = 6;
      MatrizInc[31][84].peso = 2; //Saint Louis -> Kansas City

      MatrizInc[31][44].cor = 7;
      MatrizInc[31][44].peso = 5; //Saint Louis -> Pitsburg

      MatrizInc[31][91].cor = 8;
      MatrizInc[31][91].peso = 2; //Saint Louis -> Nashville

      MatrizInc[31][92].cor = 8;
      MatrizInc[31][92].peso = 2; //Saint Louis -> Little Rock

      MatrizInc[31][93].cor = 3;
      MatrizInc[31][93].peso = 2; //Saint Louis -> Chicago

      MatrizInc[31][94].cor = 7;
      MatrizInc[31][94].peso = 2; //Saint Louis -> Chicago

      MatrizInc[32][j].nome = "Little Rock";
      //Ligações de Little Rock
      MatrizInc[32][92].cor = 8;
      MatrizInc[32][92].peso = 2; //Little Rock -> Saint Louis

      MatrizInc[32][80].cor = 8;
      MatrizInc[32][80].peso = 2; //Little Rock -> Oklahoma Cityk

      MatrizInc[32][26].cor = 7;
      MatrizInc[32][26].peso = 3; //Little Rock -> New Orleans

      MatrizInc[32][95].cor = 8;
      MatrizInc[32][95].peso = 2; //Little Rock -> Dallas

      MatrizInc[32][96].cor = 5;
      MatrizInc[32][96].peso = 3; //Little Rock -> Nashville

      MatrizInc[33][j].nome = "Nashville";
      //Ligações de Nashville
      MatrizInc[33][96].cor = 5;
      MatrizInc[33][96].peso = 3; //Nashville -> Little Rock

      MatrizInc[33][91].cor = 8;
      MatrizInc[33][91].peso = 2; //Nashville -> Saint Louis

      MatrizInc[33][43].cor = 2;
      MatrizInc[33][43].peso = 4; //Nashville -> Pitsburg

      MatrizInc[33][36].cor = 0;
      MatrizInc[33][36].peso = 3; //Nashville -> Raleigh

      MatrizInc[33][33].cor = 8;
      MatrizInc[33][33].peso = 1; //Nashville -> Atlanta

      MatrizInc[34][j].nome = "Chicago";
      //Ligações de Chicago
      MatrizInc[34[93].cor = 3;
      MatrizInc[34][93].peso = 2; //Chicago -> Saint Louis

      MatrizInc[34][94].cor = 7;
      MatrizInc[34][94].peso = 2; //Chicago -> Saint Louis

      MatrizInc[34][90].cor = 6;
      MatrizInc[34][90].peso = 4; //Chicago -> Omaha

      MatrizInc[34][65].cor = 1;
      MatrizInc[34][65].peso = 3; //Chicago -> Duluth

      MatrizInc[34][54].cor = 3;
      MatrizInc[34][54].peso = 4; //Chicago -> Toronto

      MatrizInc[34][45].cor = 0;
      MatrizInc[34][45].peso = 3; //Chicago -> Pitsburg

      MatrizInc[34][45].cor = 4;
      MatrizInc[34][45].peso = 3; //Chicago -> Pitsburg

      MatrizInc[35][j].nome = "Dallas"
      //Ligações de Dallas
      MatrizInc[35][95].cor = 8;
      MatrizInc[35][95].peso = 2; //Little Rock -> Dallas

      MatrizInc[35][81].cor = 8;
      MatrizInc[35][81].peso = 2; //Oklahoma City -> Dallas

      MatrizInc[35][82].cor = 8;
      MatrizInc[35][82].peso = 2; //Oklahoma City -> Dallas

      MatrizInc[35][23].cor = 8;
      MatrizInc[35][23].peso = 1; //Houston -> Dallas

      MatrizInc[35][24].cor = 8;
      MatrizInc[35][24].peso = 1; //Houston -> Dallas

      MatrizInc[35][21].cor = 1;
      MatrizInc[35][21].peso = 4; //El Paso -> Dallas
  }
}//End ConfiguraTabuleiro

void Tabuleiro::ConfigurarMesa(Baralho b{
  int i;

  for (i=0; i<5; i++){
    mesa[i] = b.comprarTrem();
  }
}//End ConfiguraMesa

void Tabuleiro::ConfigurarMesa(Baralho b{
  int i;

  for (i=0; i<5; i++){
    mesa[i] = b.comprarTrem();
  }
}

void Tabuleiro::AtualizaTabuleiro(int o, int c, int a, int d){
  MatrizInc[o][a].dono = d;
  MatrizInc[c][a].dono = d;
}//End AtualizaTabuleiro

CartaTrem compraMesa(Baralho b, int pos){
  for (int i = 0; i < 5; i++){
    if (CartaTrem[i] == 8) CartaTrem[i] = comprarTrem();
  }
}//End compraMesa
