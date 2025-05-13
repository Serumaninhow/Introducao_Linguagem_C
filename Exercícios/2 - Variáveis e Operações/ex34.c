#include <stdio.h>

/*
Elabore um programa que leia dois números inteiros e exiba o resultado das operações
de “ou exclusivo”, “ou bit a bit” e “e bit a bit” entre eles.
*/

void binario(int valor){
    if(valor > 0){
        binario(valor / 2);
        printf("%i", valor % 2);
    }
}

int main(){
    int n1, n2;
    n1 = n2 = 0;
    printf("Escreva dois valores inteiros: ");
    scanf("%i %i", &n1, &n2);

    binario(n1);
    printf(" AND ");
    binario(n2);
    printf(" = ");
    binario(n1 & n2);

    printf("\n");
    binario(n1);
    printf(" OR ");
    binario(n2);
    printf(" = ");
    binario(n1 | n2);
    
    printf("\n");
    binario(n1);
    printf(" EXOR ");
    binario(n2);
    printf(" = ");
    binario(n1 ^ n2);
    return 0;
}