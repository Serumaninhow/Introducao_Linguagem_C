#include <stdio.h>
/*
Faça um programa que leia um vetor de 10 posições. Verifique se existem valores
iguais e os escreva na tela.
*/
int main(){
    int v[10], i, j, k, v2[10], m=0, c=0;
    printf("Digite 10 valores: ");
    for(i=0;i<10;i++){
        scanf("%d", &v[i]);
    }
    for(i=0;i<9;i++)
        for(j=i+1;j<10;j++)
            if(v[i] == v[j]){
                c=0;
                for(k=0;k<m;k++)
                    if(v[j] == v2[k])
                        c=1;
                if(c==0){
                    v2[m]=v[j];
                    m++;
                }
            }
    if(m > 0){
        printf("Valores repetidos: ");
            for(i=0;i<m;i++){
                if(i<m-1)
                    printf("%d, ", v2[i]);
                else
                    printf("%d\n", v2[i]);
            }    
    }
    return 0;
}