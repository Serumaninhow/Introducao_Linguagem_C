#include <stdio.h>
/*
Faça um programa que receba do usuário um vetor X com 10 posições. Em seguida
deverão ser impressos o maior e o menor elemento desse vetor.
*/
int main(){
    int v[10], i, maior, menor;
    printf("Escreva 10 valores: ");
    for(i=0;i<10;i++)
        scanf("%d", &v[i]);
    maior = menor = v[0];
    for(i=0;i<10;i++)
        if(maior < v[i])
            maior = v[i];
        else if(menor > v[i])
            menor = v[i];
    printf("O maior numero eh: %d\n"
            "O menor numero eh: %d\n", maior, menor);

    return 0;
}