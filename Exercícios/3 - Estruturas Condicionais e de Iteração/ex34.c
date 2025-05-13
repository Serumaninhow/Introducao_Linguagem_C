#include <stdio.h>

/*
Faça um programa que calcule e escreva o valor de S:
1/1 + 3/2 + 5/3 + 7/4 ... 99/55
*/

int main(){
    int i;
    float s = 0;
    for(i=1;i<56;i++)
        s += (2*i - 1) / (float)i;
    printf("S = %.3f\n", s);
    return 0;
}