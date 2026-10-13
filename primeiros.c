#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    float somaQ = 0;
    float soma = 0;
    float media;
    for(int i = 1; i <= n; i++){
    somaQ = somaQ + (i*i);
    soma = soma + i;
    }
    media = soma/n;
    printf("a soma é ");
    printf("%.0f", soma);
    printf(" a soma dos quadrados é ");
    printf("%.0f", somaQ);
    
    printf(" a media é ");
    printf("%.0f\n", media);
}