#include<iostream>
#include <math.h>       /* round, floor, ceil, trunc */
using namespace std;

int main(){
    int m, n;
    int matrizA[11][11], matrizB[11][11], matrizResultado[11][11];
    char operacao;
    cin >> m;
    cin >> n;



    ///LENDO MATRIZ A
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            cin >> matrizA[i][j];
        }
    }

    /// lendo operacao
    cin >> operacao;



    ///LENDO MATRIZ B
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            cin >> matrizB[i][j];
        }
    }

    if(operacao == '+'){
       for(int i = 1; i <= m; i++){
            for(int j = 1; j <= n; j++){
                matrizResultado[i][j] = matrizA[i][j] + matrizB[i][j];
            }
       }
    } else if(operacao == 'x'){
        if(m != n){
            cout << "ERROR\n";
            return 0;
        }
        /// FAZ CONTA MULTIPLICACAO
        for(int i=1; i<=m; i++){
            for(int j=1; j<=n; j++){
                int sum = 0;
                for(int k=1; k<=m; k++){
                    sum += matrizA[i][k] * matrizB[k][j];
                }
                matrizResultado[i][j]=sum;
            }
        }
    }



    /// imprime matriz resultado se tudo estiver ok
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            cout << matrizResultado[i][j] << " ";
        }
        cout << "\n";
    }



    /*


    ///IMPRIMINDO MATRIZ A

    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            cout << matrizA[i][j] << " ";
        }
        cout << "\n";
    }

     for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            cout << matrizB[i][j] << " ";
        }
        cout << "\n";
    }

    */

    return 0;
}
