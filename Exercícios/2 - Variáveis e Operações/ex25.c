#include <stdio.h>
/*
A importância de R$780.000,00 será dividida entre três ganhadores de um concurso,
sendo que:
i. O primeiro ganhador receberá 46% do total.
ii. O segundo receberá 32% do total.
iii. O terceiro receberá o restante.
Calcule e imprima a quantia recebida por cada um dos ganhadores.
*/
int main(){
    double valor = 780000;
    printf("Candidato 1: R$%.2lf\n", valor * 0.46);
    printf("Candidato 2: R$%.2lf\n", valor * 0.32);
    printf("Candidato 3: R$%.2lf\n", valor * 0.22);
    return 0;
}