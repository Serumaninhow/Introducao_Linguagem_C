#include <stdio.h>

// Faça um programa que leia dois números inteiros e mostre qual deles é o maior.

int main(){
    int a=0, b=0;
    scanf("%d %d", &a, &b);

    if(a < b)
        a = b;

    printf("%d e o maior numero\n", a);
    return 0;
}