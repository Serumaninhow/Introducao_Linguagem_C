#include <stdio.h>
#include <math.h>
/*
Faça um programa que leia os coeficientes de uma equação do segundo grau. Em 
seguida, calcule e mostre as raízes dessa equação
*/

int main(){
    double a=0, b=0, c=0, delta=0;
    printf("Escreva os coeficientes de uma equacao do segundo grau (ax^2 + bx + c = 0): ");
    scanf("%lf %lf %lf", &a, &b, &c);
    delta = b*b - 4 * a * c;
    if(delta < 0)
        printf("Nao ha raiz para %.2lfx^2 + %.2lfx + %.2lf = 0.", a, b, c);
    else
        printf("x\' = %.2lf\nx\" = %.2lf\n", (-b + sqrt(delta))/(2*a), (-b - sqrt(delta))/(2*a));
    printf("\n");
    return 0;
}