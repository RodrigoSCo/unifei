#include<stdio.h>

int main()
{
int  ny=0, h=0, ro=0, b=0, n=0, x;

    do
    {
     printf("Neymar = 10\nHulk = 20\nRicardo Oliveira = 30\nBranco = 0\nNulo = qualquer numero\n");
    printf("Insira o codigo do Jogador que voce deseja que seja escalado: ");
    scanf("%d", &x);

        switch(x)
        {
        case 0:
            b++;
            printf("obrigado pela colaboração");
            system ("cls");
            break;
        case 10:
            ny++;
            printf("obrigado pela colaboração");
            system ("cls");
            break;
        case 20:
            h++; printf("obrigado pela colaboração");
            system ("cls");
            break;
        case 30:
            ro++;
            printf("obrigado pela colaboração");
            system ("cls");
            break;
        case 12345:
            system ("cls");
            printf("Eleicao encerrada, e o resultado da votacao eh:\nNeymar %d\nHulk %d\nRicardo Oliveira %d\nBranco %d\nNulo %d\n", ny, h, ro, b, n);
            break;
        default:
            n++;
            printf("insira um numero valido");
            system ("cls");
            break;
        }

        } while(x != 12345);

    return 0;
}
