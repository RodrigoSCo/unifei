#include<stdio.h>
#include<math.h>

int main()
{
    double a, b, c;
    printf("entre com um numero");
    scanf("%lf", &a);
        if(a>0)
        {   c = sqrt(a);
            b = pow(a,2);
             printf("o numero %lf eh positivo", a);
             printf("\n E elevado ao quadrado eh igual a %lf", b);
             printf("\n E sua raiz quadrada eh igual a %lf", c);
        }

        else
        {   c = sqrt(a);
            printf("o numero %lf eh negativo ou nulo", a);
        }

   return 0;
}
