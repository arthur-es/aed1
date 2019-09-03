#include<iostream>
#include <typeinfo>
#include<string>
using namespace std;

int fazedorDeNumeroQuebrado(int centena, int dezena, int unidade){
    return centena*100 + dezena*10 + unidade;
}

int main() {

    int num1, num2;
    cin >> num1;
    cin >> num2;

    int centena = (num1 / 100);
    int dezena = (num1 % 100) / 10;
    int unidade = (num1 % 100) % 10;

    int centenaNum2 = (num2 / 100);
    int dezenaNum2 = (num2 % 100) / 10;
    int unidadeNum2 = (num2 % 100) % 10;


    ///MANDO COM UNIDADE <-> CENTENA INVERTIDOS
    num1 = fazedorDeNumeroQuebrado(unidade, dezena, centena);
    num2 = fazedorDeNumeroQuebrado(unidadeNum2, dezenaNum2, centenaNum2);

    if(num1 > num2){
        cout << num1;
    } else {
        cout << num2;
    }

    return 0;
}
