#include <stdio.h>

/*
Elabore um programa que peça ao usuário para digitar 10 valores. Some esses 
valores e apresente o resultado na tela
*/

int main(){
    int valor, i, soma=0;
    printf("Digite 10 valores: ");
    for(i=0;i<10;i++){
        valor = 0;
        scanf("%d", &valor);
        soma += valor;
    }
    printf("soma = %d\n", soma);
    return 0;
}