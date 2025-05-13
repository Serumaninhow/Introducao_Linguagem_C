#include <stdio.h>
/*
Faça um programa que leia uma matriz A de tamanho 5 × 5. Em seguida, calcule
e imprima a matriz B, sendo que B = A2.
*/
void scanMatriz(int i, int v[5][5]){
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
int main(){
    int A[5][5], B[5][5], i, j;
    scanMatriz(5, A);
    for(i=0;i<5;i++)
        for(j=0;j<5;j++)
            B[i][j] = 2 * A[i][j];
    printf("B = ");
    for(i=0;i<5;i++){

        for(j=0;j<5;j++){
            printf("%d ", B[i][j]);
        }
        if(i < 4)printf("\n    ");
        else printf("\n");
    }
    return 0;
}