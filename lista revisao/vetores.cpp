#include<iostream>
using namespace std;

int main() {

    int qtdEntradas, contador1, contador2;
    long long int resultado;
    cin >> qtdEntradas;
    long long int entradas[qtdEntradas + 1];

    for(int i = 0; i < qtdEntradas*2; i++) {
        cin >> entradas[i];
    }

    contador1 = 0; contador2=1;
    for(int i = 0; i < qtdEntradas; i++){
        resultado = entradas[contador1] * entradas[contador2];
        cout << resultado << endl;
        contador1 += 2;
        contador2 += 2;
    }

    return 0;
}
