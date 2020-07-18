#include <string>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <ctime>
using namespace std;
//Bubble Sort
void bubble(string *vet, int n){
    string aux;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1-i;j++){
            if(vet[j+1].compare(vet[j])<0){
                aux=vet[j];
                vet[j]=vet[j+1];
                vet[j+1]=aux;
            }
        }
    }
}
//Selection Sort
void selection(string *vet, int n){
    int menor;
    for(int i=0;i<n-1;i++){
        menor=i;
        string aux;
        for(int j=(i+1);j<n;j++)
            if(vet[j].compare(vet[menor])<0) menor=j;
        aux=vet[i];
        vet[i]=vet[menor];
        vet[menor]=aux;
    }
}
//Insertion Sort
void insertion(string *vet, int n){
    int j;
    string aux;
    for(int i=1;i<n;i++){
        aux=vet[i];
        for(j=i-1;(j>=0 && (vet[j].compare(aux)>0));j--)
            vet[j+1]=vet[j];
        vet[j+1]=aux;
    }
}
//Shell Sort
void shell(string *vet, int n){
    int j,h;
    string aux;
    h=n/2;
    while(h>=1){
        for(int i=1;i<n;i++){
            aux=vet[i];
            for(j=i-h;(j>=0 && (vet[j].compare(aux)>0));j=j-h)
                vet[j+h]=vet[j];
            vet[j+h]=aux;
        }
        h=h/2;
    }
}

void mergeIntercale(string *vet, string *aux, int ini, int meio, int fin){
    int atual, fimEsq, n;
    atual=ini;
    fimEsq = meio-1;
    n=fin-ini+1;
    while((ini<=fimEsq)&&(meio<=fin)){
        if(vet[ini]<=vet[meio])
            aux[atual++]=vet[ini++];
        else aux[atual++]=vet[meio++];
    }
    while(ini<=fimEsq)
        aux[atual++]=vet[ini++];
    while(meio<=fin)
    aux[atual++]=vet[meio++];
    for(int i=0; i<n; i++){
        vet[fin]=aux[fin];
        fin--;
    }
}
void mergeDivide(string *vet, string *aux, int ini, int fin){
    int meio;
    if(fin>ini){
        meio=(ini+fin)/2;
        mergeDivide(vet,aux, ini,meio);
        mergeDivide(vet,aux, meio+1, fin);
        mergeIntercale(vet,aux, ini,meio+1, fin);
    }
}
/*void mergeSort(string vet, int n){
    string *aux[n];
    mergeDivide(vet,aux,0,n-1);
}*/

void printSortsExecutionTime(int n){
    /*
    Esta função é para retirar as palavras do arquivo e coloca-las
    em um vetor e depois calcular e imprimir cada um dos metodos de
    ordenação.
    */
    ifstream nameFileout ("aurelio40000.txt");
    string vetor[n],vetorUse[n];
    string palavra;
    int line=0;
    cout<<"I am here\n";
    //Tira as palavras do arquivo e põe nos dois vetores
    //Dois vetores um para armazenar as palavras e outro para ser ordenado
    while(getline(nameFileout,palavra)){
        string s;
        int i;
        for(i=0;i<(palavra.size());i++){
            s=s+palavra[i];
        }
        vetor[line]=s;
        vetorUse[line]=s;
        if(line>=n) break;
        line++;
    }
    cout<<"I am here\n";
    int tempoInicial,tempoFinal;
    //tempo de cada metodo separado caso eu precise mudar a
    //forma como são impressos para facilitar na hora de passar
    //para as planilhas
    int tempoBubble,tempoInsertion, tempoSelection;

    tempoInicial=(int)clock();
    bubble(vetorUse,n);
    tempoFinal =(int)clock();
    tempoBubble = ((tempoFinal-tempoInicial)*1000/CLOCKS_PER_SEC);
    cout<<"Bubble Sort: "<<tempoBubble<<" ms \n";
    for(int i=0;i<n;i++) vetorUse[i]=vetor[i];

    tempoInicial=(int)clock();
    selection(vetorUse,n);
    tempoFinal =(int)clock();
    tempoSelection = ((tempoFinal-tempoInicial)*1000/CLOCKS_PER_SEC);
    cout<<"Selection Sort: "<<tempoSelection<<" ms \n";
    for(int i=0;i<n;i++) vetorUse[i]=vetor[i];

    tempoInicial = (int)clock();
    insertion(vetorUse,n);
    tempoFinal =(int)clock();
    tempoInsertion = ((tempoFinal-tempoInicial)*1000/CLOCKS_PER_SEC);
    cout<<"Insertion Sort: "<<tempoInsertion<<" ms \n";
    for(int i=0;i<n;i++) vetorUse[i]=vetor[i];
}
int main(){
/*
    colocar os dados numa planilha
    plotar os graficos e passa-los juntamente com o codigo para o relatorio
    1. Gráfico de linhas com as curvas obtidas para os 6 algoritmos.
    2. Gráfico de linhas com as curvas obtidas apenas para Insertion, Shell e Merge Sort.
    3. Gráfico de linhas com as curvas obtidas apenas para Merge e Quick Sort.
*/
    int n;
    n = 1000;  cout<<n<<'\n';printSortsExecutionTime(n);
    n = 5000;  cout<<n<<'\n';printSortsExecutionTime(n);
    n = 10000; cout<<n<<'\n';printSortsExecutionTime(n);
    n = 15000; cout<<n<<'\n';printSortsExecutionTime(n);
    n = 20000; cout<<n<<'\n';printSortsExecutionTime(n);
    n = 30000; cout<<n<<'\n';printSortsExecutionTime(n);
    n = 40000; cout<<n<<'\n';printSortsExecutionTime(n);
    return 0;
}
