#include <stdio.h>
#include <stdlib.h>
/*
Faça um programa que permita ao usuário entrar com uma matriz de tamanho 3
× 3 de números inteiros. Em seguida, calcule um vetor contendo três posições, em
que cada posição deverá armazenar a soma dos números de cada coluna da matriz.
Exiba na tela esse array.
*/
void scanMatriz(int i, int v[3][3]){
    int k, l;
    printf("Matriz = ");
    for(k=0;k<i;k++){
        printf("| ");
        for(l=0;l<i;l++){
            printf("a%d%d ", k+1, l+1);
        }
        if(k<i-1)
            printf("|\n         ");
        else
            printf("|\n");
    }
    printf("matriz =\n");
    for(k=0;k<i;k++)
        for(l=0;l<i;l++){
            scanf("%d", &v[k][l]);
        }
}
int* totalColunas(int i, int v[3][3]){
    int k, l;
    int *sum = calloc(3, sizeof(int));
    for(k=0;k<i;k++)
        for(l=0;l<i;l++)
            sum[k]+=v[l][k];
    return sum;
}
int main(){
    int m[3][3], *total, i;
    scanMatriz(3, m);
    total = totalColunas(3, m);
    for(i=0;i<3;i++){
        printf("soma da coluna %d = %d.\n", i + 1,  total[i]); 
    }
    return 0;
}