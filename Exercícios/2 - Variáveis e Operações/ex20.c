#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*
Faça um programa que calcule o ano de nascimento de uma pessoa a partir de sua
idade e do ano atual.
*/

int main(){
    int anoN, anoAt;
    anoN = anoAt = 0;
    printf("Ano de nascimento: ");
    scanf("%d", &anoN);
    printf("Ano de atual: ");
    scanf("%d", &anoAt);
    printf("Entao voce tem %d ou %d anos?\n", anoAt - anoN, anoAt - anoN - 1);
    return 0;
}