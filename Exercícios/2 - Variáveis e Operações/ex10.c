#include <stdio.h>
#include <stdlib.h>

// lendo números de uma data, e os imprimindo separado por \'

int main(){
    int dia = 0;
    int mes = 0;
    int ano = 0;
    printf("Informe o dia, mes e ano do ocorrido (dia mes ano:) ");
    scanf("%d %d %d", &dia, &mes, &ano);
    printf("Data: %d\\%d\\%d", dia, mes, ano);
    return 0;
}