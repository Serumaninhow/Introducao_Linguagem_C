#include <stdio.h>
#include <stdlib.h>

//Imprimindo uma letra na saída padrão

int main(){
    printf("Digite um caracter: ");
    char letra = getchar(); 
    printf("\"%c\"\n", letra);
    return 0;
}