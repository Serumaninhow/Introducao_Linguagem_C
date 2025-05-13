#include <stdio.h>
/*
Faça um programa que receba do usuário dois arrays, A e B, com 10 números inteiros
cada. Crie um novo array C calculando C = A − B. Mostre na tela os dados
do array C.
*/
int main(){
    int A[10], B[10], C[10], i;

    printf("Defina o vetor A de 10 posicoes: ");
    for(i=0;i<10;i++)
        scanf("%d", &A[i]);
    
    printf("Defina o vetor B de 10 posicoes: ");
    for(i=0;i<10;i++)
        scanf("%d", &B[i]);
    
    for(i=0;i<10;i++)
        C[i] = A[i] - B[i];
    
    for(i=0;i<10;i++)
        printf("C[%d] = %d\n", i, C[i]);
    return 0;
}