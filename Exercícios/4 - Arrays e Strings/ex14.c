#include <stdio.h>
#include <math.h>
/*
Faça um programa que calcule o desvio-padrão d de um vetor V contendo n números
em que m é a média desse vetor. Considere n = 10. O vetor v deve ser lido do teclado.
*/

float mediaArray(float *v, int t){ //func media
    int i;
    float sum=0;
    for(i=0;i<t;i++)
        sum+=v[i];
    return sum / (float)t;
}

void scanArray(float (*v)[], int max, int ini){
    if(ini < max){
        scanf("%f", &(*v)[ini]);    
        scanArray(v, max, ini+1);
    }
}

float desvioPadrao(float *v, int t){
    float media = mediaArray(v, t),  sum=0;
    int i;
    for(i=0;i<t;i++)
        sum+=pow(media - v[i], 2);
    return sqrt(sum / (float)(t));
}

int main(){ // main
    float v[10], desvio;
    scanArray(&v, 10, 0);
    desvio = desvioPadrao(v, 10);
    printf("O desvio padrao foi de %.3f\n", desvio);
    return 0;
}
