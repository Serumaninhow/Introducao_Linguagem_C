#include <stdio.h>
#include <stdlib.h>

// Imprimindo o número (0 - 255) que representa o caractere

int main(){
    char letra;
    printf("Escreva um caractere: ");
    letra = getchar();
    printf("Seu caractere (em numero) eh: %d\n", letra);
    return 0;
}