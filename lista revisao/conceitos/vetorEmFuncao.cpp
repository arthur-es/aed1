#include<iostream>
using namespace std;

void imprimeVetor(int *vetor, int tamanho){

    for(int i =0; i < tamanho; i++){
        cout << vetor[i] << endl;
    }

}

void incrementaValoresPor(int *vetor, int tamanho, int valorParaIncrementar){
    for( int i = 0; i < tamanho; i++) {
         vetor[i] += valorParaIncrementar;
    }
}


int main(){
    int vetor[4] = {1,2,3,4};

    imprimeVetor(vetor, 4);
    incrementaValoresPor(vetor, 4, 9);
    cout << endl;
    imprimeVetor(vetor, 4);

    return 0;
}
