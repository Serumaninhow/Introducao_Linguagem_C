#include <stdio.h>
/*
Leia um vetor com 10 números de ponto flutuante. Em seguida, ordene os elementos
desse vetor e imprima o vetor na tela.
*/
void ordena(float *v, int t){
    int i, j;
    float aux;
    for(i=0;i<t-1;i++)
        for(j=i+1;j<t;j++)
            if(*(v + i) > *(v + j)){
                aux = *(v+i);
                *(v+i) = *(v+j);
                *(v+j) = aux;
            }
}

int main(){
    int i;
    float v[10];
    printf("Digite 10 valores: ");
    for(i=0;i<10;i++)
        scanf("%f", &v[i]);

    ordena(v, 10);

    for(i=0;i<10;i++)
        printf("%.2f\n", v[i]);
    return 0;
}