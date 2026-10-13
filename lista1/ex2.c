#include <stdio.h>

int main()
{

    float a, b, c;
    scanf("%f%f%f", &a, &b, &c);

    if (a > b && a > c)
    {
        if (b < c)
        {
            float aux = b;
            b = c;
            c = aux;
        }
    }
    else if (a > b)
    {
        float aux = b;
        b = a;
        a = c;
        c = aux;
    }
    else if (a > c)
    {
        float aux = b;
        b = a;
        a = aux;
    }
    else if (b < c)
    {
        float aux = a;
        a = c;
        c = aux;
    }
    else
    {
        float aux = a;
        a = b;
        b = c;
        c = aux;
    }

    if (a >= b + c)
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else
    {
        if (a * a == b * b + c * c)
        {
            printf("TRIANGULO RETANGULO\n");
        }
        else if (a * a > b * b + c * c)
        {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        else if (a * a < b * b + c * c)
        {
            printf("TRIANGULO ACUTANGULO\n");
        }

        if (a == b && b == c)
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        else if (a == b || b == c || a == c)
        {
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    return 0;
}