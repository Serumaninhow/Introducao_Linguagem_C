#include <stdio.h>

/*
Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado
possui uma taxa diferente de imposto sobre o produto. Faça um programa
em que o usuário entre com o valor e o estado de destino do produto e o programa
retorne o preço final do produto acrescido do imposto do estado em que
ele será vendido. Se o estado digitado não for válido, mostrará uma mensagem
de erro.
MG - 7%
SP - 12%
RJ - 15%
MS - 8%
*/

float verifica(char *p){
    if(p[0] == 'M' && p[1] == 'G') return 0.07;
    if(p[0] == 'S' && p[1] == 'P') return 0.12;
    if(p[0] == 'R' && p[1] == 'J') return 0.15;
    if(p[0] == 'M' && p[1] == 'S') return 0.08;
    return 0;
}

int main(){
    double valor=0;
    float taxa = 0;
    char estado[3];
    printf("Entre com o valor (em reais) e o estado (MG, SP, RJ, MS): ");

    do{
        scanf("%lf", &valor);
    }while(valor <= 0);

    do{
        getchar();
        scanf("%s", estado);
        taxa = verifica(estado);
        if(taxa == 0)
            printf("Estado Invalido!!!!!!\n");
    }while(taxa == 0);
    printf("Valor = %.2lf\n", valor * (1 + taxa));
    return 0;
}
