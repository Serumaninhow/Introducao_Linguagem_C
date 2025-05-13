#include <stdio.h>

/*
Faça um programa que leia um número inteiro positivo N e imprima todos os
números naturais de 0 até N em ordem decrescente.
*/

int main(){
    int n=-1;
    printf("Digite um numero natural: ");

    do{
        scanf("%d", &n);
    }while(n < 0);

    for(;n>=0;n--)
        printf("%d\n", n);

    return 0;
}