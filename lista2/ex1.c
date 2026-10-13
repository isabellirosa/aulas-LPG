#include <stdio.h>

int tipo_triangulo(float x, float y, float z)
{
    if (x + y <= z || x + z <= y || y + z <= x)
    {
        return 0;
    }

    if (x == y && y == z)
    {
        return 1;
    }

    if (x == y || x == z || y == z)
    {
        return 2;
    }
    else{
        return 3;
    }

}

int main()
{
    float x, y, z;

    scanf("%f %f %f", &x, &y, &z);

    printf("%d\n", tipo_triangulo(x, y, z));

    return 0;
}