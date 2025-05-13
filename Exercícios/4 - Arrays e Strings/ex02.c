#include <stdio.h>

/*
Crie um programa que leia do teclado seis valores inteiros e em seguida mostre na 
tela os valores lidos na ordem inversa.
*/

int main(){
    int v[6], i;
    for(i=0;i<6;i++){
        scanf("%d", &v[i]);
    }
    for(i=5;i>=0;i--){
        printf("%d ", v[i]);
    }
    return 0;
}