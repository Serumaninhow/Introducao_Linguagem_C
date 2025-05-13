#include <stdio.h>
/*
Faça um programa que leia uma matriz de tamanho 3 × 3. Imprima na tela o
menor valor contido nessa matriz.
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
            printf("|\n");
    }
    printf("matriz =\n");
    for(k=0;k<i;k++)
        for(l=0;l<j;l++){
            scanf("%d", &v[k][l]);
        }
}
int menorNum(int i, int j, int v[3][3]){
    int k, l, menor=0;
    for(k=0;k<i;k++)
        for(l=0;l<j;l++){
            if(menor > v[k][l] || k + l == 0){
                menor = v[k][l];
            }
        }
    return menor;
}
int main(){
    int menor, m[3][3];
    scanMatriz(3, 3, m);
    menor = menorNum(3, 3, m);
    printf("O menor valor dessa matriz eh %d.\n", menor);
    return 0;
}