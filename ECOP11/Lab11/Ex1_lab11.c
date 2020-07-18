#include<stdio.h>
#include <stdlib.h>
#include <time.h>
void vet_set (int vetor[], int t)
{

    int i, j;

    // inicializa semente aleatória
    srand(time(NULL));

    // inicializa vetor com valores aleatórios
    // entre 0 e 99
    for(i = 0; i < t; i++)
        vetor[i] = rand() % 100;

}
void print_vet(int vet[], int t)
{
    int i;
    for(i = 0; i < t; i++)
        printf("%d ", vet[i]);




}
void bubble(int vet[], int tam)
{
    int i, j, aux;

    for(i = 0; i < tam; i++)
    {
        for(j = 0; j < tam - 1 - i; j++)
        {
            if(vet[j+1] < vet[j])
            {
                aux = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = aux;
            }
        }
    }
}
int bin_src(int v[], int key, int bgn, int end)
{
    int med;
    med=(end+bgn)/2;
    if(v[med]==key)
        return med;
    else if(end==bgn)
        return -1;
    else if(v[med]< key)
        return bin_src(v, key, med+1, end);
    else
        return bin_src(v, key, bgn, med-1);


}
int main ()
{
    int v[25], key, p;
    srand(time(NULL));
    vet_set(v, 25);
    printf("Vetor Gerado: ");
    print_vet(v,25);

    bubble(v,25);
    printf("\n Vetor Ordenado: ");
    print_vet(v,25);
    do
    {
        printf("\nEntre com um elemento para busaca ou -1 para sair:");
        scanf("%d", &key);
        if(key> -1)
        {
            p=bin_src(v, key, 0, 24);
            if(p==-1)
                printf("\nElemento não encontrado.\n");
            else
                printf("\nElemento encontrado na posicao %i. \n", p);
        }
    }
    while(key!=-1);

}
