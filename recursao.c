#include <stdio.h>

int fibonacci(int x){

    if(x == 1){
        return 1;
    }
    else if(x == 2){
        return 1;
        fibonacci(x-1);
    }
    return fibonacci(x - 1) + fibonacci(x - 2);
}

int main(){

    int n;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        printf("%d ", fibonacci(i));
    }

    printf("\n");
}