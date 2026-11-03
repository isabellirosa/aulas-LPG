#include <stdio.h>

int main()
{
    int v[4] = {1, 4, 7, 11};
    int *i;

    for (i = v; i < v + 4; i++)
    {
        printf("v[%td]", i - v);
        printf("(%p)", i);
        printf("%d\n", *i);
    }

    return 0;
}