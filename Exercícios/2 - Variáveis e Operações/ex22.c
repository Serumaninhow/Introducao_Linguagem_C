#include <stdio.h>

/*
Faça um programa que leia um valor em reais e a cotação do dólar. Em seguida,
imprima o valor correspondente em dólares.
*/

int main(){
    double valor=0, cot=0;
    printf("Quantos reais tu tem?\n");
    scanf("%lf", &valor);
    printf("Qual a cotaçao do dolar?\n");
    scanf("%lf", &cot);
    printf("Tu tem U$%.2lf\n", valor / cot);
    return 0;
}