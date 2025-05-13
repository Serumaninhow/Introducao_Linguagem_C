#include <stdio.h>
#include <math.h>
//Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
// O número digitado ao quadrado.
// A raiz quadrada do número digitado.

int main(){
    double num;
    scanf("%lf", &num);
    printf("%.2lf ao quadrado eh: %.2lf\n", num, num*num);
    printf("raiz de %.2lf eh: %.2lf\n", num, sqrt(num));
    return 0;
}