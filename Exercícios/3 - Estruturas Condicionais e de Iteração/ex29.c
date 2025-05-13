#include <stdio.h>

/*
Escreva um programa que leia um número inteiro, maior ou igual a zero, do usuá
rio. Imprima o enésimo termo da sequência de Fibonacci. Essa sequência começa 
no termo de ordem zero, e, a partir do segundo termo, seu valor é dado pela soma 
dos dois termos anteriores. Alguns termos dessa sequência são: 0, 1, 1, 2, 3, 5, 8, 
13, 21, 34.
*/

int main(){
    int n1=0, n2=1, sq, aux;
    printf("Ate qual valor da sequencia de fibonacci desejas?\n");
    scanf("%d", &sq);

    if(sq >= 1) 
        printf("%d", n1);
    if(sq >= 2)
        printf(", %d", n2);
    sq -= 2;
    while(sq > 0){
        printf(", %d", n1 + n2);
        aux = n1;
        n1 = n2;
        n2 += aux;
        sq--;
    }
    printf(".\n");
    return 0;
}