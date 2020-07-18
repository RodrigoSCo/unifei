#include <string>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <ctime>
#include <vector>
using namespace std;

int main(){
    string vet[7];
    vet[0]="abacate";
    vet[1]="beterraba";
    vet[2]="cocaina";
    vet[3]="asd";
    vet[4]="fgh";
    vet[5]="vbn";
    vet[6]="jkl";
    vet[7]="uio";
        vector<string> v;
        for(int j=0; j<7;j++){
            if(vet[j+1].compare(vet[j])<0){
                cout<<"batatinha";
                cout<<v.max_size();
            }
        }


    return 0;
}
