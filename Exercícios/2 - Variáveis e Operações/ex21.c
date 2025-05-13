#include <stdio.h>

/*
Leia uma velocidade em km/h (quilômetros por hora) e apresente convertida em
m/s (metros por segundo). A fórmula de conversão é M = K/36, sendo K a velocidade
em km/h e M em m/s.
*/

int main(){
    double vel;
    printf("Escreva uma velocidade em km/h: ");
    scanf("%lf", &vel);
    printf("%.2lf km/h = %.2lf m/s", vel, vel/3.6);
    return 0;
}