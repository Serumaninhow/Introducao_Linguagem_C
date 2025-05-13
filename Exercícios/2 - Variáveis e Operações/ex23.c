#include <stdio.h>

/*  Lê um valor que represente uma temperatura em graus Celsius e apresente-a convertida 
    em graus Fahrenheit. A fórmula de conversão é: F = C * (9.0/5.0) + 32.0, sendo F a temperatura
    em Fahrenheit e C a temperatura em Celsius.
*/

int main(){
    float celsius=0, fahrenheit=0;
    printf("Quantos graus celsius esta agora?\n");
    scanf("%f", &celsius);

    fahrenheit = celsius * 9 / 5 + 32;

    printf("Esta %.2f graus fahrenheit!\n", fahrenheit);
    return 0;
}