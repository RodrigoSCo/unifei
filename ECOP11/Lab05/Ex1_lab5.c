#include<stdio.h>

int main()
{ int A[6], B[6], i=0, a=0, b=0, x=0;
        printf("Insira 6 valores para o vetor A:");
        for (a = 0; a < 6; a++)
                scanf("%d", &A[a]);

        printf("Insira 6 valores para o vetor B:");
        for (b = 0; b < 6; b++)
                scanf("%d", &B[b]);

        printf("Esses sao os numeros que a e b tem em comum; ");
     printf("%i", A[0]);
     for(i=0;i<6;i++)
     {
       for(x=0;x<6;x++)
        {
         if(B[x] == A[i]){
            printf("\n n=%i ", A[i]);
                 printf("x=%i ", x);
                    printf("i=%i ", i);}
        }
     }
return 0;



}
