#include <stdio.h>

/*
Faça um programa que leia um número inteiro e retorne seu antecessor e seu sucessor.
*/

int main(){
    int numero = 0;
    scanf("%i", &numero);
    printf("Antecessor: %i\nSucessor: %i\n", numero - 1, numero + 1);
    return 0;
}