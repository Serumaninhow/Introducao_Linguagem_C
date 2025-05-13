#include <stdio.h>
#define M_PI 3.141592
/*
Leia a altura e o raio de um cilindro circular e imprima o volume desse cilindro.
O volume de um cilindro circular é calculado por meio da seguinte fórmula:
V = π * raio2 * altura,
em que π = 3.141592
*/
int main(){
    float raio=0, altura=0;
    scanf("%f %f", &raio, &altura);
    printf("O volume desse cilindro eh: %.2f", M_PI * raio * raio * altura);
    return 0;
}