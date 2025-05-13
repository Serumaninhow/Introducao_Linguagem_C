#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*
Faça um programa que converta uma letra maiúscula em letra minúscula. Use a
tabela ASCII para isso.
*/

int main(){
    char letra;
    do{
        letra = getchar();
    }while(letra < 65 || letra > 90);
    letra = letra + 32;
    putchar(letra);
    printf("\n");
    return 0;
}