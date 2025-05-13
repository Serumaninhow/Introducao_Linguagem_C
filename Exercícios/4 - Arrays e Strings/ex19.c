#include <stdio.h>
/*
Leia uma matriz de tamanho 4 × 4. Em seguida, conte e escreva na tela quantos
valores maiores do que 10 ela possui.
*/
void scanMatriz(int i, int j, int v[4][4]){
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
int maiorNum(int i, int j, int v[4][4]){
    int k, l, sum=0;
    for(k=0;k<i;k++)
        for(l=0;l<j;l++)
            if(v[k][l] > 10)
                sum++;
    return sum;
}
int main(){
    int total, m[4][4];
    scanMatriz(4, 4, m);
    total = maiorNum(4, 4, m);
    printf("ha %d numeros acima de 10.\n", total);
    return 0;
}