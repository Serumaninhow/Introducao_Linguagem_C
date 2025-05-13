#include <stdio.h>
#include <stdlib.h>

// imprimindo um número double na forma notação científica (%e)

int main(){
    double numero;
    printf("Escreva um numero (double): ");
    scanf("%lfa", &numero);
    printf("Seu numero eh: %e\n", numero);
    return 0;
}