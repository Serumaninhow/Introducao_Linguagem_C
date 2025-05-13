#include <stdio.h>

/*
Faça um programa que leia um número real e imprima a quinta parte desse número.
*/

int main(){
    float numero = 0;
    scanf("%f", &numero);
    printf("A quinta parte de %.2f eh %.2f\n", numero, numero/5);
    return 0;
}