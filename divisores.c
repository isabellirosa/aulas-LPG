#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int divisores = 0;
    for(int i=1; i <= n/2; i++){
        if((n%i)==0){
        printf("%d", i);
        printf(" é divisor de ");
        printf("%d\n", n); 
        divisores ++;
        }
    }
    printf("quantidade total de divisores:");
    printf("%d\n", divisores+1);
}