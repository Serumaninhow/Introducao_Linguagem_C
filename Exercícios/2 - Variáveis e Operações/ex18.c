#include <stdio.h>

/*
Faça um programa que leia três valores inteiros e mostre sua soma.
*/

int main(){
    int n1, n2, n3;
    n1 = n2 = n3 = 0;
    scanf("%d %d %d", &n1, &n2, &n3);
    printf("%d", (n1 + n2 + n3));
    return 0;
}