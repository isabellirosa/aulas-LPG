#include <stdio.h>

int main(){
    int contador = 1;
    int num;
    scanf("%d", &num);
    if(num<0){
        printf("numero negativo");
    }
    while(num!=0){
        printf("multiplicando por:");
        printf("%d", num);
        contador = contador * num;
        num = num - 1;
        printf(" resposta:");
        printf("%d\n", contador);
    }
    printf(" resposta final:");
    printf("%d\n", contador);
}