#include<iostream>
using namespace std;
int main(){
    int qtdEntrada, numeros[101];
    cin >> qtdEntrada;

    for(int i=0; i < qtdEntrada; i++){
        cin >> numeros[i];
    }
    /// [2, 3, 11, 16, 60]
    for(int i = 0; i < qtdEntrada; i++){
        if(numeros[i] == 2){
            cout << "primo\n";
            continue;
        }
        if(numeros[i] % 2 == 0){
            cout << "composto\n";
            continue;
        }
        for(int j = 2; j < numeros[i]; j++){
            if(numeros[i] % j == 0){
                /// é divisivel => nao é primo
                cout << "composto\n";
            }
        }
        cout << "primo\n";
    }


    return 0;
}
