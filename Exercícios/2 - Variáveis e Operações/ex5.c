#include <stdio.h>
#include <stdlib.h>

// no momento em que se tenta imprimir um inteiro de um número float, dá erro...

int main(){
    float numero;
    printf("Escreva um numero (float): ");
    scanf("%f", &numero);
    printf("Seu numero eh: %d\n", numero);
    return 0;
}