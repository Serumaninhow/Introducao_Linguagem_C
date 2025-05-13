#include <stdio.h>
/*
Faça um programa que leia uma matriz de tamanho 4 × 4. Imprima na tela o
maior valor contido nessa matriz e a sua localização (linha e coluna).
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
int maiorNum(int i, int j, int v[4][4], char pos[4]){
    int k, l, maior=0;
    pos[0] = 'a';
    for(k=0;k<i;k++)
        for(l=0;l<j;l++){
            if(maior < v[k][l] || k + l == 0){
                maior = v[k][l];
                pos[1] = k+49;
                pos[2] = l+49;
            }
        }
    return maior;
}
int main(){
    int menor, m[4][4];
    char pos[4];
    scanMatriz(4, 4, m);
    menor = maiorNum(4, 4, m, pos);
    printf("O maior valor dessa matriz eh %s = %d.\n", pos, menor);
    return 0;
}