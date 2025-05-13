#include <stdio.h>

/*
Escreva um programa que leia certa quantidade de números, imprima o maior 
deles e quantas vezes o maior número foi lido. A quantidade de números a serem 
lidos deve ser fornecida pelo usuário.
*/

int main(){
    int qtd=-1, n=0, qtdn=0, maior, i;

    printf("Digite quantos numeros quer digitar: ");

    do{
        scanf("%d", &qtd);
    }while(qtd < 0);

    printf("Digite %d numeros inteiros: ", qtd);

    for(i=0;i<qtd;i++){
        scanf("%d", &n);

        if(n > maior || i == 0){
            maior = n;
            qtdn=0;
        }

        if(n == maior)
            qtdn++;
    }

    printf("O maior numero foi: %d\nVezes que apareceu: %d\n", maior, qtdn);
    return 0;
}