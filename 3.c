#include <stdio.h>

int main(){
    int indice = 12, soma = 0, k = 1;

    while (k<indice)
    {
        k++;
        soma+=k;
    }
    printf("o valor de soma e %d", soma);
    // R: 77    



    return 0;
}