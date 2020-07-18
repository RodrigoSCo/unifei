#include<stdio.h>
#include<math.h>

int main()
{
    int a, b, c;
    printf("entre com um numero de 1 a 7:");
    scanf("%i", &a);
        switch(a)
        {
        case 1:
            printf("esse numero equivale ao domingo");
            break;
        case 2:
            printf("esse numero equivale ao segunda-feira");
            break;
        case 3:
            printf("esse numero equivale ao treca-feira");
            break;
        case 4:
            printf("esse numero equivale ao quarta-feira");
            break;
        case 5:
            printf("esse numero equivale ao quinta-feira");
            break;
        case 6:
            printf("esse numero equivale ao sexta-feira");
            break;
        case 7:
            printf("esse numero equivale ao sabado");
            break;
        default:
            printf("Entre com um numero de 1 a 7, por favor.");
            break;


        }

   return 0;
}
