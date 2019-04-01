#include<stdio.h>

int main()
{ int i=0, b=0,M[12]={0}, y=0, z, u=0;
    do{
        printf("1- Entre com o mes e a quantidade de dias com chuva naquele mes:\n2- Sair e apresentar grafico\n Sua Opcao foi: ");
        scanf("%i", &y);

    switch(y)
        {
        case 1:
         printf("Mes: ");
            scanf("%i", &i);
            i--;
            printf("Dias com Chuva: ");
            scanf("%i", &M[i]);

            break;
        case 2:
             for(i=0;i<12;i++)
                {
                 if((M[i]>0)&&(M[i]<31))
                 {z=i+1;
                    printf("\n%i->", z);

                    for(b=0;b<M[i];b++)
                    printf("*");
                    }
                    else if (M[i]<0)
                    {
                            printf("\n%i->", z);
                            printf("Valores negativos sao invalidos");
                    }



                }
                break;

        }
}while(y!=2);

return 0;



}
