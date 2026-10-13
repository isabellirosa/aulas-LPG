#include <stdio.h>

int ehInteiro(char a)
{
    if (a == '1' || a == '2' || a == '3' || a == '4' || a == '5' || a == '6' || a == '7' || a == '8' || a == '9' || a == '0')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char caractere;
    int numero;

    scanf("%c", &caractere);

    if (ehInteiro(caractere))
    {
        numero = caractere - '0';
        printf("%d\n", numero);
    }
    else
    {
        printf("nao eh inteiro\n");
    }

    return 0;
}