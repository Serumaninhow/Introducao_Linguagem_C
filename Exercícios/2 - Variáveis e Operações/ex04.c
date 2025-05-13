#include <stdio.h>
#include <stdlib.h>

// no momento em que se tenta imprimir um float, dá erro...

int main(){
    int numero;
    printf("Escreva um numero inteiro: ");
    scanf("%d", &numero);
    printf("Seu numero eh: %f\n", numero);
    return 0;
}