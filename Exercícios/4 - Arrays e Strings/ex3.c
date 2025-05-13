#include <stdio.h>

/*
Faça um programa que leia cinco valores e os armazene em um vetor. Em seguida, 
mostre todos os valores lidos juntamente com a média dos valores.
*/

int main(){
    int i, v[5], media=0;
    for(i=0;i<5;i++){
        scanf("%d", &v[i]);
        media+=v[i];
    }    
    for(i=0;i<5;i++)
        if(i<4)
            printf("%d + ", v[i]);
        else
            printf("%d\n", v[i]);
    printf("media = %.2f\n", media/(float)5);
    return 0;
}