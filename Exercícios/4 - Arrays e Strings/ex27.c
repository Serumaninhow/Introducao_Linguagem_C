#include <stdio.h>
/*
Faça um programa que leia uma matriz de tamanho 6 × 6. Calcule e imprima a
soma dos elementos dessa matriz que estão abaixo da diagonal principal.
*/
void scanMatriz(int i, int v[6][6]){
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
int somaABDP(int i, int v[6][6]){
    int k, l, sum=0;
    for(k=0;k<i;k++)
        for(l=0;l<i;l++)
            if(k < l)
                sum+=v[l][k];
    return sum;
}
int main(){
    int m[5][5], soma;
    scanMatriz(5, m);
    soma = somaABDP(5, m);
    printf("Soma dos elementos abaixo da diagonal principal eh = %d.\n", soma); 
    return 0;
}