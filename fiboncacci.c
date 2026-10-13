#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int anterior1 = 0;
    int anterior2 = 1;
    for(int i=1; i <= n/2; i++){
        anterior1 = anterior2;
        anterior2 = anterior1 + anterior2;
    }
    printf("%d\n", anterior2);
}