#include <stdio.h>
/*
Faça um programa que preencha um vetor com 10 números reais. Em seguida,
calcule e mostre na tela a quantidade de números negativos e a soma dos números
positivos desse vetor.
*/
int main(){
    int v[10], i, sum=0, ttn=0;
    printf("Digite 10 valores inteiros: ");
    for(i=0;i<10;i++)
        scanf("%d", &v[i]);
    for(i=0;i<10;i++){
        if(v[i] >= 0)
            sum+=v[i];
        else
            ttn++;
    }
    printf("A soma dos valores positivos = %d\n"
            "A quantidade de numeros negativos = %d\n", sum, ttn);
    return 0;
}