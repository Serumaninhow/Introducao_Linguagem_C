#include <stdio.h>
#include <stdlib.h>

//Imprimindo três caracteres, separados por espaços, depois por tabulações e, por último por espaçamento de linha.

int main(){
    char caracter;
    int inteiro;
    float real;
    printf("Digite um caracter, um inteiro e um float: ");
    scanf("%c %d %f", &caracter, &inteiro, &real);
    printf("%c %d %f\n" "%c\t%d\t%f\n" "%c\n%d\n%f\n",
    caracter, inteiro, real,
    caracter, inteiro, real,
    caracter, inteiro, real);
    return 0;
}