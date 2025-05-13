#include <stdio.h>

/*
Faça um algoritmo que leia um número positivo e imprima seus divisores. Exem
plo: os divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66.
*/

int main(){
    int div, valor;
    printf("Digite um valor: ");
    scanf("%d", &valor);
    printf("Os divisores de %d sao: ", valor);
    for(div=1;div<=valor/2;div++){
        if(valor % div == 0)
            printf("%d, ", div);
    }
    printf("%d.", valor);
    return 0;
}