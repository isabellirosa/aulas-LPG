#include <stdio.h>
float fatorial(int n){
    if(n==0){
        return 1;
    }else{
        return n* fatorial(n-1);
    }
}
float soma(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return (1 / fatorial(n)) + soma(n - 1);
}

int main()
{
    int n;

    scanf("%d", &n);

    printf("%f\n", soma(n));

    return 0;
}