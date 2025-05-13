#include <stdio.h>
/*
Leia uma matriz de tamanho 3 × 3. Em seguida, imprima a soma dos valores
contidos em sua diagonal principal.
*/
void scanMatriz(int i, int j, int v[i][j]){
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
int totalDP(int i, int j, int v[i][j]){
    int k, sum=0;
    for(k=0;k<i;k++)
        sum+=v[k][k];
    return sum;
}
int main(){
    int total, m[3][3];
    scanMatriz(3, 3, m);
    total = totalDP(3, 3, m);
    printf("A soma dos valores da diagonal principal eh %d.\n", total);
    return 0;
}