#include <stdio.h>
int tipotriangulo(float x, float y, float z)
{
    if (x == y == z)
    {
        return 1;
    }
    else if (x != y && x != z && y != z)
    {
        return 2;
    }
    else
    {
        return 3;
    }
}
int main()
{
    float l1, l2, l3;
    scanf("%f", &l1);
    scanf("%f", &l2);
    scanf("%f", &l3);
    int triangulo = tipotriangulo(l1, l2, l3);

    switch (triangulo)
    {
    case 1:
        printf("equilatero\n");
        break;
    case 2:
        printf("escaleno\n");
        break;
    case 3:
        printf("isoscele\n");
        break;
    }
}