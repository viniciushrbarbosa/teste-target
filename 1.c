#include <stdio.h>

int main(){
    int i, v1 = 0, v2 = 1, v3 = 0, num, flag = 0;

    printf("informe o numero a ser verificado dentro da sequencia de Fibonacci: ");
    scanf("%d",&num);

   
     if (num == 0 || num == 1){
        printf("o numero informado pertence a sequencia de Fibonacci.");
        return 0;
        }


    for (i = 0; i < num; i++)
    {
        v3 = v1 + v2;
        v1 = v2;
        v2 = v3;

        if (v3 == num){
            printf("o numero informado pertence a sequencia de Fibonacci.");
            flag = 1;
        }
    }
    if(flag == 0)
    printf("o numero nao pertence a sequencia de Fibonacci.");

    return 0;
}