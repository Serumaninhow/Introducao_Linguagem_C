#include <stdio.h>

/*
Faça um programa que mostre ao usuário um menu com quatro opções de ope
rações matemáticas (as operações básicas, por exemplo). O usuário escolhe uma 
das opções, e o seu programa pede dois valores numéricos e realiza a operação, 
mostrando o resultado.
*/

int main(){
    double n1=0, n2=0;
    char op;
    printf("Escreva uma operacao: ");

    scanf("%lf", &n1);

    do{
        op = getchar();
    }while(op != '+' && op != '-' && op != '*' && op != '/');

    scanf("%lf", &n2);

    switch(op){
        case '+':
            printf("%.2lf + %.2lf = %.2lf", n1, n2, n1 + n2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf",n1, n2, n1 - n2);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf",n1, n2, n1 * n2);
            break;
        case '/':
            printf("%.2lf / %.2lf = %.2lf",n1, n2, n1 / n2);
            break;
    }
    printf("\n");
    return 0;
}