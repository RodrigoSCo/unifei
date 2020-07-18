#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define VAZIO ' '
#define PAREDE '|'
#define OBSTACULO 'o'
#define JOGADOR '^'

void map_begin(char m[20][20])
{
    int i, j;
    for(i=0; i<20; i++)
    {
        for(j=0; j<20; j++)
        {
            m[i][j] = VAZIO;
            if(j==4||j==15)
                m[i][j] = PAREDE;
        }
    }
}
void print_map(char ma[20][20],int n)
{
    int i, j;
    for(i=0; i<20; i++)
    {
        printf("\n");
        for(j=0; j<20; j++)
        {
            if(i==19&& j==n)
                printf("%c", JOGADOR);
            else
                printf("%c", ma[i][j]);
        }
    }

}
void map_update(char mn[20][20])
{
    int i,j,pos_helicoptero;
    for(i=18; i>=0; i--)
    {
        for(j=0; j<20; j++)
        {
            mn[i+1][j] = mn[i][j];
        }
    }
        for(j=0; j<20; j++)
        {
            mn[0][j] = VAZIO;
            if(j==4||j==15)
                mn[0][j] = PAREDE;

        }
        if((rand() % 100) < 30)
        {
            pos_helicoptero = 5 + (rand() % 10);
            mn[0][pos_helicoptero] = OBSTACULO;
        }
    }
    int main()
    {
        char dig, mapa[20][20];
        int col_parede, col_jogador = 10;
        map_begin(mapa);
        print_map(mapa, col_jogador);
        while(mapa[19][col_jogador] != OBSTACULO)
        {
            dig = getch();
            if((dig == 'a' || dig == 'A') && (col_jogador > 5))
            {
                col_jogador--;
                system("cls");
                map_update(mapa);
                print_map(mapa, col_jogador);
            }
            if((dig == 'd' || dig == 'D') && (col_jogador < 14))
            {
                col_jogador++;
                system("cls");
                map_update(mapa);
                print_map(mapa, col_jogador);
            }
            if((dig == 'w' || dig == 'W'))
            {
                system("cls");
                map_update(mapa);
                print_map(mapa, col_jogador);
            }
        }


 return 0;    }
