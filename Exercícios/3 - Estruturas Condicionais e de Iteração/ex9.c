#include <stdio.h>
//Faça um programa que leia a altura e o peso de uma pessoa. De acordo com a
//tabela a seguir, verifique e mostre qual a classificação dessa pessoa.
/*
A - até 60kg - x < 120cm
B - até 60kg - 120 <= x <= 170 cm
C - até 60kg - x > 170 cm
D - entre 60 e 90kg - x < 120cm
E - entre 60 e 90kg - 120 <= x <= 170 cm
F - entre 60 e 90kg - x > 170 cm
G - Acima de 90kg - x < 120cm
H - Acima de 90kg - 120 <= x <= 170 cm
I - Acima de 90kg - x > 170 cm
*/
int main(){
    double peso=0, altura=0;
    char class = 'A';
    printf("Digite seu peso e altura (respectivamente kg e cm): ");
    scanf("%lf %lf", &peso, &altura);
    if(peso > 90){
        class+=6;
    } else if(peso >= 60){
        class+=3;
    }
    if(altura > 170){
        class+=2;
    }else if(altura >= 120){
        class+=1;
    }
    printf("A sua classificacao eh: %c\n", class);
    return 0;
}