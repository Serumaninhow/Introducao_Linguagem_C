#include <stdio.h>
#include <limits.h>

/*
Elabore um programa que faça a leitura de vários números inteiros até que se digi
te um número negativo. O programa tem de retornar o maior e o menor número 
lido.
*/

int main(){
    int valor=0, maior=INT_MIN, menor = INT_MAX;

    do{

        scanf("%d", &valor);

        if(valor >= 0){
            if(valor < menor)
                menor = valor;
            if(valor > maior)
                maior = valor;
        }

    }while(valor >= 0);

    //Caso em que nao ha entrada (comeca-se por negativo no scan)

    if(maior == INT_MIN) 
        maior = 0;

    if(menor == INT_MAX)
        menor = 0;

    printf("O menor valor foi: %d\n"
            "O maior valor foi: %d\n", menor, maior);

    return 0;
}