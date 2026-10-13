#include <stdio.h>
int eh_primo(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}
int soma_primos(int n, int v[])
{
    if (n == -1)
    {
        return 0;
    }
    else if (eh_primo(v[n]) == 1)
    {
        return v[n] + soma_primos(n - 1, v);
    }
    else
    {
        return soma_primos(n - 1, v);
    }
}

int main()
{
        int n;
        scanf("%d", &n);
        int vetor[n];
        for (int i = 0; i < n; i++)
        {
            printf("escreva o termo %d do vetor ", i);
            scanf("%d", &vetor[i]);
        }
        printf("%d\n", soma_primos(n - 1, vetor));

        return 0;
}