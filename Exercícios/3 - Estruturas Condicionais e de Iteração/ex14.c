#include <stdio.h>

/*
Faça um programa para verificar se determinado número inteiro lido é divisível 
por 3 ou 5, mas não simultaneamente pelos dois.
*/

int main(){
    int num=0;
    scanf("%d", &num);
    if(num % 15 == 0){
        printf("Nao eh divisivel ou por 3 ou por 5!\n");
    }else if(num % 5 == 0){
        printf("Eh divisivel por 5!\n");
    }else if(num % 3 == 0){
        printf("Eh divisivel por 3!\n");
    }else 
        printf("Nao eh divisivel nem por 5 e nem por 3!\n");
    return 0;
}