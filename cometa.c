#include <stdio.h>

int main(){
    int ano, cont;

    scanf("%d", &ano);

    if (ano >= 1986){
        for (cont = 1986; cont <= ano; cont+=76){
            }
    }
    if (ano < 1986){
        for (cont = 1986; cont >= ano; cont-=76){
            if (cont - ano >= 76){
               printf("%d", cont);
        return (0);
            }
        }

    }
    printf("%d", cont);
}
