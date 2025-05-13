#include <stdio.h>

/*
Leia quatro valores do tipo float. Calcule e exiba a média aritmética desses valores.
*/

int main(){
    float n1, n2, n3, n4, media;
    n1 = n2 = n3 = n4 = media = 0;
    printf("Digite 4 valores: ");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    media = n1 + n2 + n3 + n4;
    media = media / 4;

    printf("Media Aritmetica = %.2f", media);
    return 0;
}