#include <stdio.h>

/*
Em matemática, o número harmônico designado por Hn define-se como o enésimo
termo da série harmônica.
*/

int main(){
    int n=-1;
    float hn=0;

    do{
        scanf("%d", &n);
    }while(n < 0);

    for(;n > 10; n--)
        hn += 1 / (float)n;
    
    printf("Hn = %.4f\n", hn);
    return 0;
}