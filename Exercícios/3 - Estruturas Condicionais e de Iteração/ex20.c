#include <stdio.h>

/*
Faça um programa que calcule e mostre a soma dos 50 primeiros números pares
*/

int main(){
    int sum = 0, i;
    for(i=0;i<50;i++)
        sum += i + i;
    printf("A soma dos primeiros 50 numeros pares eh: %d\n", sum);
    return 0;
}