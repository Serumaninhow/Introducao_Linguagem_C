#include <stdio.h>
/*
Leia uma matriz de tamanho 3 × 3. Em seguida, imprima a soma dos valores
contidos em sua diagonal secundária.
*/
void scanMatriz(int i, int j, int v[3][3]){
    int k, l;
    printf("Matriz = ");
    for(k=0;k<i;k++){
        printf("| ");
        for(l=0;l<j;l++){
            printf("a%d%d ", k+1, l+1);
        }
        if(k<i-1)
            printf("|\n         ");
        else
            printf("\n");
    }
    printf("matriz =\n");
    for(k=0;k<i;k++)
        for(l=0;l<j;l++){
            scanf("%d", &v[k][l]);
        }
}
int totalDS(int i, int j, int v[3][3]){
    int k, sum=0;
    for(k=0;k<i;k++)
        sum+=v[k][i - k - 1]; // -1 aqui é importante!!!
    return sum;
}
int main(){
    int total, m[3][3];
    scanMatriz(3, 3, m);
    total = totalDS(3, 3, m);
    printf("A soma dos valores da diagonal secundaria eh %d.\n", total);
    return 0;
}