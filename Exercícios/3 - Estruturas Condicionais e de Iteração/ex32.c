#include <stdio.h>

/*
Escreva um programa que leia um número inteiro positivo N e em seguida impri
ma N linhas do chamado triângulo de Floyd.
*/

int main(){
    int linhas=0, seq=1, i, j;

    do{
        scanf("%d", &linhas);
    }while(linhas < 1);

    for(j=0;j<linhas;j++){
        for(i=0;i<=j;i++){
            printf("%d ", seq);
            seq++;
            linhas--;
        }
        printf("\n");
    }
    return 0;
}