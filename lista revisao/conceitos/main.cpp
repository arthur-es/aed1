#include <iostream>
using namespace std;
int main(){
    int ano, cont;

    cin >> ano;

    if(ano == 0){
        cout << 10;
    }

    if (ano >= 1986){
        for (cont = 1986; cont <= ano; cont+=76){
            //cout << cont << "\n";
            //cont vai incrementando a cada 76 até ser maior
        }
    }

    if (ano < 1986){
        for (cont = 1986; cont >= ano; cont-=76){
            if (cont - ano >= 76){
                cout << cont;
                return 0;
            }
        }
    }

    cout << cont;
}
