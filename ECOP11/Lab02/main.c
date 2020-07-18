#include <stdio.h>
#include <stdlib.h>

int main()
    {
        float p1, p2, p3, p4, p5, r;
        printf("Insira o o raio da primeira pista;  ");
        scanf("%f", &r );
            p1=2*3.14159265*r;
            p2=2*3.14159265*r+1;
            p3=2*3.14159265*r+2;
            p4=2*3.14159265*r+3;
            p5=2*3.14159265*r+4;
        printf(" O perimetro de cada pista eh: %.5f, %.5f, %.5f, %.5f, %.5f",p1, p2, p3, p4, p5);
        return 0;

    }
