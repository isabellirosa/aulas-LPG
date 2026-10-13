#include <stdio.h>

int main(){

    int inicio, fim;
    scanf("%d%d", &inicio,&fim);

    int totalHoras=0;
    if(inicio == fim){
        printf("24 horas");
    }else if(inicio > fim){
        fim = 24 + fim;
        totalHoras = fim - inicio;
        printf("%d", totalHoras);
    }else{
        totalHoras = fim - inicio;
        printf("O JOGO DUROU %d HORA(S)\n", totalHoras);
    }

    return 0;
}