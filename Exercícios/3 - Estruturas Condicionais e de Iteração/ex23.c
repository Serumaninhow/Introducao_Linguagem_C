#include <stdio.h>

/*
Faça um programa que leia 10 inteiros e imprima sua média
*/

int main(){
    int valor, i, soma=0;
    printf("Digite 10 valores: ");
    for(i=0;i<10;i++){
        valor = 0;
        scanf("%d", &valor);
        soma += valor;
    }
    printf("media = soma/10 = %d/10 = %.2f\n", soma, soma/(float)10);
    return 0;
}