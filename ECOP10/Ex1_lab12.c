#include<stdio.h>
#include<stdlib.h>
#include<time.h>


struct carta
{
    int valor;
    char naipe;
};
typedef struct carta carta_t;

void inicializa_baralho(carta_t vet[])
{
    int i, j;
    for(i=0; i<40; i++)
    {

        if(i>=30)
        {
            j=i-29;
            vet[i].valor = j;
            vet[i].naipe = 3;}
            if(i>=20&&i<30)
            {
                j=i-19;
                vet[i].valor = j;
                vet[i].naipe = 4;
            }
            if(i>=10&&i<20)
            {
                j=i-9;
                vet[i].valor = j;
                vet[i].naipe = 5;
            }
            if(i<10)
            {
                vet[i].valor = i+1;
                vet[i].naipe = 6;
            }

        }

    }
    void embaralha(carta_t vet[])
    {
        int k,c,i,j,ax;
        char aux;
        for(i=0; i<40; i++)
        {
            k = rand()%40;
            c = rand()%40;
            ax=vet[k].valor;
            vet[k].valor=vet[c].valor;
            vet[c].valor=ax;
            aux=vet[k].naipe;
            vet[k].naipe=vet[c].naipe;
            vet[c].naipe=aux;

        }
    }



// prototipo de funções
    void inicializa_baralho(carta_t[]);
    void embaralha(carta_t[]);
// Função Principal
    int main()
    {
        int i;
// Baralho com 40 cartas (A to K, copas to espadas)
        carta_t baralho[40];
// Dá valores às cartas
        inicializa_baralho(baralho);
        for(i=0; i<40; i++)
        {
            printf("%i %c\n", baralho[i].valor, baralho[i].naipe);
        }
// Embaralha
        srand(time(NULL));
        embaralha(baralho);
// Distribuindo cartas
        printf("Jogador 1 recebe: \n");
        printf("%d %c \n", baralho[0].valor, baralho[0].naipe);
        printf("%d %c \n", baralho[1].valor, baralho[1].naipe);
        printf("%d %c \n\n", baralho[2].valor, baralho[2].naipe);
        printf("Jogador 2 recebe: \n");
        printf("%d %c \n", baralho[3].valor, baralho[3].naipe);
        printf("%d %c \n", baralho[4].valor, baralho[4].naipe);
        printf("%d %c \n\n", baralho[5].valor, baralho[5].naipe);
        printf("Carta Virada: %d %c \n\n", baralho[6].valor, baralho[6].naipe);
        return 0;
    }
