#include <stdio.h>

/*
Faça um programa para ler um número inteiro positivo de três dígitos. Em seguida,
calcule e mostre o número formado pelos dígitos invertidos do número lido.
Exemplo:
Número lido = 123
Número gerado = 321
*/

void inverte(int n){
    if(n > 0){
        printf("%d", n % 10);
        inverte(n / 10);
    }
}

int main(){
    int num;
    scanf("%d", &num);
    inverte(num);
    return 0;
}