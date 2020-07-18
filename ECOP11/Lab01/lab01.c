#include <stdio.h>

int main()
{
	float gra, rad;
	printf("digite o angulo em graus: \n");
	scanf("%f", &gra);
	rad = gra* 3.14159265/180;
	printf("%f graus = %f radianos\n", gra, rad);
	return 0;
}
