#include<stdio.h>

float main()
{



    float A[4][3], s = 0, r=0;
    int i = 0 , j = 0 ;

    for(i=0;i<4;i++)
        for(j=0;j<3;j++)
            { printf("Insira o numero da %i linha e da %i coluna",i , j);
                scanf("%f", &r);
                A[i][j]=r;
                s = s + A[i][j];
            }
            printf("A soma de todos os elementos da matriz eh: %f", s);

}
