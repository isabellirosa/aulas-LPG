#include <stdio.h>

int soma_impares(int x, int y){

    int soma = 0;

    if(x > y){

        for(int i = y + 1; i < x; i++){

            if(i % 2 != 0){
                soma += i;
            }
        }

    }else{

        for(int i = x + 1; i < y; i++){

            if(i % 2 != 0){
                soma += i;
            }
        }
    }

    return soma;
}

int main(){

    int x, y;

    scanf("%d %d", &x, &y);

    printf("%d\n", soma_impares(x, y));

    return 0;
}