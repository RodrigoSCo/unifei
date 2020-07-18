#include<stdio.h>
#include<math.h>

int main()
{
    int a, b, c;
    printf("entre com sua idade:");
    scanf("%i", &a);
        if((a<=7) && (a>4))
             printf("\n vc pertence a categoria Infantil A");
        else
        {   if((a<=10) && (a>7))
             printf("\n vc pertence a categoria Infantil B");
            else
            {   if((a<=13) && (a>10))
                    printf("\n vc pertence a categoria Junior A");
                else
                {   if((a<=17) && (a>13))
                    printf("\n vc pertence a categoria Junior B");
                    else
                    {   if(a>17)
                        printf("\n vc pertence a categoria Senior");
                        else
                        printf("\n vc eh muito novo para entrar qualquer uma das categorias.");


                    }
                }

            }

        }

   return 0;
}
