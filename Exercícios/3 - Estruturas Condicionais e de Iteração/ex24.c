#include <stdio.h>
#include <limits.h>

/*
Escreva um programa que leia 10 números e escreva o menor valor lido e o maior 
valor lido.
*/

int main(){
    int valor=0, i, maior=INT_MIN, menor = INT_MAX;
    for(i=0;i<10;i++){
        scanf("%d", &valor);
        if(valor < menor)
            menor = valor;
        if(valor > maior)
            maior = valor;
    }
    printf("O menor valor foi: %d\n"
            "O maior valor foi: %d\n", menor, maior);
    return 0;
}