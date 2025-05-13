#include <stdio.h>
/*
Escreva um programa que leia um número inteiro e mostre o seu complemento
bit a bit.
*/
void printfBit(unsigned int n){
    if(n > 0){
        printfBit(n/2);
        printf("%u", n % 2);
    }
}
int main(){
    unsigned int num, comp;
    scanf("%u", &num);
    comp = ~num;
    printfBit(num);
    printf("\n");
    printfBit(comp);
    return 0;
}