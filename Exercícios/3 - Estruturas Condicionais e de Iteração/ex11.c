#include <stdio.h>

/*
Faça um programa que informe o mês de acordo com o número digitado pelo 
usuário. Exemplo:  Entrada = 4. Saída = Abril.
*/

int main(){
    int mes=0;
    printf("Digite um numero entre 1 e 12: ");

    do{
        scanf("%d", &mes);
    }while(mes > 12 || mes < 1);

    switch(mes){
        case 1:
            printf("Janeiro");
            break;
        case 2:
            printf("Fevereiro");
            break;
        case 3:
            printf("Marco");
            break;
        case 4:
            printf("Abril");
            break;
        case 5:
            printf("Maio");
            break;
        case 6:
            printf("Junho");
            break;
        case 7:
            printf("Julho");
            break;
        case 8:
            printf("Agosto");
            break;
        case 9:
            printf("Setembro");
            break;
        case 10:
            printf("Outubro");
            break;
        case 11:
            printf("Novembro");
            break;
        case 12:
            printf("Dezembro");
            break;
    }
    printf("\n");
    return 0;
}