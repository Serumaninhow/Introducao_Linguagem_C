#include <stdio.h>
#include <stdlib.h>

// Lendo dois numeros float e os imprindo na tela, em ordem inversa

int main(){
    float n1;
    float n2;
    printf("Escreva dois numeros (x y): ");
    scanf("%f %f", &n1, &n2);
    printf("o primeiro numero foi: %f\n", n2);
    printf("o segundo numero foi: %f\n", n1);
    return 0;
}