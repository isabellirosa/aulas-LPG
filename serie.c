#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int primos = 0;
    int anterior = 2;
    while (primos < n)
    {
        int divisores = 0;
        for (int i = 1; i <= anterior; i++)
        {

            if ((anterior % i) == 0)
            {
                divisores++;
            }
        }
        if (divisores == 2)
        {
            printf("%d\n", anterior);
            primos++;
        }
        anterior++;
    }
    return 0;
}
