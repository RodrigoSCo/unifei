#include<stdio.h>

int main()
{
int  i=0, ii=1, fib, x, a=2;
    printf("Insira a quantidade de numeros que deseje da seuqncia de fibonacchi: ");
    scanf("%d", &x);
    printf("A sequencia que voce desejou foi:%d %d ", i, ii);

 while(x!=a)
{

    fib = i+ii;
    i = ii;
    ii = fib;
    printf("%d ", fib);
    a++;
}


    return 0;
}
