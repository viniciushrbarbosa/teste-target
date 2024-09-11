#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count = 0;

    
    printf("Digite uma frase de até 100 caracteres: ");
    fgets(str, sizeof(str), stdin);

    
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == 'a' || str[i] == 'A') {
            count++;
        }
    }

   
    if (count > 0) 
        printf("a letra 'a'  aparece %d vez(es) na frase.", count);
    else 
        printf("a letra 'a' não aparece na frase.");
    

    return 0;
}
