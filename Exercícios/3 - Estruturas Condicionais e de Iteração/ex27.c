#include <stdio.h>

/*
Escreva um programa que leia um número inteiro e calcule a soma de todos os 
divisores desse número, com exceção dele próprio. Exemplo: a soma dos divisores 
do número 66 é 1 + 2 + 3 + 6 + 11 + 22 + 33 = 78.
*/

int main(){
    int div, valor, soma=0;
    printf("Digite um valor: ");
    scanf("%d", &valor);
    printf("A soma dos divisores de %d eh:\n", valor);
    for(div=1;div<=valor/2;div++){
        if(valor % div == 0){
            printf("%d + ", div);
            soma+=div;
        }
    }
    printf("%d = %d\n", valor, soma + valor);
    return 0;
}