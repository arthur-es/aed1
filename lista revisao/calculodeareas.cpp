#include<iostream>
#include <math.h>       /* round, floor, ceil, trunc */
using namespace std;
///CONSTANTES
double PI = 3.14159265;

///FUNCOES
int calcAreaCirculo(float raio);
int calcAreaElipse(float raioMaior, float raioMenor);
int calcAreaTrapezio(float baseMaior, float baseMenor, float altura);
int calcAreaTriangulo(float a, float b, float c);

int main() {
    int qtdEntrada;
    char figura;
    cin >> qtdEntrada;
    for(int i =0; i< qtdEntrada; i++){
        cin >> figura;

        switch(figura){
            case 'C':
                //cout << "Calculando area de um circulo...\n";
                float raio;
                cin >> raio;
                cout << calcAreaCirculo(raio) << endl;
                break;
            case 'E':
                //cout << "Calculando area de um elipse ...\n";
                float raioMaior, raioMenor;
                cin >>  raioMaior;
                cin >> raioMenor;
                cout << calcAreaElipse(raioMaior, raioMenor) << "\n";
                break;
            case 'T':
                //cout << "Calculando area de um triângulo ...\n";
                float a,b,c;
                cin >> a;
                cin >> b;
                cin >> c;
                cout << calcAreaTriangulo(a,b,c) << "\n";

                break;
            case 'Z':
                //cout << "Calculando area de um trapézio ...\n";
                float baseMaior, baseMenor, altura;
                cin >> baseMaior;
                cin >> baseMenor;
                cin >> altura;
                cout << calcAreaTrapezio(baseMaior, baseMenor, altura) << "\n";
                break;
            default: cout << "Figura invalida!\n";
        }
    }


    return 0;
}

int calcAreaCirculo(float raio){
    float resultado = raio * raio * PI;
    return round(resultado);
}


int calcAreaElipse(float raioMaior, float raioMenor){
    float resultado = raioMaior * raioMenor * PI;
    return round(resultado);
}

int calcAreaTrapezio(float baseMaior, float baseMenor, float altura){
    float resultado = ((baseMaior + baseMenor) / 2) * altura;
    return round(resultado);
}

int calcAreaTriangulo(float a, float b, float c){
    float p = (a + b + c ) / 2;
    float resultado = sqrt(p * (p - a) * (p-b) * (p-c));
    return round(resultado);
}
