#include<iostream>
#include<string>
using namespace std;
int main () {

    /**
        Operação:
            op == 1 -> adicao
            op == 2 -> multiplicacao
    **/

    int maiorInteiro, num1, num2, op;
    string operador;
    cin >> maiorInteiro;

    cin >> num1;
    cin >> operador;
    cin >> num2;

    if(operador == "+"){
        op = 1;
    } else if (operador == "x") {
        op = 2;
    }

    switch (op) {
        case 1:
            if((num1 + num2) > maiorInteiro){
                cout << "overflow\n";
            } else {
                cout << "no overflow\n";
            }
            break;
        case 2:
            if((num1 * num2) > maiorInteiro){
                cout << "overflow\n";
            } else {
                cout << "no overflow\n";
            }
            break;
        default: cout << "\nDEFAULT\n";
    }

    return 0;
}

/*

  ///BOARD
    cout << "\n" << "******************" << "\n";
    cout << "Maior inteiro: " << maiorInteiro << "\n";
    cout << num1;
    cout << "\t" << operador;
    cout << "\t" << num2 << "\n";
    cout << "\n" << "******************" << "\n";
*/
