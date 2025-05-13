#include <stdio.h>
//Escreva um programa que, dada a idade de um nadador, o classifique em uma das
//seguintes categorias:
/*
Infantil-A (5-7)
Infantil-B (8-10)
Juvenil-A (11-13)
Juvenil-B (14-17)
Sênior (18+)
*/
int main(){
    int idade=0;
    printf("Qual a idade do nadador? ");

    do{
        scanf("%d", &idade);
    }while(idade <= 0 || idade > 65);

    printf("Idade de %d anos corresponde a classificacao ", idade);
    if(idade > 4 && idade < 8) printf("Infantil-A");
    if(idade > 7 && idade < 11) printf("Infantil-B");
    if(idade > 10 && idade < 14) printf("Juvenil-A");
    if(idade > 13 && idade < 18) printf("Juvenil-B");
    if(idade > 17) printf("Senior");
    printf("\n");

    return 0;
}