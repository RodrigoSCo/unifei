#include<stdio.h>

int main()
{
int A[5][5]={11,12,13,14,15,1,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35}, d = 0;
int  i = 0 , j = 0 , pri=0, sec=0;

    for(i=0;i<5;i++)
        for(j=0;j<5;j++)
            {
                if(i==j)
                pri=A[i][j]+pri;

            }
            while(j!=5)
            { i=5; j=1;
              sec= A[i][j]+sec;
              i--; j++;

            }
            d= pri-sec;
            printf("A difenenca entre as diagonais eh: %f", d);

}
