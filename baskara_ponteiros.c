#include <stdio.h>
#include <math.h>

void raizesEq(float a, float b, float c, float *x1, float *x2)
{
    *x1 = (-(b) + sqrt((b) * (b) - 4 * (a) * (c))) / (2 * (a));

    *x2 = (-(b) - sqrt((b) * (b) - 4 * (a) * (c))) / (2 * (a));
}

int main()
{
    float a,b,c,x1,x2;

    scanf("%f %f %f", &a, &b, &c);

    raizesEq(a, b, c, &x1, &x2);

    printf("x1: %f x2: %f\n", x1, x2);

    return 0;
}