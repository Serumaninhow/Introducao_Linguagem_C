#include <stdio.h>

/*
Faça um programa que mostre uma contagem regressiva na tela, iniciando em 10 
e terminando em 0. Mostre uma mensagem “FIM!” após a contagem.
*/

int main(){
    int cont = 10;
    for(;cont >= 0; cont--)
        printf("%d\n", cont);
    printf("FIM!!!\n");
    return 0;
}