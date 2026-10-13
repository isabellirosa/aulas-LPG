#include <stdio.h>

int fibo(int n){

    if(n == 1 || n == 2){
        return 1;
    }

    int a = 1;
    int b = 1;
    int c;

    for(int i = 3; i <= n; i++){

        c = a + b;
        a = b;
        b = c;
    }

    return b;
}

int main(){

    int n;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        printf("%d ", fibo(i));
    }

    return 0;
}

