#include <stdio.h>
#include <stdlib.h>

//Imprimindo três caracteres, separados por espaçamento de linha

int main(){
    printf("Digite tres caracteres: ");
    char letra[4];
    letra[0] = getchar();
    letra[1] = getchar();
    letra[2] = getchar(); 
    printf("\"%c\"\n""\"%c\"\n""\"%c\"\n", letra[0], letra[1], letra[2]);
    return 0;
}