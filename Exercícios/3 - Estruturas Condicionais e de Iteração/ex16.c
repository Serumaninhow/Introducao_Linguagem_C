#include <stdio.h>

/*
Faça um programa que leia um número inteiro positivo N e imprima todos os
números naturais de 0 até N em ordem crescente.
*/

int main(){
    int n=-1, i;
    printf("Digite um numero natural: ");

    do{
        scanf("%d", &n);
    }while(n < 0);

    for(i=0;i<=n;i++)
        printf("%d\n", i);
    return 0;
}