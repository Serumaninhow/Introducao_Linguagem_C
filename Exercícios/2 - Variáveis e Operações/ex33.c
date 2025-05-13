#include <stdio.h>
#include <string.h>

/*
Elabore um programa que leia dois números inteiros e exiba o deslocamento, à
esquerda e à direita, do primeiro número pelo segundo.
*/

void binario(int valor){
    if(valor > 0){
        binario(valor / 2);
        printf("%i", valor % 2);
    }
}

int main(){
    int n1, n2;
    char str[11], bit[5];

    printf("Digite dois valores inteiros: ");
    scanf("%i %i", &n1, &n2);
    if(n2 > 1){
        strcpy(str, "deslocados");
        strcpy(bit, "bits");
    }else{
        strcpy(str, "deslocado");
        strcpy(bit, "bit");
    }
    binario(n1);
    printf(" %s %i %s = \n", str, n2, bit);
    binario(n1 >> n2);
    printf(" (pra direita)\n");
    binario(n1 << n2); 
    printf( " (pra esquerda)\n");
    return 0;
}