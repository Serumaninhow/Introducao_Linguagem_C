#include <stdio.h>

/*
Escreva um programa que leia um número inteiro e mostre a multiplicação e a
divisão desse número por dois (utilize os operadores de deslocamento de bits).
*/

int main(){
    int num;
    scanf("%d", &num);
    printf("%d / 16 = %d", num, num >> 4);
    return 0;
}