#include <stdio.h>
/*
Faça um programa para ler 10 números diferentes a serem armazenados em um
vetor. Os números deverão ser armazenados no vetor na ordem em que forem lidos,
sendo que, caso o usuário digite um número que já foi digitado anteriormente,
o programa deverá pedir a ele para digitar outro número. Note que cada valor
digitado pelo usuário deve ser pesquisado no vetor, verificando se ele existe entre
os números que já foram fornecidos. Exiba na tela o vetor final que foi digitado.
*/
int main(){
    int v[10], i, j;
    printf("Digite 10 valores distintos entre si: ");
    for(i=0;i<10;i++){
        scanf("%d", &v[i]);
        for(j=0;j<i;j++)
            if(v[j] == v[i]){
                printf("Ja ha o valor %d no vetor, por favor, digite outro numero.\n", v[i]);
                i--;
                continue;
            }
    }

    for(i=0;i<10;i++)
        printf("v[%d] = %d\n", i, v[i]);
        
    return 0;
}