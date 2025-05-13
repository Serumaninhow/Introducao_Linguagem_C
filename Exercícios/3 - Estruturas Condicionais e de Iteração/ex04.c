#include <stdio.h>

// Faça um programa que leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a prestação:
// For maior que 20% do salário, imprima: “Empréstimo não concedido.”
// Caso contrário, imprima: “Empréstimo concedido.”

int main(){
    float salario = 0, prestacao = 0;
    scanf("%f %f", &salario, &prestacao);

    if(prestacao > 0.2 * salario)
        printf("Emprestimo nao concedido.\n");
    else
        printf("Emprestimo concedido!\n");

    return 0;
}