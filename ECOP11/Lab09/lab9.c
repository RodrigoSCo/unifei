#include<stdio.h>
void inicializaMatriz();
void bracorobo();
char printaM();
int imprimeOpcoes();
char tela[10][10];
int m[10][10], linhas=0, colunas=0, x=0, pc=0, k=0;
int main()
{

    int a=10,b=10,c=7;
    inicializaMatriz();
    printaM();

    do{
    imprimeOpcoes(&c);
    bracorobo(c);// ver como faz isso
    } while(c!=7);

    return 0 ;
}
void inicializaMatriz()
{
    int a=10, b=10;
    for (a=10; a!=0; a--)
    {
        for (b=10; b!=0; b--)
        {
            m[a][b]=0;
        }
    }
}
void bracorobo(int c)
{ linhas=0;

    switch(c)
    {
    case 1:
        pc = 0;
        break;
    case 2:
        pc = 1;
        break;
    case 3:
        printf("Digite quantas casas a esquerda deseja andar");
        x=colunas;
        scanf("%i", &colunas);
        if(pc=1)
        {
            for(k=0; k!=colunas; k++){
                m[k+x][linhas]=1;}
        }system ("cls");
                printaM();
        break;
    case 4:
        printf("Digite quantas casas a direita deseja andar");
        x=colunas;
        scanf("%i", &colunas);
        if(pc=1)
        {
            for(k=0; k!=colunas; k++)
                m[k-x][linhas]=1;
        }system ("cls");
                printaM();
        break;
    case 5:
        printf("Digite quantas casas a cima deseja andar");
        x=linhas;
        scanf("%i", &linhas);
        if(pc=1)
        {
            for(k=0; k!=linhas; k++)
                m[colunas][1+x]=1;
        }system ("cls");
                printaM();
        break;
    case 6:
        printf("Digite quantas casas a baixo deseja andar");
        x=linhas;
        scanf("%i", &linhas);
        if(pc=1)
        {
            for(k=0; k!=linhas; k++)
                m[colunas][x-1]=1;
        }system ("cls");
                printaM();
        break;
    case 7:

        break;

    default :
        printf("insira um numero valido\n");
        system("pause");
        system ("cls");
                printaM();
        break;
    }
}
char printaM()
{
    int a=10, b=10;
    for (a=10; a!=0; a--)
    { printf("\n");
        for (b=10; b!=0; b--)
        {
            if(m[a][b]==0)
                tela[a][b]=' ';
            else if(m[a][b]==1)
                tela[a][b]='*';
            printf("%c ", tela[a][b]) ;
        }
    }
}
int imprimeOpcoes(int *c)
{
    printf("\n1-> Caneta para cima");
    printf("\n2-> Caneta para baixo");
    printf("\n3-> Anda para esquerda");
    printf("\n4-> Anda para direita");
    printf("\n5-> Anda para cima");
    printf("\n6-> Anda para baixo");
    printf("\n7-> Termina o desenho");
    scanf("%i", c);
}








