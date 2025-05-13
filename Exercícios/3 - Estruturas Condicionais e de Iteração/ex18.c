#include <stdio.h>

/*
Faça um programa que leia um número inteiro N e depois imprima os N primei
ros números naturais ímpares.
*/

int main(){
    int n=-1, i;
    printf("Digite um inteiro: ");

    do{
        scanf("%d", &n);
    }while(n < 0);

    for(i = 1;i <= n;i+=2)
        printf("%d\n", i);

    return 0;
}