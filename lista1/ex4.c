#include <stdio.h>

int main(){

    int par=0 , impar=0, negativo=0, positivo=0;
    int n;
    scanf("%d", &n);

    for(int i=0; i < n; i++){
        int numero;
        scanf("%d", &numero);
        if(numero%2 == 0){
            par++;
        }else{
            impar++;
        }
        if(numero>0){
            positivo++;
        }else if(numero<0){
            negativo++;
        }
    }
    printf("%d valor(es) pares\n", par);
    printf("%d valor(es) impares\n", impar);
    printf("%d valor(es) positivos\n", positivo);
    printf("%d valor(es) negativos\n", negativo);
    
    return 0;
}