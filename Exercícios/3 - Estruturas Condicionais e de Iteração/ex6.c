#include <stdio.h>

//Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre
//seu peso ideal, utilizando as seguintes fórmulas (em que “h” corresponde à altura):
// Homens: (72,7 * h) – 58
// Mulheres: (62,1 * h) – 44,7

int main(){
    double altura=0;
    char sexo=0;
    printf("Digite a altura (cm) e o sexo (M ou F): ");

    do{
        scanf("%lf", &altura);
    }while(altura <= 0);

    do{
        getchar();
        scanf("%c", &sexo);
    }while(sexo != 'M' && sexo != 'F');

    altura = altura / 100;

    if(sexo == 'M')
        printf("O peso ideal eh: %.2lf kg\n", ((72.7 * altura) - 58));
    else
        printf("O peso ideal eh: %.2lf kg\n", ((62.1 * altura) - 44.7));

    return 0;
}

