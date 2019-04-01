#include <stdio.h>
#include <stdlib.h>

int main()
{
    double s, v, f;
    printf("Insira o salario fixo e seu total de vendas: ");
    scanf("%lf %lf" , &s , &v);
    f = s+(v*0.15);
    printf(" Seu salario desse mes eh %.2lf", f);
    return 0;
}

