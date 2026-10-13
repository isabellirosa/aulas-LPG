#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    float soma = 0;
    float fatorial=1;
    for (float i = 0; i <= n; i++)
    {
        if(i==0){
            fatorial = fatorial * 1;
            soma += 1/fatorial;
        }else{
        fatorial = fatorial * i;
        soma += 1/fatorial;
        }
    }
    
    printf("%f\n", soma);

    return 0;
}