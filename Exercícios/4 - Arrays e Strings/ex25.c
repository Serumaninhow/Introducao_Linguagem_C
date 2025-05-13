#include <stdio.h>
#include <stdlib.h>
/*
Leia uma matriz de tamanho 10 × 3 com as notas de 10 alunos em três provas. Em
seguida, calcule e escreva na tela o número de alunos cuja pior nota foi na prova 1,
o número de alunos cuja pior nota foi na prova 2 e o número de alunos cuja pior
nota foi na prova 3.
*/
int comparaProvas(int linha, float m[10][3]){
    if((m[linha][0] <= m[linha][1] && m[linha][0] <= m[linha][2])) return 0;
    if(m[linha][1] <= m[linha][0] && m[linha][1] <= m[linha][2]) return 1;
    return 2;
}
int* pioresAlunos(float m[10][3], int p){
    int i, t=0;
    int *v;
    for(i=0;i<10;i++)
        if(comparaProvas(i, m) == p) t++;
    v = calloc(t+1, sizeof(int));
    v[0] = t;
    t=1;
    for(i=0;i<10;i++)
        if(comparaProvas(i, m) == p){
            *(v + t) = i;
            t++;
        }
    return v;
}
void imprimeArray(int *v){
    int i=0;
    for(i=1;i<=v[0];i++){
        if(i < v[0]) printf("%d, ", v[i]);
        else printf("%d ", v[i]);
    }
    printf("\n");
}
int main(){
    float m[10][3] = 
        {{1.5, 5, 6},
         {7, 5.8, 4},
         {8, 5, 6},
         {6.1, 3, 1},
         {1, 5, 2},
         {7, 5, 3},
         {1, 6.7, 6},
         {7.6, 7, 6},
         {7, 8, 6.6},
         {10, 5, 3}};
    int *p1, *p2, *p3;
    p1 = pioresAlunos(m, 0);
    p2 = pioresAlunos(m, 1);
    p3 = pioresAlunos(m, 2);
    printf("Alunos que a pior nota eh a primeira prova: ");
    imprimeArray(p1);
    printf("Alunos que a pior nota eh a segunda prova: ");
    imprimeArray(p2);
    printf("Alunos que a pior nota eh a terceira prova: ");
    imprimeArray(p3);
    return 0;
}