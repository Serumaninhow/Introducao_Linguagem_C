#include <stdio.h>

//Faça um programa que leia dois números e mostre o maior deles. Se, por acaso, os
//dois números forem iguais, imprima a mensagem “Números iguais”.

int main(){

    int a=0, b=0;
    scanf("%d %d", &a, &b);

    if(a > b)
        printf("%d > %d\n", a, b);
    else if(a < b)
        printf("%d < %d\n", a, b);
    else printf("Os numeros sao iguais!\n");

    return 0;
}