#include <stdio.h>
#include <math.h>

int main()
    {
        float x, y, a, b, c, d;
        printf("Insira as coordenadas do ponto:  ");
        scanf("%f %f", &x, &y);
        printf("Insira os coeficientes da reta: ");
        scanf("%f %f %f", &a, &b, &c);
        d =((a*x)+(b*y)+c)/sqrt((a*a)+(b*b));
        printf(" A distancia entre o ponto e a reta eh %f", d );
        return 0;

    }
