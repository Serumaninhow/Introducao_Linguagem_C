#include <stdio.h>
#define M_PI 3.141592

/*
Leia o valor do raio de um círculo. Calcule e imprima a área do círculo correspondente.
A área do círculo é A = π * raio2, sendo π = 3.141592.
*/

int main(){
    float raio=0;
    scanf("%f", &raio);
    printf("Area = %.2f u.m\n", raio * raio * M_PI);
    printf("Circunferencia = %.2f u.m\n", raio * 2 * M_PI);
    return 0;
}