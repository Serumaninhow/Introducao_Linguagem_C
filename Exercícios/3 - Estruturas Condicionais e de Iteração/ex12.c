#include <stdio.h>

/*
Usando o comando switch, escreva um programa que leia um inteiro entre 1 e 7 
e imprima o dia da semana correspondente a esse número. Isto é, domingo, se 1, 
segunda-feira, se 2, e assim por diante.
*/

int main(){
    int dia=0;
    printf("Digite um dia da semana (1-7): ");

    do{
        scanf("%d", &dia);
    }while(dia > 7 || dia < 1);

    switch(dia){
        case 1:
            printf("Domingo");
            break;
        case 2:
            printf("Segunda");
            break;
        case 3:
            printf("Terca");
            break;
        case 4:
            printf("Quarta");
            break;
        case 5:
            printf("Quinta");
            break;
        case 6:
            printf("Sexta");
            break;
        case 7:
            printf("Sabado");
            break;
    }
    printf("\n");
    return 0;
}