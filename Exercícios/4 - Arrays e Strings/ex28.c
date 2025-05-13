#include <stdio.h>
/*
Faça um programa que leia uma matriz de tamanho 6 × 6. Calcule e imprima a
soma dos elementos dessa matriz que não pertencem à diagonal principal nem à
diagonal secundária.
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
int somaFDPS(int i, int v[6][6]){
    int k, l, sum=0;
    for(k=0;k<i;k++)
        for(l=0;l<i;l++)
            if(k != l && k + l != i-1)
                sum+=v[l][k];
    return sum;
}
int main(){
    int m[6][6], soma;
    scanMatriz(6, m);
    soma = somaFDPS(6, m);
    printf("Soma dos elementos que nao estao na diagonal principal e nem na secundaria = %d.\n", soma); 
    return 0;
}