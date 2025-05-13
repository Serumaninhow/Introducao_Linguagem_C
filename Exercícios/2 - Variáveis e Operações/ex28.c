#include <stdio.h>
#include <math.h>
/*
Sejam a e b os catetos de um triângulo cuja hipotenusa h é obtida pela equação:
h = raiz(a2 + b2)
Faça um programa que leia os valores de a e b, e calcule o valor da hipotenusa
através da fórmula dada. Imprima o resultado.
*/

int main(){
    float cat1=0, cat2=0;
    scanf("%f %f", &cat1, &cat2);
    printf("a = %.2f\nb = %.2f\nhipotenusa = %.2f\n", cat1, cat2, sqrt(pow(cat1, 2) + pow(cat2, 2)));
    return 0;
}