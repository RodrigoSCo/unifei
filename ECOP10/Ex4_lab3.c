#include<stdio.h>
#include<math.h>

int main()
{
    int a, b, c;
    printf("entre com os lados de um triangulo:");
    scanf("%i %i %i", &a, &b, &c);
        if((a == b) && (b == c ))
             printf("\n Esse triangulo eh equilatero");
        else
        {
            if ((a+b<=c)||(c+b<=a)||(a+c<=b))
                printf("\n Esse triangulo eh invalido.");

                else
                {
                    if(( a != b )&&(b != c)&&(a != c))
                        printf("\n Esse triangulo eh escaleno");

                    else
                        printf("Esse triangulo eh isoceles");
                }




        }

   return 0;
}
