#include <stdio.h>

/*
Faça um programa que receba um número inteiro maior do que 1 e verifique se o 
número fornecido é primo ou não.
*/

int main(){
    int i, n=1;

    printf("Digite um numero maior que 1: ");

    do{
        scanf("%d", &n);
    }while(n <= 1);

    for(i=2;i<n/2;i++)
        if(n % i == 0){
            printf("O numero nao eh %d primo!\n", n);
            return 0;
        }
    printf("O numero %d eh primo!\n", n);
    return 0;
}