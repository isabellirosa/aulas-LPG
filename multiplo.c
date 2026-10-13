#include <stdio.h>

int main(){
    int n, x;
    scanf("%d %d", &n, &x);

    for(int i=1; i <= n; i++){
        if((i%x)==0){
        printf("%d", i);
        printf(" é multiplo de ");
        printf("%d\n", x); 
        }
    }
}