#include <stdio.h>
/*
Escreva um programa que leia do teclado um vetor de 10 posições. Escreva na tela
quantos valores pares foram armazenados nesse vetor.
*/
int main(){
    int v[10], i, pares=0;
    printf("Escreva 10 valores: ");
    for(i=0;i<10;i++)
        scanf("%d", &v[i]);
    for(i=0;i<10;i++)
        if(v[i] % 2 == 0)
            pares++;
    printf("Entre esses valores, %d sao pares!\n", pares);

    return 0;
}