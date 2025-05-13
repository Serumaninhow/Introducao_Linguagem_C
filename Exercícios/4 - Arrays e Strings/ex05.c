#include <stdio.h>

/*
Faça um programa que leia um vetor de oito posições. Em seguida, leia também dois
valores X e Y quaisquer correspondentes a duas posições no vetor. Seu programa
deverá exibir a soma dos valores encontrados nas respectivas posições X e Y.
*/

int main(){
    int v[8], x=-1, y=-1, i, aux;

    printf("Digite 8 valores: ");

    for(i=0;i<8;i++)
        scanf("%d", &v[i]);
    printf("Escolha duas posicoes (entre 0 e 7): ");

    do{
        scanf("%d %d", &x, &y);
    }while(x == -1 || y == -1);

    if(x < y){
        aux = x;
        x = y;
        y = aux;
    }

    aux=0;

    for(i=y;i<=x;i++)
        aux+=v[i];
    
    if(x != y)
        printf("A soma das posicoes entre %d e %d = %d\n", y, x, aux);
    else
        printf("v[%d] = %d\n", y, aux);
    
    return 0;
}