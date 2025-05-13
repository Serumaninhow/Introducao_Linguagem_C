#include <stdio.h>
/*
Faça um programa que preencha um vetor de tamanho 100 com os 100 primeiros
números naturais que não são múltiplos de 7. Ao final, imprima esse vetor na tela.
*/
int main(){
    int v[100], i;
    for(i=1;i<=100;i++)
        v[i-1] = i * 7;
    for(i=0;i<100;i++)
        printf("%d\n", v[i]);
    return 0;
}