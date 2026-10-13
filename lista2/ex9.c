#include <stdio.h>
float soma(float n){
    if(n==1){
        return 1;
    }
    if(n>1){
       return (1/n)+soma(n-1); 
    }
}

int main(){
    float n;
    scanf("%f", &n);
    printf("%f\n", soma(n));
    
    return 0;
}

