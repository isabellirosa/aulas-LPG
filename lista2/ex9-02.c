#include <stdio.h>

int main(){
    float n;
    scanf("%f", &n);
    float soma = 0;
    for (float i = 1; i <= n; i++)
    {
        soma += 1/i;
    }
    
    printf("%f\n", soma);
    
    return 0;
}

