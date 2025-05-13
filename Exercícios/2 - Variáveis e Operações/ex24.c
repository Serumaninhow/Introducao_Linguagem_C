#include <stdio.h>
#define M_PI 3.141592

/*
    Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de
    conversão é R = G * p/180, sendo G o ângulo em graus e R em radianos e π =
    3.141592.
*/

int main(){
    float radianos=0, graus=0;
    printf("Qual o angulo em graus?\n");
    scanf("%f", &graus);

    radianos = graus * M_PI / 180;

    printf("%.2f graus = %.2f rad (radianos)", graus, radianos);
    return 0;
}