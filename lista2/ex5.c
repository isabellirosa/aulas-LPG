#include <stdio.h>

int eh_primo(int n){

    if(n < 2){
        return 0;
    }

    for(int i = 2; i < n; i++){

        if(n % i == 0){
            return 0;
        }
    }

    return 1;
}

int main(){

    int k, n;

    scanf("%d %d", &k, &n);

    int contador = 0;
    int numero = k + 1;

    while(contador < n){

        if(eh_primo(numero)){

            printf("%d ", numero);
            contador++;
        }

        numero++;
    }

    return 0;
}