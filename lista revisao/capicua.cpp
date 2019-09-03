#include<iostream>
#include <vector>
using namespace std;

int capicua(int numero);
int fazedorDeNumeroQuebrado(int centena, int dezena, int unidade);

int main() {

    int quantidade;
    int leituras[1000];
    cin >> quantidade;

    for(int i = 0; i < quantidade; i++) {
        cin >> leituras[i];
    }

    for(int i = 0; i < quantidade; i++){
        capicua(leituras[i]);
        if(quantidade - i > 1){
            cout << " ";
        } else {
            cout << endl;
        }
    }


    return 0;
}

int fazedorDeNumeroQuebrado(int milhar, int centena, int dezena, int unidade){
    return milhar*1000 + centena*100 + dezena*10 + unidade;
}

int capicua(int numero) {

    int unidade, dezena, centena, milhar;

    milhar = numero / 1000;
    centena = (numero % 1000) / 100;
    dezena = ((numero % 1000) % 100) / 10;
    unidade = ((numero % 1000) % 100) % 10;

    int resultado = fazedorDeNumeroQuebrado(unidade, dezena, centena, milhar);

    if(resultado == numero) {
        cout << "yes";
    } else {
        cout << "no";
    }

    return 0;
}
