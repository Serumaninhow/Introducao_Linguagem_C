#include <stdio.h>

/*
Faça um programa que leia um valor inteiro e positivo N, calcule o mostre o valor 
E, conforme a fórmula a seguir:

E = 1 / 1! + 1 / 2! + 1 / 3! + ... + 1 / N!

comentário: E = e - 1? falta-lhe o tal do 1/0! ...
*/

int main(){
    int n = 0, i, j;
    double soma=0, fat;
    printf("Digite um inteiro para N (maior que 0): ");

    do{
        scanf("%d", &n);
    }while(n < 1);

    for(i=1;i<=n;i++){
        fat = 1;
        for(j=1;j<=i;j++){
            fat *= 1 / (double)j;
        }
        soma += fat;
    }

    printf("E = %.3lf\n", soma);
    return 0;
}