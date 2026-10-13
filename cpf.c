#include <stdio.h>
#include <string.h>

int main()
{
    char strCpf[12];
    char c;

    scanf("%s", strCpf);
    // scanf(" %c", &c);

    // int contem = 0;
    int ehdigito = 0;

    for (int i = 0; strCpf[i] != '\0'; i++)
    {
        if (strCpf[i] == c)
        {
            // contem = 1;
        }
        if (!(strCpf[i] == '0' || strCpf[i] == '1' || strCpf[i] == '2' || strCpf[i] == '3' || strCpf[i] == '4' || strCpf[i] == '5' || strCpf[i] == '6' || strCpf[i] == '7' || strCpf[i] == '8' || strCpf[i] == '9'))
        {
            ehdigito = 1;
        }
    }

    // if (contem == 0) {
    //     printf("nao possui c");
    // } else {
    //     printf("possui c");
    // }
    if(strlen(strCpf)!=11){
        printf("quantidade insuficiente de digitos\n");
    }
    else if (ehdigito == 0)
    {
        int soma1 = 0;
        int multiplicador = 10;
        for (int i = 0; i < 9; i++)
        {
            int num = strCpf[i] - '0';
            soma1 += num * multiplicador;
            multiplicador--;
        }
        int resto = soma1 % 11;
        int d1;
        if (resto < 2)
        {
            d1 = 0;
        }
        else
        {
            d1 = 11 - resto;
        }

        int soma2 = 0;
        int multiplicador2 = 11;
        for (int i = 0; i < 9; i++)
        {
            int num = strCpf[i] - '0';
            soma2 += num * multiplicador2;
            multiplicador2--;
        }
        soma2 += d1 * 2;
        int resto2 = soma2 % 11;
        int d2;
        if (resto2 < 2)
        {
            d2 = 0;
        }
        else
        {
            d2 = 11 - resto2;
        }
        if (d1 == (strCpf[9] - '0') && d2 == (strCpf[10] - '0'))
        {
            printf("valido\n");
        }else{
            printf("invalido\n");
        }
    }
    else
    {
        printf("nem todos sao digitos, digite um cpf valido\n");
    }
}