#include <stdio.h>
#include <stdlib.h>

// Lendo dois inteiros e os imprindo na tela, em ordem inversa.

int main(){
    int n1;
    int n2;
    printf("Escreva dois numeros (x y): ");
    scanf("%d %d", &n1, &n2);
    printf("o primeiro numero foi: %d\n", n2);
    printf("o segundo numero foi: %d\n", n1);
    return 0;
}