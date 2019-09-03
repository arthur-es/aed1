#include <iostream>
#include <new>

using namespace std;

int main(){
    int qtdRotulosBalas; ///  1 <= qtdRotulosBalas <= 1000
    int qtdTiposDeBala; /// 1 <= qtdTiposDeBala <= 20;
    int qtdEnvelopes = 0;

    cout << "Quantos rotulos voce tem? ";
    cin >> qtdRotulosBalas;

    cout << "Quantos tipos de bala tem a empresa? ";
    cin >> qtdTiposDeBala;

    //int *rotulos = new int[qtdRotulosBalas];
    int rotulos[100];

    for(int i = 0; i < qtdRotulosBalas; i++){
        cin >> rotulos[i];
    }

    cout << "Voce tem esses rotulos: ";
    for(int i = 0; i < qtdRotulosBalas; i++){
        cout << rotulos[i] << " ";
    }

    /** LÓGICA **/

    int menorQtd = 10000;
    for(int i = 1; i <= qtdTiposDeBala; i++){
        cout << "\nTIPO [" << i << "]\n";
        int contador = 0;
        for(int j = 0; j < qtdRotulosBalas; j++){
            if(rotulos[j] == i){
                contador++;
            }
        }
        cout << "\n Existe " << contador << " do tipo " << i << endl;
        if(contador < menorQtd){
            menorQtd = contador;
        }
    }

    qtdEnvelopes = menorQtd;

    cout << "\nQtd envelopes: " << qtdEnvelopes << endl;

    return 0;
}
