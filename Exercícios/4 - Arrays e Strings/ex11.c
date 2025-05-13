#include <stdio.h>
/*
Leia um conjunto de números reais, armazenando-o em vetor. Em seguida, calcule
o quadrado de cada elemento desse vetor armazenando esse resultado em outro
vetor. Os conjuntos têm, no máximo, 20 elementos. Imprima os dois conjuntos
de números.
*/
int main(){
    int v[5], v2[5], i;
    printf("Escreva 5 posicoes de um vetor: ");
    for(i=0;i<5;i++)
        scanf("%d", &v[i]);
    for(i=0;i<5;i++)
        v2[i] = v[i] * v[i];
    printf("Conjunto 1: ");
    for(i=0;i<5;i++)
        if(i<4)
            printf("%d, ", v[i]);
        else
            printf("%d\n", v[i]);
    printf("Conjunto 2: ");
    for(i=0;i<5;i++)
        if(i<4)
            printf("%d, ", v2[i]);
        else
            printf("%d\n", v2[i]);
            
    return 0;
}