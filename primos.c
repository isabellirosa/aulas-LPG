#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int divisores = 0;
    for(int i=1; i <= n/2; i++){
        if((n%i)==0){
        divisores ++;
        }
    }
    if(divisores != 1){
        printf("não é primo\n");
    }
    else{
        printf("é primo\n");
    }
}