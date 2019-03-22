#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{   int a,b,i=0,j=0,B , x, y;
    char jogo[10][10]={' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};
    char visual[10][10]={'?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?','?'};
    int lin, col;
        printf("Quantas bombas deseja:");
        scanf("%i", &B);
        srand(time(NULL));
        for(a=0;a<B;a++){
            lin = rand() % 10;
            col = rand() % 10;
            jogo[lin][col]='*';
        }

 for(a=0;a<10;a++){
    printf("\n");
    for(b=0;b<10;b++)
        printf("%c ", visual [a][b]);
 }
 for(i=0;i<10;i++){
    printf("\n");
    for(j=0;j<10;j++){
        if (jogo[i][j]==' '){
            jogo[i][j]=48;
        if (jogo[i+1][j]=='*')
            jogo[i][j]++;
        if (jogo[i-1][j]=='*')
            jogo[i][j]++;
        if (jogo[i][j+1]=='*')
             jogo[i][j]++;
        if (jogo[i][j-1]=='*')
             jogo[i][j]++;
        if (jogo[i-1][j-1]=='*')
             jogo[i][j]++;
        if (jogo[i+1][j-1]=='*')
             jogo[i][j]++;
        if (jogo[i-1][j+1]=='*')
             jogo[i][j]++;
        if (jogo[i+1][j+1]=='*')
             jogo[i][j]++;}
            }
 } for(a=0;a<10;a++){
    printf("\n");
    for(b=0;b<10;b++)
        printf("%c ", jogo [a][b]);}
while(2<3){
        printf("\nEscolha uma linha e uma coluna: ");
        scanf("%i %i", &x, &y);
        system ("cls");
        visual[x][y]= jogo [x][y];
        for(a=0;a<10;a++){
    printf("\n");
    for(b=0;b<10;b++)
        printf("%c ", visual [a][b]);}
        if(jogo[x][y]=='*'){
         printf("Voce achou uma bomba, voce perdeu!");
         break;}
}

return 0;
}

