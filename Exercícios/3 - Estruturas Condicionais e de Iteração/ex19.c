#include <stdio.h>

/*
Faça um programa que determine e mostre os cinco primeiros múltiplos de 3 
considerando números maiores que 0
*/

int main(){
    int n = 3, i;
    for(i=1;i<=5;i++)
        printf("%d\n", i * n);
    return 0;
}