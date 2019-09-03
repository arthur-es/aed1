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

    for(int tipo = 1; tipo <= qtdTiposDeBala; tipo++){

        for(int i = 0; i < qtdRotulosBalas; i++){

            int cont;

            if(rotulos[i] == tipo){
                cont++;
            }
            qtdEnvelopes += cont / qtdTiposDeBala;
        }

    }

    cout << qtdEnvelopes << endl;

    return 0;
}
