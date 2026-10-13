#include <stdio.h>

int maior(int x, int y){
    if(x>y){
        return x;
    }else{
        return y;
    }
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int maiorxy = maior(a,b);
    printf("%d\n", maiorxy);
}