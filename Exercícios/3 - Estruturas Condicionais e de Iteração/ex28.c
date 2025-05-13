#include <stdio.h>

/*
Faça um programa que exiba a soma de todos os números naturais abaixo de 
1.000 que são múltiplos de 3 ou 5.
*/

int main(){
    int soma=0, i;
    for(i=0;i<1000;i++){
        if(i % 3 == 0 || i % 5 == 0)
            soma += i;
    }
    printf("%d\n", soma);
    return 0;
}