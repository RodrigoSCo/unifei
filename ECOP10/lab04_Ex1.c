#include<stdio.h>

int main()
{
int  i=0, soma=0;
    while (i<=100)
    {
     if (i%5==0)
        soma=i+soma;
        else
        {
         if(i%3==0)
         soma=i+soma;

        }
            i++;
    }
    printf("A soma dos multiplos de 3 e 5 ate 100 eh %d ", soma);
    return 0;
}
