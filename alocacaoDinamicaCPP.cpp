#include<iostream>
#include<new>
using namespace std;

int main(){
    int sizeWanted;
    cin >> sizeWanted;

    int *nVector = new int[sizeWanted];

    for(int i = 0; i <= sizeWanted; i++){
        nVector[i] = i;
        cout << nVector[i] << endl;
    }
    return 0;
}


/**

int sizeWanted;
    cin >> sizeWanted;

    int *nVector = new int[1];

    for(int i = 0; i <= sizeWanted; i++){
        nVector[i] = i;
        cout << nVector[i] << endl;
    }
    return 0;

*/
