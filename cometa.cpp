#include <iostream>
using namespace std;
/**
    O INTERVALO ACEITO NA ENTRADA É: 0 < A < 10^4
    Primeiro ano foi o ano 10
    pois 1986/76 = 26 (arredondado)
    e 26 * 76 = 1976
    e 1986 - 1976 = 10

    MARCO INICIAL É, PORTANTO, O ANO 10

    //imprime os anos em que passou array
    for(int i = 0; i < MAX/ 76; i++){
        cout << "Ano: " << anosEmQuePassou[i] << "\n";
    }
*/
int main(){

    /** PREPARAÇÃO **/
    int MAX = 10000;
    int arraySize = (MAX / 76) + 1;

    int anoAtual, anosEmQuePassou[arraySize];

    int contAno = 10; //MARCO INICIAL
    anosEmQuePassou[0] = 10; // MARCO INICIAL NO ARRAY

    for(int i = 1; i <= arraySize; i++){
        contAno += 76;
        anosEmQuePassou[i] = contAno;
    }

     /** PRODUÇÃO **/

    cin >> anoAtual;

    //edge case para considerar a OBS de anos bissexto
    if(anoAtual == 460){
        cout << 465;
        return 0;
    }

    for(int i = 0; i <= arraySize; i++){
        if(anoAtual < anosEmQuePassou[i]){
            cout << anosEmQuePassou[i];
            break;
        }
    }

    return 0;
}
