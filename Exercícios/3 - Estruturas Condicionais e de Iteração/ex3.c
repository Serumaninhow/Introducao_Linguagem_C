#include <stdio.h>

//Faça um programa que leia um número inteiro e verifique se esse número é par ou ímpar.

int main(){
    int num=0;
    scanf("%d", &num);
    if(num % 2 == 0)
        printf("%d e par!!!", num);
    else
        printf("%d nao e par!!!", num);
    printf("\n");
    return 0;
}