#include<stdio.h>

int main()
{
 char mer[51];
 float x, y;
 printf("Insira o nome da mercadoria: ");
 gets(mer);
  printf("\nInsira o valor da mercadoria: ");
  scanf("%f", &x);
  printf("\nNome da mercadora: %s", mer);
  printf("\nValor total da mercadora: %f", x);
  y = x*.1;
  printf("\nValor do deconto da mercadora eh: %f", y);
  x=x*.9;
  printf("\nValor da mercadora com desconto eh: %f", x);

  return 0;

}
