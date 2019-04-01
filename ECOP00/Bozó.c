#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>

int pontos[11]={0,0,0,0,0,0,0,0,0,0,0},pontos2[11]={0,0,0,0,0,0,0,0,0,0,0};
int jogo =1, rodadas=1, jogadas[2]={1,1},cont=0, v[5]={0,0,0,0,0},d[5];
bool jogador;

void press_start()
{//WOrking
printf(" ██████╗ ███████╗███╗   ██╗███████╗██████╗  █████╗ ██╗\n");
printf("██╔════╝ ██╔════╝████╗  ██║██╔════╝██╔══██╗██╔══██╗██║\n");
printf("██║  ███╗█████╗  ██╔██╗ ██║█████╗  ██████╔╝███████║██║\n");
printf("██║   ██║██╔══╝  ██║╚██╗██║██╔══╝  ██╔══██╗██╔══██║██║\n");
printf("╚██████╔╝███████╗██║ ╚████║███████╗██║  ██║██║  ██║███████╗\n");
printf(" ╚═════╝ ╚══════╝╚═╝  ╚═══╝╚══════╝╚═╝  ╚═╝╚═╝  ╚═╝╚══════╝\n");
printf("\n\n                    Press Any Button\n\n\n\n");



system("pause");
system("cls");
}

void bubble_sort(int v[5])
{//WOrking
int i,j,menor,aux;
for(i=0;i<4;i++){
    menor=i;
    for(j=i+1;j<5;j++){
        if(v[j]<v[menor]){
            menor=j;
        }
    }
    aux=v[i];
    v[i]=v[menor];
    v[menor]=aux;

}
}

void dado_begin(char m[5][9],int num)
{//WOrking

    int k,i, j;
    for(i=0; i<5; i++)
    {
        for(j=0; j<9; j++)
        {
            if(i==0||i==4)
            {
                m[i][j]='─';
            }
            else if (j==0||j==8)
            {
                m[i][j]='│';
            }
            else
                m[i][j]=' ';
        }
    }

    switch (num)
    {
    case 1:
        m[2][4]='•';
        break;
    case 2:
        m[1][6]='•';
        m[3][2]='•';
        break;
    case 3:
        m[1][6]='•';
        m[3][2]='•';
        m[2][4]='•';
        break;
    case 4:
        m[1][6]='•';
        m[3][2]='•';
        m[1][2]='•';
        m[3][6]='•';
        break;
    case 5:
        m[1][6]='•';
        m[3][2]='•';
        m[1][2]='•';
        m[3][6]='•';
        m[2][4]='•';
        break;
    case 6:
        m[1][6]='•';
        m[3][2]='•';
        m[1][2]='•';
        m[2][2]='•';
        m[2][6]='•';
        m[3][6]='•';
        break;
    }

    m[0][0]='╭';
    m[4][0]='╭';
    m[0][8]='╮';
    m[4][8]='╭';
}

void dados_tela(char tela[15][30],char a[5][9],char b[5][9],char c[5][9],char d[5][9],char e[5][9])
{//WOrking
    int i, j;
    for(i=0; i<5; i++)
    {
        for(j=0; j<9; j++)
        {
            tela[i+1][j+1]= a[i][j];//dado1
        }
    }
    for(i=0; i<5; i++)
    {
        for(j=0; j<9; j++)
        {
            tela[i+1][j+11]= b[i][j];//dado 2
        }
    }
    for(i=0; i<5; i++)
    {
        for(j=0; j<9; j++)
        {
            tela[i+1][j+21]= c[i][j];//dado 3
        }
    }
    for(i=0; i<5; i++)
    {
        for(j=0; j<9; j++)
        {
            tela[i+7][j+5]= d[i][j];//dado 4
        }
    }
    for(i=0; i<5; i++)
    {
        for(j=0; j<9; j++)
        {
            tela[i+7][j+16]= e[i][j]; // dado 5
        }
    }
}

void pontos_tela(char dig,bool jogador)
{//WOrking
    pontos2[10]=0;
    pontos[10]=0;
    bubble_sort(v);
    /*Indice de pontos
    0->General
    1->Numero de 1s
    2->Numero de 2s
    3->Numero de 3s
    4->Numero de 4s
    5->Numero de 5s
    6->Numero de 6s
    7->Full
    8->Seguida
    9->Quadra*/
        switch (dig){
    case '0':
    //General
    if((v[0]==v[1] && v[1]==v[2] && v[2]==v[3] && v[3]==v[4] && v[4]==v[0])&&v[0]!=0)
    {   if(jogador==0){
            pontos[0]+=50;
            if(rodadas==1){
                pontos[0]+=60;
                jogo=0;
            }
        }
         if(jogador==1){
                pontos2[0]+=50;
                if(rodadas==1){
                    pontos2[0]+=60;
                    jogo=0;
                }
            }
    }
    break;

    case '1':
    //Numero de 1s
    for(int i=0;i<5;i++){
        if(v[i]==1){
            if(jogador==0){
            pontos[1]+=1;
            }
            if(jogador==1){
            pontos2[1]+=1;
            }
        }
    }
    break;
    case '2':
    //Numero de 2s
    for(int i=0;i<5;i++){
        if(v[i]==2){
            if(jogador==0){
            pontos[2]+=2;
            }
            if(jogador==1){
            pontos2[2]+=2;
            }
        }

    }break;
    case '3':
    //Numero de 3s
    for(int i=0;i<5;i++){
        if(v[i]==3){
            if(jogador==0){
            pontos[3]+=3;
            }
            if(jogador==1){
            pontos2[3]+=3;
            }
        }
    }
    break;
    case '4':
    //Numero de 4s
    for(int i=0;i<5;i++){
        if(v[i]==4){
            if(jogador==0){
            pontos[4]+=4;
            }
            if(jogador==1){
            pontos2[4]+=4;
            }
        }
    }

    break;
    case '5':
    //Numero de 5s
    for(int i=0;i<5;i++){
        if(v[i]==5){
            if(jogador==0){
            pontos[5]+=5;
            }
            if(jogador==1){
            pontos2[5]+=5;
            }
        }
    }
    break;
    case '6':
    //Numero de 6s
    for(int i=0;i<5;i++){
        if(v[i]==6){
            if(jogador==0){
            pontos[6]+=6;
            }
            if(jogador==1){
            pontos2[6]+=6;
            }
        }
    }
    break;
    case '7':
    //Full House
    if((v[0]==v[1] && v[1]==v[2] && v[3]==v[4] || v[0]==v[1] && v[2]==v[3] && v[3]==v[4])&& v[0]!=0 && v[4]!=0 ){
            if(jogador==0){
                pontos[7]+=20;
                if(rodadas==1) pontos[7]+=5;
            }
            if(jogador==1){
                pontos2[7]+=20;
                if(rodadas==1) pontos2[7]+=5;
            }
    }
    break;
    case '8':
    //Seguida
    if((v[0]==1 && v[1]==2 && v[2]==3 && v[3]==4 && v[4]==5)||(v[0]==2 && v[1]==3 && v[2]==4 && v[3]==5 && v[4]==6)){
            if(jogador==0){
                pontos[8]+=30;
                if(rodadas==1) pontos[8]+=5;
            }
            if(jogador==1){
                pontos2[8]+=30;
                if(rodadas==1) pontos2[8]+=5;
            }
    }


    break;
    case '9':
    //Quadra
    if(((v[0]==v[1] && v[1]==v[2] && v[2]==v[3])||(v[1]==v[2] && v[2]==v[3] && v[3]==v[4]))&& v[2]!=0 ){
            if(jogador==0){
                pontos[9]+=40;
                if(rodadas==1) pontos[9]+=5;
            }
            if(jogador==1){
                pontos2[9]+=40;
                if(rodadas==1) pontos2[9]+=5;
            }


    }
    break;

        }
    for(int k=0;k<10;k++){

            pontos[10]+=pontos[k];

            pontos2[10]+=pontos2[k];

    }
}
void tela_begin(char m[15][30])
{//WOrking

    for(int i=0; i<15; i++)
    {
        for(int j=0; j<30; j++)
        {
            m[i][j]=' ';
        }
    }


    m[6][4]='[';
    m[6][5]='1';
    m[6][6]=']';

    m[6][14]='[';
    m[6][15]='2';
    m[6][16]=']';

    m[6][24]='[';
    m[6][25]='3';
    m[6][26]=']';

    m[12][8]='[';
    m[12][9]='4';
    m[12][10]=']';

    m[12][19]='[';
    m[12][20]='5';
    m[12][21]=']';



}

void tela_print(char m[15][30])
{//WOrking
    int i, j;
    for(i=0; i<15; i++)
    {
        for(j=0; j<30; j++)
        {
            printf("%c", m[i][j]);
        }

        if(i==1){printf("   Jogador: %d",jogador+1);}
        if(i==2){printf("   Rodada: %d",rodadas);}
        if(i==3){printf("   Jogada #1: %d",jogadas[0]);}
        if(i==4){printf("   Jogada #2: %d",jogadas[1]);}
        if(i==5){printf("   Pontos #1: %d",pontos[10]);}
        if(i==6){printf("   Pontos #2: %d",pontos2[10]);}
        printf("\n");
    }
}

void general(char dig)
{
    char select,tela[15][45],dado1[5][9],dado2[5][9],dado3[5][9],dado4[5][9],dado5[5][9];
    int i;
    cont=0;

    while(jogo)
    {
        for(i=0;i<=4;i++){
            if(v[i]==0){
                d[i]= ((rand()%6)+1);

            }
        }
            dado_begin(dado1,d[0]);
            dado_begin(dado2,d[1]);
            dado_begin(dado3,d[2]);
            dado_begin(dado4,d[3]);
            dado_begin(dado5,d[4]);
        tela_begin(tela);
        dados_tela(tela,dado1,dado2,dado3,dado4,dado5);
        tela_print(tela);
        printf("Dados Selecionados: ");
        for(i=0;i<=4;i++){
            if(v[i]!=0){
                printf("%d ",i+1);

            }
        }
        printf("\nQuantos dados gostaria de selecionar?\n Caso queira encerrar esta rodada aprete 'x'!! ");
        dig=getch();
        printf("%c",dig);

    switch(dig){

    case '1'...'5':
        printf("\nDigite quais dados quer selecionar:");
        for(i=0;i<(dig-48);i++){
            select=getch();
            printf(" %c",select);
            v[select-49]=d[select-49];
            cont++;
        }

    break;

    case 'x':
        break;
    default:
        printf("Por favor digite um valor valido e jogue novamente");
        rodadas--;
        break;
    }
        if(rodadas==3||cont==5){
            //printf com opões de menu
            printf("\nIndice de pontos\n0->General             1->Numero de 1s\n2->Numero de 2s        3->Numero de 3s\n4->Numero de 4s        5->Numero de 5s\n6->Numero de 6s        7->Full House\n8->Seguida             9->Quadra\n");
            dig = getch();
            pontos_tela(dig,jogador);
            cont=0;
            rodadas=1;
            jogadas[jogador]++;
            jogador--;
            v[0]=0;
            v[1]=0;
            v[2]=0;
            v[3]=0;
            v[4]=0;
        }
        else rodadas++;
        if(jogadas[0]==13&&jogadas[1]==13) jogo=0;
        system("cls");
    }
}
int main()
{
    char dig;
    srand(time(NULL));
    press_start();
    general(dig);
    return 0;
}
