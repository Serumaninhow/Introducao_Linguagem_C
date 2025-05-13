#include <stdio.h>

/*
Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e im
prima sua média.
*/

int main(){
    int valor=0, i, soma=0;
    printf("Digite 10 valores inteiroa: ");
    for(i=0;i<10;i++){
        scanf("%d", &valor);
        if(valor > 0)
            soma += valor;
    }
    printf("media = soma / 10 = %d / 10 = %.2f\n", soma, soma / (float)10);
    return 0;
}