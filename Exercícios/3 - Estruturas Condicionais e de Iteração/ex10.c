#include <stdio.h>

/*
Faça um programa que leia três números inteiros positivos e efetue o cálculo de
uma das seguintes médias de acordo com um valor numérico digitado pelo usuário
e mostrado na tabela a seguir:
1 - média geométrica - x * y * z
2 - média ponderada - (x + 2 * y + 3 * z) / 6
3 - média harmônica - 1 / (1 / x + 1 / y + 1 / z)
4 - média aritmética - (x + y + z) / 3
*/

int main(){
    int x, y, z, op;
    double res;
    x = y = z = op = res = 0;
    printf("Escolha uma operacao:\n");

    printf("1 - media geometrica\n"
        "2 - media ponderada\n"
        "3 - media harmonica\n"
        "4 - media aritmetica\n");

    do{
        scanf("%d", &op);
    }while(op > 4 || op < 1);

    printf("digite tres numeros inteiros: ");
    scanf("%d %d %d", &x, &y, &z);

    switch(op){
        case 1:
            res = x * y * z;
        break;
        case 2:
            res = (x + 2 * y + 3 * z) / 6;
        break;
        case 3:
            res = 1 / ((1 / (double)x) + (1 / (double)y) + (1 / (double)z));
        break;
        case 4:
            res = (x + y + z) / 3;
        break;
    }

    printf("%.2lf\n", res);
    return 0;
}