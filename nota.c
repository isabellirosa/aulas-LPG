#include <stdio.h>

int main()
{
    float nota;
    scanf("%f", &nota);
    while (nota < 0 || nota > 10)
    {
        printf("nota invalida digite novamente\n");
        scanf("%f", &nota);
    }
}